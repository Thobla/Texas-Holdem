
#include "card.h"
#include <iostream>

int main()
{
    Hearts card1(2);
    Card card2(3);
    Clubs card3(4);

    std::cout << card1.value << " " << card2.value << " " << card3.value;

}
