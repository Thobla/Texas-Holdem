#include "Deck.h"
#include "Card.h"
#include <vector>


Deck::Deck(){
	int x = 0;
	for(int i = 2; i <= 14; i++){
		Deck::deck[x] = new Hearts(i);
		x++;	
		Deck::deck[x] = new Diamonds(i);
		x++;
		Deck::deck[x] = new Clubs(i);
		x++;
		Deck::deck[x] = new Spades(i);
		x++;
	};

};

