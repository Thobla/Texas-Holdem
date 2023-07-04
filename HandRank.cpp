#include "Cards.h"
#include "HandRank.h"
#include "Table.h"
#include "Player.h"
#include <vector>
#include <tuple>


enum HandRank{highCard, pair, twoPair, threeOfAKind, straight, flush, fullHouse, fourOfAKind, straightFlush};

std::vector<std::tuple<int, int>> highestRank(Player player, Table table){
	Card *cards[7];
	cards[0] = *player.hand[0];
	cards[1] = *player.hand[1];
	for(int i = 0; i < 5; i++){
		cards[i + 2] = *table.table[i];
	};
	return updateDuplicates(*cards);

};

std::vector<std::tuple<int, int>> updateDuplicates(Card* cards){
	bool usedCards[7];
	std::vector<std::tuple<int, int>> value;
	std::tuple<int,int> tup;
	int count;
	for(int i = 0; i < 7; i++){
		usedCards[i] = false;
	};
	for(int i = 0; i < 7; i++){
		if(!usedCards[i]){
			count = 1;
			for(int j = i+1; j < 7; j++){
				if(cards[i].value == cards[j].value){
					usedCards[j] = true;
					count += 1;

				};
			};
			value.push_back(std::make_tuple(cards[i].value, count));
		};
	};
	return value;

};


