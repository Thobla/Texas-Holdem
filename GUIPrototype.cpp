#include "Deck.h"
#include "Player.h"
#include "Cards.h"
#include "Table.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <random>

int main()
{

    Deck myDeck;


    Table table(myDeck);


    Player p1("Player 1", 100, myDeck);
    Player p2("Player 2", 200, myDeck);

    for (int i = 0; i < 30; i++){
	    std::cout << '-';
    };

    std::cout << "\n";
    
    std::cout << '|';
    for (int i = 1; i < 30; i++){
	    std::cout << ' ';

    };
    std::cout << '|' << "\n";

    for (int i = 0; i < 30; i++){
	    std::cout << '-';
    };












};
