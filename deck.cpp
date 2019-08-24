#include <algorithm>
#include <random>
#include "deck.h"
enum Rank
{
    Joker = 0,
    Ace = 1,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King
};

Deck::Deck()
{
    createDeck();
}
void Deck::createDeck()
{
    // clear deck first!
    cards.clear();
    for (int j = Card::DIAMONDS; j < Card::SUIT_COUNT; j++)
    {
        for (int i = Ace; i <= King; i++)
        {
            Card card(i, SuitString[j]);
            cards.push_back(card);
        }
    }
}
Card &Deck::dealCard()
{
    //if (!cards.empty) todo: if wanted
    Card &temp = cards.back();
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
void Deck::displayDeck()
{
    for (auto card : cards)
    {
        std::cout << card << std::endl;
    }
}
void Deck::shuffleDeck()
{
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cards.begin(), cards.end(), g);
}
