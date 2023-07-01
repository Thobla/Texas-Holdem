#ifndef TABLE_H
#define TABLE_H
#include "Cards.h"
#include "Deck.h"

class Table{
	public:
		Card **card1;
		Card **card2;
		Card **card3;
		Card **card4;
		Card **card5;

		Table(Deck& deck);

};



#endif
