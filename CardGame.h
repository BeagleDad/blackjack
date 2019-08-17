#ifndef CARDGAME_H
#define CARDGAME_H

#include <vector>
#include "Card.h"
#include "deck.h"

class CardGame
{
public:
    virtual void displayHand(std::vector<Card> &hand) = 0;
    virtual void deal() = 0;
    virtual void clearHands() = 0;

protected:
    Deck gameDeck;
};

#endif // !CARDGAME_H
