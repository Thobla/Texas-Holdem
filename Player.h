#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Cards.h"
#include <tuple>
#include "Deck.h"

class Player{
	private:
		const std::string name;
		int sjettonger; 
    public:
		Card **hand[2]; 
		Player(std::string name, int sjettonger, Deck& deck);

        std::string getName() const {return name;}

        int getSjettonger() const {return sjettonger;}
        void setSjettonger(int sjettonger) {this->sjettonger = sjettonger;}

        Card* getHand1() const {return *hand[0];}
        Card* getHand2() const {return *hand[1];}



};
#endif
