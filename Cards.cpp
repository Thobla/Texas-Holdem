#include "Cards.h"
#include <iostream>
#include <string>

Card::Card(int val) {
    value = val;
}

Card::~Card(){
}

Clubs::Clubs(int val) : Card(val) {}

Diamonds::Diamonds(int val) : Card(val) {}

Spades::Spades(int val) : Card(val) {}

Hearts::Hearts(int val) : Card(val) {}

