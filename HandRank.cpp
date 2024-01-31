#include "Cards.h"
#include "HandRank.h"
#include "Table.h"
#include "Player.h"
#include <vector>
#include <tuple>
#include <algorithm>

enum HandRank{highCard, pair, twoPair, threeOfAKind, straight, flush, fullHouse, fourOfAKind, straightFlush};

std::vector<std::tuple<int, int>> highestRank(Player player, Table table){ // returns the rank of the players hand
	Card *cards[7];
	cards[0] = *player.hand[0];
	cards[1] = *player.hand[1];
	for(int i = 0; i < 5; i++){
		cards[i + 2] = *table.table[i];
	};
	return updateDuplicates(*cards);

};

int hasStraightFlush(Card* cards){ //returns the rank of the straightFlush, 0 if non-existant.
    bool usedCards[7];
    int value;
    int count;
    std::vector<std::tuple<int, int>> valueToIdx;
    std::vector<std::tuple<Cards::Suit, int>> suitToIdx;
    for(int i = 1; i < 7; i++){
        valueToIdx.push_back(std::make_tuple(cards[i].getValue(), i));
        suitToIdx.push_back(std::make_tuple(cards[i].getSuit(), i));
    };
    std::sort(valueToIdx.begin(), valueToIdx.end(), //got from chatgpt, need to test functionality
    [](const std::tuple<int, char, float> &a, const std::tuple<int, char, float> &b) -> bool
    {
        return std::get<0>(a) < std::get<0>(b);
        });



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
				if(cards[i].getValue() == cards[j].getValue()){
					usedCards[j] = true;
					count += 1;

				};
			};
			value.push_back(std::make_tuple(cards[i].getValue(), count));
		};
	};
	return value;

};


