#include "Player.h"
#include <string>
#include <tuple>
#include "Deck.h"

Player::Player(std::string name, int sjettonger, Deck& deck):
name(name), sjettonger(sjettonger)
{
	hand[0] = deck.assignCard();
	hand[1] = deck.assignCard();
};













