#include "Deck.h"
#include "Cards.h"
#include <vector>
#include <iostream>


int assignedCards = 0;
Card *deck[52];
Deck::Deck(){
	int x = 0;
	for(int i = 2; i <= 14; i++){
		deck[x] = new Card(i, hearts);
		x++;	
		deck[x] = new Card(i, diamonds);
		x++;
		deck[x] = new Card(i, clubs);
		x++;
		deck[x] = new Card(i, spades);
		x++;
	};


};

Card** Deck::assignCard(){
	Card** ptr = &deck[assignedCards];
	assignedCards += 1;
	return ptr;
};





Deck::~Deck(){
  for (auto x : Deck::deck){
    delete x;


  };


};

