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

    //std::cout << card1.value << " " << card2.value << " " << card3.value << "\n";

    //Deck *myDeck = new Deck(); //using new keyword, it is allocated in heap and must use delete keyword later
    Deck myDeck; //created in the stac, but might sink over to other variables if too big data.
    //shuffle the deck, first input takes a pointer to the start of the deck, second takes pointer to the end, third is generator
    Player p1("Player 1", 100, myDeck);
    Player p2("Player 2", 200, myDeck);
    
    //std::cout << myDeck.deck[51]->value << "\n";

    std::cout << "deck[0] : " << myDeck.deck[1]->value << "\n";
    std::cout << "p1, card1->value: " <<(*p1.card1)->value << "\n";
    std::cout << "p1, card2->value: " <<(*p1.card2)->value << "\n";

    std::shuffle(std::begin(myDeck.deck), std::end(myDeck.deck), std::mt19937{std::random_device{}()});

    std::cout << "shuffle" << "\n";
    std::cout << "deck[0]: " << myDeck.deck[0]->value << "\n";
    std::cout << "p1, card1->value: " <<(*p1.card1)->value << "\n";
    std::cout << "p1, card2->value: " <<(*p1.card2)->value << "\n";
}
