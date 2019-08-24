#ifndef HAND_H
#define HAND_H
#include <vector>
#include "Card.h"
class Hand
{
public:
    Hand() : value(0) {}
    int calcValue();
    void clearHand();
    void addCard(Card &card);
    void displayHand();

protected:
    std::vector<Card> hand;
    std::string owner;
    int value;
};

#endif // !HAND_H