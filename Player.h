#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Cards.h"
#include <tuple>
#include "Deck.h"

class Player{
	public:
		std::string name;
		int sjettonger; 
		Card **card1;
		Card **card2;
		Card *hand[2]; 
		Player(std::string name, int sjettonger, Deck& deck);


};
#endif
