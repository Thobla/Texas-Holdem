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
		Card **hand[2]; 
		Player(std::string name, int sjettonger, Deck& deck);


};
#endif
