#include "pch.h"
#include "gtest/gtest.h"
#include <cstring>
#include "aux_functions.h"
extern "C"
{
#include "deck.h"
}

TEST(TestCaseName, TestName) {
    EXPECT_EQ(1, 1);
    EXPECT_TRUE(true);
}

TEST(Deck, EmptyDeckTransferZeroCardsCheckReturnValue)
{
    Card deck_before[1] = { NULL, NULL, 0, 0 };
    Card deck_after[1] = { NULL, NULL, 0, 0 };
    Card hand_before[1];
    Card hand_after[1] = { NULL, NULL, 0, 0 };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, 0);

    // Verifica se o valor de retorno esta' correto
    ASSERT_EQ(0, ret);
}

TEST(Deck, EmptyDeckTransferZeroCardsCheckDeck)
{
    Card deck_before[1] = { NULL, NULL, 0, 0 };
    Card deck_after[1] = { NULL, NULL, 0, 0 };
    Card hand_before[1];
    Card hand_after[1] = { NULL, NULL, 0, 0 };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, 0);

    ASSERT_TRUE(ArraysMatch(deck_after, deck_before));
}

TEST(Deck, EmptyDeckTransferZeroCardsCheckHand)
{
    Card deck_before[1] = { NULL, NULL, 0, 0 };
    Card deck_after[1] = { NULL, NULL, 0, 0 };
    Card hand_before[1];
    Card hand_after[1] = { NULL, NULL, 0, 0 };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, 0);

    ASSERT_TRUE(ArraysMatch(hand_after, hand_before));
}

TEST(Deck, OneCardDeckTransferOneCardCheckReturnValue)
{
    const char* face = "Ace", * suit = "Clubs";
    Card deck_before[2] = {
        { face, suit, 1, 3 },
        { NULL, NULL, 0, 0 }
    };
    Card deck_after[1] = {
        { NULL, NULL, 0, 0 }
    };

    Card hand_before[2];
    Card hand_after[2] = {
        { face, suit, 1, 3 },
        { NULL, NULL, 0, 0 }
    };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, 1);

    // Verifica se o valor de retorno esta' correto
    ASSERT_EQ(1, ret);
}

TEST(Deck, OneCardDeckTransferOneCardCheckDeck)
{
    const char* face = "Ace", * suit = "Clubs";
    Card deck_before[2] = {
        { face, suit, 1, 3 },
        { NULL, NULL, 0, 0 }
    };
    Card deck_after[1] = {
        { NULL, NULL, 0, 0 }
    };

    Card hand_before[2];
    Card hand_after[2] = {
        { face, suit, 1, 3 },
        { NULL, NULL, 0, 0 }
    };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, 1);

    ASSERT_TRUE(ArraysMatch(deck_after, deck_before, 1));
}

TEST(Deck, OneCardDeckTransferOneCardCheckHand)
{
    const char* face = "Ace", * suit = "Clubs";
    Card deck_before[2] = {
        { face, suit, 1, 3 },
        { NULL, NULL, 0, 0 }
    };
    Card deck_after[1] = {
        { NULL, NULL, 0, 0 }
    };

    Card hand_before[2];
    Card hand_after[2] = {
        { face, suit, 1, 3 },
        { NULL, NULL, 0, 0 }
    };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, 1);

    ASSERT_TRUE(ArraysMatch(hand_after, hand_before));
}

TEST(Deck, OneCardDeckTransferZeroCardsCheckReturnValue)
{
    const char* face = "Ace", * suit = "Clubs";
    Card deck_before[2] = {
        { face, suit, 1, 3 },
        { NULL, NULL, 0, 0 }
    };
    Card deck_after[2] = {
        { face, suit, 1, 3 },
        { NULL, NULL, 0, 0 }
    };

    Card hand_before[1];
    Card hand_after[1] = {
        { NULL, NULL, 0, 0 }
    };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, 0);

    // Verifica se o valor de retorno esta' correto
    ASSERT_EQ(0, ret);
}

