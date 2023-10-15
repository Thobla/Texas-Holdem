#ifndef CARDS_H
#define CARDS_H

enum Suit {hearts, diamonds, spades, clubs};
class Card{
    public:
        Card(int value, Suit suit);

        int getValue() const {return value;}
        Suit getSuit() const {return suit;}

	    ~Card();

    private:
        const int value;
	    const Suit suit;
        
};
#endif
