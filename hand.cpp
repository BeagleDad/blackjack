#include "hand.h"

int Hand::calcValue()
{
    int handVal = 0;
    for (auto card : hand)
    {
        handVal += card.rank <= 10 ? card.rank : 10;
        // std::cout << "  " << card << std::endl;
    }
    return handVal;
}

void Hand::addCard(Card &card)
{
    hand.push_back(card);
    std::cout << "  " << card << std::endl;
}

void Hand::clearHand()
{
    hand.clear();
}

void Hand::displayHand()
{
    int handVal = 0;
    std::cout << owner << std::endl;
    for (auto card : hand)
    {
        handVal += card.rank <= 10 ? card.rank : 10;
        std::cout << "  " << card << std::endl;
    }
    std::cout << " Value: " << handVal << std::endl;
}