TEST(Deck, OneCardDeckTransferZeroCardsCheckDeck)
{
    const char* face = "Ace", * suit = "Clubs";
    Card deck_before[2] = {
        { face, suit, 1, 3 },
        { NULL, NULL, 0, 0 }
    };
    Card deck_after[2] = {
        { face, suit, 1, 3 },
        { NULL, NULL, 0, 0 }
    };

    Card hand_before[1];
    Card hand_after[1] = {
        { NULL, NULL, 0, 0 }
    };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, 0);

    ASSERT_TRUE(ArraysMatch(deck_after, deck_before));
}

TEST(Deck, OneCardDeckTransferZeroCardsCheckHand)
{
    const char* face = "Ace", * suit = "Clubs";
    Card deck_before[2] = {
        { face, suit, 1, 3 },
        { NULL, NULL, 0, 0 }
    };
    Card deck_after[2] = {
        { face, suit, 1, 3 },
        { NULL, NULL, 0, 0 }
    };

    Card hand_before[1];
    Card hand_after[1] = {
        { NULL, NULL, 0, 0 }
    };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, 0);

    ASSERT_TRUE(ArraysMatch(hand_after, hand_before));
}

TEST(Deck, TwoCardDeckTransferOneCardCheckReturnValue)
{
    const char* face1 = "Ace", * suit1 = "Clubs";
    const char* face2 = "Ace", * suit2 = "Spades";
    Card deck_before[3] = {
        { face1, suit1, 1, 3 },
        { face2, suit2, 1, 4 },
        { NULL, NULL, 0, 0 }
    };
    Card deck_after[2] = {
        { face2, suit2, 1, 4 },
        { NULL, NULL, 0, 0 }
    };

    Card hand_before[2];
    Card hand_after[2] = {
        { face1, suit1, 1, 3 },
        { NULL, NULL, 0, 0 }
    };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, 1);

    // Verifica se o valor de retorno esta' correto
    ASSERT_EQ(1, ret);
}

TEST(Deck, TwoCardDeckTransferOneCardCheckDeck)
{
    const char* face1 = "Ace", * suit1 = "Clubs";
    const char* face2 = "Ace", * suit2 = "Spades";
    Card deck_before[3] = {
        { face1, suit1, 1, 3 },
        { face2, suit2, 1, 4 },
        { NULL, NULL, 0, 0 }
    };
    Card deck_after[2] = {
        { face2, suit2, 1, 4 },
        { NULL, NULL, 0, 0 }
    };

    Card hand_before[2];
    Card hand_after[2] = {
        { face1, suit1, 1, 3 },
        { NULL, NULL, 0, 0 }
    };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, 1);

    ASSERT_TRUE(ArraysMatch(deck_after, deck_before, 2));
}

TEST(Deck, TwoCardDeckTransferOneCardCheckHand)
{
    const char* face = "Ace", * suit = "Clubs";
    Card deck_before[2] = {
        { face, suit, 1, 3 },
        { NULL, NULL, 0, 0 }
    };
    Card deck_after[1] = {
        { NULL, NULL, 0, 0 }
    };

    Card hand_before[2];
    Card hand_after[2] = {
        { face, suit, 1, 3 },
        { NULL, NULL, 0, 0 }
    };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, 1);

    ASSERT_TRUE(ArraysMatch(hand_after, hand_before));
}

TEST(Deck, ThreeCardDeckTransferOneCardCheckReturnValue)
{
    const char* face1 = "Ace", * suit1 = "Clubs";
    const char* face2 = "Ace", * suit2 = "Spades";
    const char* face3 = "Deuce", * suit3 = "Diamonds";
    Card deck_before[3 + 1] = {
        { face1, suit1, 1, 3 },
        { face2, suit2, 1, 4 },
        { face3, suit3, 2, 2 },
        { NULL, NULL, 0, 0 }
    };
    Card deck_after[2 + 1] = {
        { face2, suit2, 1, 4 },
        { face3, suit3, 2, 2 },
        { NULL, NULL, 0, 0 }
    };

    Card hand_before[1 + 1];
    Card hand_after[1 + 1] = {
        { face1, suit1, 1, 3 },
        { NULL, NULL, 0, 0 }
    };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, 1);

    // Verifica se o valor de retorno esta' correto
    ASSERT_EQ(1, ret);
}

