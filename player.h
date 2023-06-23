#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "card.h"
#include <tuple>

class Player{
	public:
		std::string name;
		int sjettonger;
		//Card *card1;	
		//Card *card2; 
		//std::tuple hand; 
		Player(std::string name, int sjettonger);



};
#endif
