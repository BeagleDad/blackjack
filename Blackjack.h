#ifndef BLACKJACK_H
#define BLACKJACK_H

#include "CardGame.h"
class Blackjack : public CardGame
{
public:
    Blackjack() : dealt(false) {}
    void newGame();

    void deal() override;

    void hit();

    void displayDeck();

    void displayHand(std::vector<Card> &hand) override;
    void clearHands() override;

private:
    bool dealt;
    std::vector<Card> dealersHand;
    std::vector<Card> playersHand;
};
#endif // !BLACKJACK_H