#ifndef CARDS_H
#define CARDS_H

enum Suit {hearts, diamonds, spades, clubs};
class Card{
    public:
        int value;
	Suit suit;
        
        Card(int val, Suit suit);
	~Card();
};
#endif
