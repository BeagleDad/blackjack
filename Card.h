#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <vector>

constexpr int ACE = 1;
constexpr int JACK = 11;
constexpr int QUEEN = 12;
constexpr int KING = 13;

/**
 * @brief Class that defines the properties of a card
 * 
 */
class Card
{
public:
    /**
     * @brief defines the suits in a deck
     * 
     */
    enum Suit
    {
        DIAMONDS,
        CLUBS,
        HEARTS,
        SPADES,
        SUIT_COUNT
    };

    /**
     * @brief Strings used to print suit values.
     * 
     */
    std::string SuitString[4] = {
        "DIAMONDS",
        "CLUBS",
        "HEARTS",
        "SPADES"};

    /**
     * @brief Construct a new Card object
     * 
     * @param value 
     * @param suit 
     */
    Card(int value, Suit suit)
        : value_(value), suit_(suit) {}

    friend std::ostream &operator<<(std::ostream &os, Card const &tc)
    {
        return os << tc.value_ << " of " << tc.SuitString[tc.suit_];
    }

private:
    /**
     * @brief the cards value
     * 
     */
    int value_;
    Suit suit_;
};

#endif // !CARD_H
