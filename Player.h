#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Cards.h"
#include <tuple>

class Player{
	public:
		std::string name;
		int sjettonger; 
		Card **card1;
		Card **card2;
		Card *hand[2]; 
		Player(std::string name, int sjettonger);


};
#endif
