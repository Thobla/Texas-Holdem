#include "Deck.h"
#include "Player.h"
#include "Card.h"
#include <iostream>

int main()
{
    Hearts card1(2);
    Card card2(3);
    Clubs card3(4);

    std::cout << card1.value << " " << card2.value << " " << card3.value << std::endl;

    Deck *myDeck = new Deck();

    std::cout << myDeck->deck[51]->value << std::endl;

}
