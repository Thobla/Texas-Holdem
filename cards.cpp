#include "card.h"
#include <iostream>
#include <string>

Card::Card(int val) {
    value = val;
}

Clubs::Clubs(int val) : Card(val) {}

Diamonds::Diamonds(int val) : Card(val) {}

Spades::Spades(int val) : Card(val) {}

Hearts::Hearts(int val) : Card(val) {}


