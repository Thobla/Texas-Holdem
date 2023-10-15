#include "Cards.h"
#include "Deck.h"
#include "Table.h"
#include "Player.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <random>

// Utility function to print a card's value and suit
void printCard(const Card* card) {
    int value = card->getValue();
    if (value > 1 && value < 11) {
        std::cout << value;
    } else {
        switch (value) {
            case 11: std::cout << "J"; break;
            case 12: std::cout << "Q"; break;
            case 13: std::cout << "K"; break;
            case 14: std::cout << "A"; break;
            default: std::cout << "?"; break;
        }
    }
    
    switch (card->getSuit()) {
        case hearts: std::cout << "♥"; break;
        case diamonds: std::cout << "♦"; break;
        case spades: std::cout << "♠"; break;
        case clubs: std::cout << "♣"; break;
    }
    std::cout << " ";
}

int main() {
    Deck deck;
    std::shuffle(std::begin(deck.deck), std::end(deck.deck), std::mt19937{std::random_device{}()});

    Table table(deck);

    const int numPlayers = 8;  // You can adjust this for fewer players
    std::vector<Player> players;

    // Initialize players
    for (int i = 0; i < numPlayers; i++) {
        players.emplace_back("Player " + std::to_string(i + 1), 100, deck);
    }

    // Print players' hands
    for (const auto& player : players) {
        std::cout << player.getName() << ": ";
        printCard(player.getHand1());
        printCard(player.getHand2());
        std::cout << "\n";
    }

    // Print table cards
    std::cout << "\nTable Cards: ";
    for (int i = 0; i < 5; i++) {
        printCard(table.getCardAt(i));
    }

    return 0;
}

