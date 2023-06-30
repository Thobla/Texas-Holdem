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

    //Deck *myDeck = new Deck(); //using new keyword, it is allocated in heap and must use delete keyword later
    Deck myDeck; //created in the stac, but might sink over to other variables if too big data.
    //shuffle the deck, first input takes a pointer to the start of the deck, second takes pointer to the end, third is generator
    Player p1("Player 1", 100);
    Player p2("Player 2", 200);
    
    std::cout << myDeck.deck[51]->value << "\n";

    std::shuffle(std::begin(myDeck.deck), std::end(myDeck.deck), std::mt19937{std::random_device{}()});
    
    p1.card1 = &myDeck.deck[51];
    p1.card2 = &myDeck.deck[50];
    p2.card1 = &myDeck.deck[49];
    p2.card2 = &myDeck.deck[48];

    std::cout << myDeck.deck[51]->value << "\n";
    std::cout << (*p1.card1)->value << "\n";
    std::cout << myDeck.deck[51] << "\n";

    std::shuffle(std::begin(myDeck.deck), std::end(myDeck.deck), std::mt19937{std::random_device{}()});
    std::cout << myDeck.deck[51]->value << "\n";
    std::cout << (*p1.card1)->value << "\n";
    std::cout << myDeck.deck[51] << "\n";


}
