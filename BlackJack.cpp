#include "Blackjack.h"

void Blackjack::newGame()
{
    std::cout << "New Game" << std::endl;
    gameDeck.createDeck();
    clearHands();
    gameDeck.shuffleDeck();
}
void Blackjack::deal()
{
    if (!dealt)
    {
        // deal to each in sequence
        playersHand.push_back(gameDeck.dealCard());
        dealersHand.push_back(gameDeck.dealCard());
        playersHand.push_back(gameDeck.dealCard());
        dealersHand.push_back(gameDeck.dealCard());
        dealt = true;
    }
    std::cout << "\n Player's hand" << std::endl;
    displayHand(playersHand);
    std::cout << "\n Dealer's hand" << std::endl;
    displayHand(dealersHand);
}
void Blackjack::hit()
{
    std::cout << "hit" << std::endl;
    std::cout << gameDeck.dealCard() << std::endl;
}

void Blackjack::clearHands()
{
    playersHand.clear();
    dealersHand.clear();
    dealt = false;
}

void Blackjack::displayHand(std::vector<Card> &hand)
{
    for (auto card : hand)
    {
        std::cout << "  " << card << std::endl;
    }
}