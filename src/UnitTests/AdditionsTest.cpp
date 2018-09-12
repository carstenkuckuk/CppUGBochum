// Datei AdditionsTest.cpp
//
// Enthaelt sinnfreie Unittests 

// DUT:


// Google Test Library:
#include "gtest/gtest.h"

TEST(Additionstest, EinsUndEins)
{
	ASSERT_EQ( 1+1, 2 );
	ASSERT_NE( 1+1, 3 );
}

TEST(Additionstest, ZweiUndZwei)
{
	ASSERT_EQ( 2+2, 4 );
	ASSERT_NE( 2+2, 2 );
}

TEST(Additionstest, EinsUndZwei)
{
	ASSERT_EQ( 1+2, 3 );
	ASSERT_NE( 1+2, 4 );
}

TEST(Additionstest, EinsUndDrei)
{
	ASSERT_EQ( 1+3, 4 );
	ASSERT_NE( 1+3, 5 );
}
