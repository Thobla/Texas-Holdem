#include "Table.h"
#include "Cards.h"
#include "Deck.h"

Table::Table(Deck& deck){
	card1 = deck.assignCard();
	card2 = deck.assignCard();
	card3 = deck.assignCard();
	card4 = deck.assignCard();
	card5 = deck.assignCard();
}





