#include <algorithm>
#include <random>
#include "deck.h"

Deck::Deck()
{
    createDeck();
}
void Deck::createDeck()
{
    for (int j = Card::DIAMONDS; j < Card::SUIT_COUNT; j++)
    {
        for (int i = 0; i < KING; i++)
        {
            Card card(i + 1, (Card::Suit)j);
            cards.push_back(card);
        }
    }
}
Card Deck::dealCard()
{
    Card temp = cards.back();
    cards.pop_back();
    return temp;
}

// void Deck::dealHands()
// {
//     if (!dealt)
//     {
//         // deal to each in sequence
//         playersHand.push_back(dealCard());
//         dealersHand.push_back(dealCard());
//         playersHand.push_back(dealCard());
//         dealersHand.push_back(dealCard());
//         dealt = true;
//     }
//     std::cout << "\n Player's hand" << std::endl;
//     displayHand(playersHand);
//     std::cout << "\n Dealer's hand" << std::endl;
//     displayHand(dealersHand);
// }

void Deck::shuffleDeck()
{
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cards.begin(), cards.end(), g);
}
