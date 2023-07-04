#include "Cards.h"
#include <iostream>
#include <string>

Card::Card(int val, Suit suit) {
    value = val;
    this->suit = suit;

};

Card::~Card(){
};


