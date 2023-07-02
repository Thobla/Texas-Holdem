#include "Cards.h"
#include <iostream>
#include <string>

//enum Suit {hearts, diamonds, spades, clubs};
Card::Card(int val, Suit suit) {
    value = val;
    this->suit = suit;

};

Card::~Card(){
};


