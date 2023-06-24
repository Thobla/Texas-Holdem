#include "Deck.h"
#include "Player.h"
#include "Cards.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <random>

int main()
{
    Hearts card1(2);
    Card card2(3);
    Clubs card3(4);

    std::cout << card1.value << " " << card2.value << " " << card3.value << "\n";

    Deck *myDeck = new Deck();
    //shuffle the deck, first input takes a pointer to the start of the deck, second takes pointer to the end, third is generator
    std::shuffle(std::begin(myDeck->deck), std::end(myDeck->deck), std::mt19937{std::random_device{}()});

    std::cout << myDeck->deck[51]->value << "\n";

}
