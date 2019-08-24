#include "../deck.h"
#include <gtest/gtest.h>

TEST(DeckTest, DealOne)
{
    Deck ourDeck;
    ourDeck.createDeck();
    Card c = ourDeck.dealCard();
    EXPECT_EQ(c.rank, 1);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}