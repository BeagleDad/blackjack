#include "Blackjack.h"

void Blackjack::newGame()
{
    std::cout << "New Game" << std::endl;
    gameDeck.createDeck();
    clearHands();
    gameDeck.shuffleDeck();
    //gameDeck.displayDeck();
}
void Blackjack::deal()
{
    if (!dealt)
    {
        // deal to each in sequence
        playersHand.addCard(gameDeck.dealCard());
        dealersHand.addCard(gameDeck.dealCard());
        playersHand.addCard(gameDeck.dealCard());
        dealersHand.addCard(gameDeck.dealCard());
        dealt = true;
    }
    // std::cout << "\n Player's hand" << std::endl;
    // displayHand(playersHand);
    // std::cout << "\n Dealer's hand" << std::endl;
    // displayHand(dealersHand);
}
void Blackjack::hit()
{
    std::cout << "hit" << std::endl;
    Card tempCard = gameDeck.dealCard();
    playersHand.addCard(tempCard);
    // std::cout << tempCard << std::endl
    //           << std::endl;
    // std::cout << "\n Player's hand" << std::endl;
    // displayHand(playersHand);
    // std::cout << "\n Dealer's hand" << std::endl;
    // displayHand(dealersHand);
}

void Blackjack::stand()
{
    // todo: figure out what to do here.
    std::cout << dealersPlay() << std::endl;
}

void Blackjack::clearHands()
{
    playersHand.clearHand();
    dealersHand.clearHand();
    dealt = false;
}

void Blackjack::displayHands()
{
    playersHand.displayHand();
    dealersHand.displayHand();
}

// void Blackjack::displayHand(std::vector<Card> &hand)
// {
//     int handVal = 0;
//     for (auto card : hand)
//     {
//         handVal += card.rank <= 10 ? card.rank : 10;
//         std::cout << "  " << card << std::endl;
//     }
//     std::cout << "Hand value: " << handVal << std::endl;
// }

Hand &Blackjack::compareHands()
{
    return playersHand;
}

int Blackjack::dealersPlay()
{
    int val = dealersHand.calcValue();
    dealersHand.displayHand();
    while (val < 17)
    {
        dealersHand.addCard(gameDeck.dealCard());
        val = dealersHand.calcValue();
        std::cout << "Val = " << val << std::endl;
    }
    return val;
}
