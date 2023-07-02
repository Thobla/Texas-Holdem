#include "Table.h"
#include "Cards.h"
#include "Deck.h"

Table::Table(Deck& deck){
	for (int i = 0; i < 5; i++){
		table[i] = deck.assignCard();
	};
};




