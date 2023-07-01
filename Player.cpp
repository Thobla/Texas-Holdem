#include "Player.h"
#include <string>
#include <tuple>
#include "Deck.h"

Player::Player(std::string name, int sjettonger, Deck& deck){
	this->name = name;
	this->sjettonger = sjettonger;
	card1 = deck.assignCard();
	card2 = deck.assignCard();
};













