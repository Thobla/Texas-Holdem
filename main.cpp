#include "Deck.h"
#include "Player.h"
#include "Cards.h"
#include "Table.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <random>

int main()
{


    //Deck *myDeck = new Deck(); //using new keyword, it is allocated in heap and must use delete keyword later
    Deck myDeck; //created in the stac, but might sink over to other variables if too big data.
    //shuffle the deck, first input takes a pointer to the start of the deck, second takes pointer to the end, third is generator


    Table table(myDeck);


    Player p1("Player 1", 100, myDeck);
    Player p2("Player 2", 200, myDeck);
    
    //std::cout << myDeck.deck[51]->value << "\n";

    std::cout << "deck[0] : " << myDeck.deck[1]->getValue() << "\n";
    std::cout << "p1, card1->value: " <<(p1.getHand1())->getValue() << "\n";
    std::cout << "p1, card2->value: " <<(p1.getHand2())->getValue() << "\n";

    std::shuffle(std::begin(myDeck.deck), std::end(myDeck.deck), std::mt19937{std::random_device{}()});

    std::cout << "shuffle" << "\n";
    std::cout << "deck[0]: " << myDeck.deck[0]->getValue() << "\n";
    std::cout << "p1, card1->value: " <<(p1.getHand1())->getValue() << "\n";
    std::cout << "p1, card2->value: " <<(p1.getHand2())->getValue() << "\n";


    std::cout << "table card-values: " << (table.getCardAt(0))->getValue() << (table.getCardAt(1))->getValue() << (table.getCardAt(2))->getValue()
<< (table.getCardAt(3))->getValue() << (table.getCardAt(4))->getValue() << "\n";

    std::cout << "deck card 0,1,2,3 and 4 - values " << myDeck.deck[0] -> getValue() <<myDeck.deck[1]-> getValue() <<myDeck.deck[2]-> getValue() <<myDeck.deck[3] -> getValue() <<myDeck.deck[4]-> getValue() << "\n";
}
