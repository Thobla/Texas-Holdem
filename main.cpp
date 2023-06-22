#include "player.h"
#include "card.h"
#include <iostream>

int main()
{
    Card card1 = Hearts(2);
    Card card2 = Card(3);
    Card card3 = Card(4);

    std::cout << card1 << " " << card2 << " " << card3;

}
