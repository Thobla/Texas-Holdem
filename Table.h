#ifndef TABLE_H
#define TABLE_H
#include "Cards.h"
#include "Deck.h"

class Table{
	public:
		Card **table[5];
		Table(Deck& deck);

};



#endif
