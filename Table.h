#ifndef TABLE_H
#define TABLE_H
#include "Cards.h"
#include "Deck.h"

class Table{
	public:
		Table(Deck& deck);

        Card* getCardAt(int index){
            if (index >= 0 && index <= 4){
                return *table[index];
            }
            return nullptr;
        }

    private: 
		Card **table[5];
};



#endif
