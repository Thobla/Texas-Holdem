#ifndef DECK_H
#define DECK_H
#include "Cards.h"
#include <array>
#include <memory>
class Deck {
	public:
		Card *deck[52];
		
		int assignedCards;
		Deck();
		Card** assignCard();


		~Deck();



};
#endif