TEST(Deck, ThreeCardDeckTransferOneCardCheckDeck)
{
    const char* face1 = "Ace", * suit1 = "Clubs";
    const char* face2 = "Ace", * suit2 = "Spades";
    const char* face3 = "Deuce", * suit3 = "Diamonds";
    Card deck_before[3 + 1] = {
        { face1, suit1, 1, 3 },
        { face2, suit2, 1, 4 },
        { face3, suit3, 2, 2 },
        { NULL, NULL, 0, 0 }
    };
    Card deck_after[2 + 1] = {
        { face2, suit2, 1, 4 },
        { face3, suit3, 2, 2 },
        { NULL, NULL, 0, 0 }
    };

    Card hand_before[1 + 1];
    Card hand_after[1 + 1] = {
        { face1, suit1, 1, 3 },
        { NULL, NULL, 0, 0 }
    };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, 1);

    // Verifica se o valor de retorno esta' correto
    ASSERT_TRUE(ArraysMatch(deck_after, deck_before, 2 + 1));
}

TEST(Deck, ThreeCardDeckTransferOneCardCheckHand)
{
    const char* face1 = "Ace", * suit1 = "Clubs";
    const char* face2 = "Ace", * suit2 = "Spades";
    const char* face3 = "Deuce", * suit3 = "Diamonds";
    Card deck_before[3 + 1] = {
        { face1, suit1, 1, 3 },
        { face2, suit2, 1, 4 },
        { face3, suit3, 2, 2 },
        { NULL, NULL, 0, 0 }
    };
    Card deck_after[2 + 1] = {
        { face2, suit2, 1, 4 },
        { face3, suit3, 2, 2 },
        { NULL, NULL, 0, 0 }
    };

    Card hand_before[1 + 1];
    Card hand_after[1 + 1] = {
        { face1, suit1, 1, 3 },
        { NULL, NULL, 0, 0 }
    };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, 1);

    // Verifica se o valor de retorno esta' correto
    ASSERT_TRUE(ArraysMatch(hand_after, hand_before));
}

TEST(Deck, ThreeCardDeckTransferTwoCardsCheckReturnValue)
{
    const int cards_to_transfer = 2;
    const char* face1 = "Ace", * suit1 = "Clubs";
    const char* face2 = "Ace", * suit2 = "Spades";
    const char* face3 = "Deuce", * suit3 = "Diamonds";
    Card deck_before[3 + 1] = {
        { face1, suit1, 1, 3 },
        { face2, suit2, 1, 4 },
        { face3, suit3, 2, 2 },
        { NULL, NULL, 0, 0 }
    };
    Card deck_after[1 + 1] = {
        { face3, suit3, 2, 2 },
        { NULL, NULL, 0, 0 }
    };

    Card hand_before[2 + 1];
    Card hand_after[2 + 1] = {
        { face1, suit1, 1, 3 },
        { face2, suit2, 1, 4 },
        { NULL, NULL, 0, 0 }
    };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, cards_to_transfer);

    // Verifica se o valor de retorno esta' correto
    ASSERT_EQ(cards_to_transfer, ret);
}

TEST(Deck, ThreeCardDeckTransferTwoCardsCheckDeck)
{
    const int starting_cards_on_deck = 3;
    const int cards_to_transfer = 2;
    const char* face1 = "Ace", * suit1 = "Clubs";
    const char* face2 = "Ace", * suit2 = "Spades";
    const char* face3 = "Deuce", * suit3 = "Diamonds";
    Card deck_before[starting_cards_on_deck + 1] = {
        { face1, suit1, 1, 3 },
        { face2, suit2, 1, 4 },
        { face3, suit3, 2, 2 },
        { NULL, NULL, 0, 0 }
    };
    Card deck_after[starting_cards_on_deck - cards_to_transfer + 1] = {
        { face3, suit3, 2, 2 },
        { NULL, NULL, 0, 0 }
    };

    Card hand_before[cards_to_transfer + 1];
    Card hand_after[cards_to_transfer + 1] = {
        { face1, suit1, 1, 3 },
        { face2, suit2, 1, 4 },
        { NULL, NULL, 0, 0 }
    };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, cards_to_transfer);

    // Verifica se o valor de retorno esta' correto
    ASSERT_TRUE(ArraysMatch(deck_after, deck_before, starting_cards_on_deck - cards_to_transfer + 1));
}

