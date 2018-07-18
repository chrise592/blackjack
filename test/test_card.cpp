#define CATCH_CONFIG_MAIN  // this tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "card.h"

TEST_CASE( "default card constructor" )
{
    Card card;
    REQUIRE( card.GetValue() == 1 );
}

TEST_CASE( "Card::Flip()" )
{
    Card card(Card::rank::ACE, Card::suit::SPADES, false);
    REQUIRE( card.GetValue() == 0);
    card.Flip();
    REQUIRE( card.GetValue() == 1);
}

