#define CATCH_CONFIG_MAIN

#include "catch.hpp"

#include "hand.h"

TEST_CASE( "hand constructor" )
{
    Hand hand;
    REQUIRE( hand.GetTotal() == 0 );
}