TEST(Deck, ThreeCardDeckTransferTwoCardsCheckHand)
{
    const int starting_cards_on_deck = 3;
    const int cards_to_transfer = 2;
    const char* face1 = "Ace", * suit1 = "Clubs";
    const char* face2 = "Ace", * suit2 = "Spades";
    const char* face3 = "Deuce", * suit3 = "Diamonds";
    Card deck_before[starting_cards_on_deck + 1] = {
        { face1, suit1, 1, 3 },
        { face2, suit2, 1, 4 },
        { face3, suit3, 2, 2 },
        { NULL, NULL, 0, 0 }
    };
    Card deck_after[starting_cards_on_deck - cards_to_transfer + 1] = {
        { face3, suit3, 2, 2 },
        { NULL, NULL, 0, 0 }
    };

    Card hand_before[cards_to_transfer + 1];
    Card hand_after[cards_to_transfer + 1] = {
        { face1, suit1, 1, 3 },
        { face2, suit2, 1, 4 },
        { NULL, NULL, 0, 0 }
    };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, cards_to_transfer);

    // Verifica se o valor de retorno esta' correto
    ASSERT_TRUE(ArraysMatch(hand_after, hand_before));
}

TEST(Deck, EmptyDeckTransferOneCardCheckReturnValue)
{
    const int starting_cards_on_deck = 0;
    const int cards_to_transfer = 1;

    Card deck_before[1] = { NULL, NULL, 0, 0 };
    Card deck_after[1] = { NULL, NULL, 0, 0 };
    Card hand_before[1];
    Card hand_after[1] = { NULL, NULL, 0, 0 };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, 1);

    // Verifica se o valor de retorno esta' correto
    ASSERT_EQ(0, ret);
}

TEST(Deck, EmptyDeckTransferOneCardCheckDeck)
{
    const int starting_cards_on_deck = 0;
    const int cards_to_transfer = 1;

    Card deck_before[1] = { NULL, NULL, 0, 0 };
    Card deck_after[1] = { NULL, NULL, 0, 0 };
    Card hand_before[1];
    Card hand_after[1] = { NULL, NULL, 0, 0 };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, 1);

    ASSERT_TRUE(ArraysMatch(deck_after, deck_before, 1));
}

TEST(Deck, EmptyDeckTransferOneCardCheckHand)
{
    const int starting_cards_on_deck = 0;
    const int cards_to_transfer = 1;

    Card deck_before[1] = { NULL, NULL, 0, 0 };
    Card deck_after[1] = { NULL, NULL, 0, 0 };
    Card hand_before[1];
    Card hand_after[1] = { NULL, NULL, 0, 0 };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, 1);

    ASSERT_TRUE(ArraysMatch(hand_after, hand_before));
}

#if 0
TEST(Deck, ThreeCardDeckTransferThreeCardsBufferOverflowCheckDeck)
{
    const int starting_cards_on_deck = 3;
    const int cards_to_transfer = 2;
    const char* face1 = "Ace", * suit1 = "Clubs";
    const char* face2 = "Ace", * suit2 = "Spades";
    const char* face3 = "Deuce", * suit3 = "Diamonds";
    Card deck_before[6] = {
        { face1, suit1, 1, 3 },
        { face2, suit2, 1, 4 },
        { face3, suit3, 2, 2 },
        { NULL, NULL, 0, 0 },
        { (char*)0xAAAAAAAA, (char*)0xAAAAAAAA, 0xAA, 0xAA },
        { (char*)0xAAAAAAAA, (char*)0xAAAAAAAA, 0xAA, 0xAA }
    };
    Card deck_after[4] = {
        { NULL, NULL, 0, 0 },
        { face2, suit2, 1, 4 },
        { face3, suit3, 2, 2 },
        { NULL, NULL, 0, 0 },
    };

    Card hand_before[4];
    Card hand_after[4] = {
        { face1, suit1, 1, 3 },
        { face2, suit2, 1, 4 },
        { face3, suit3, 2, 2 },
        { NULL, NULL, 0, 0 },
    };

    memset(hand_before, 0xAA, sizeof(hand_before));

    unsigned int ret = fillHandExt(deck_before, hand_before, 3);

    // Verifica se o valor de retorno esta' correto
    ASSERT_TRUE(ArraysMatch(deck_after, deck_before, 4));
}

#endif