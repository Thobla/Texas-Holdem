#include "card.h"

class Card : public crd::Card{
    public:
        const int value;
        Card(int val){
            value = val;

        };
};

class Clubs : public Card{
    public:
        Clubs(int val) : Card::Card(val) {};

    
};


class Hearts : public Card{ 

    public:
        Hearts(int val) : Card::Card(val) {};
};
class Spades : public Card{ 

    public:
        Spades(int val) : Card::Card(val) {};

}; 
class Diamonds : public Card{ 

    public:
        Diamonds(int val) : Card::Card(val) {};

};

