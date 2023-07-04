#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>
#include "Player.h"
#include "Cards.h"
#include "Table.h"
#include "HandRank.h"
#include "Deck.h"

int main(){
	Deck deck;
	Table table(deck);
	Player p1("meg", 100, deck);
	deck.deck[0] = new Card(7, hearts);
	deck.deck[1] = new Card(7, hearts);
	deck.deck[2] = new Card(7, hearts);
	deck.deck[3] = new Card(7, hearts);
	deck.deck[4] = new Card(8, hearts);
	deck.deck[5] = new Card(10, hearts);
	deck.deck[6] = new Card(10, hearts);

	std::vector<std::tuple<int, int>> currentRank;
	currentRank = highestRank(p1, table);
	std::sort(currentRank.begin(), currentRank.end());

	std::cout << std::get<1>(currentRank[1]);
};
