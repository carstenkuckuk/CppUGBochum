// Datei AdditionsTest.cpp
//
// Enthaelt sinnfreie Unittests 

// DUT:
// #include "zutestendeunit.hpp"

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

TEST(Additionstest, EinsUndVier)
{
	ASSERT_EQ( 1+4, 5 );
	ASSERT_NE( 1+4, 6 );
}

TEST(Additionstest, EinsUndFuenf)
{
	ASSERT_EQ( 1+5, 6 );
	ASSERT_NE( 1+5, 7 );
}


TEST(Additionstest, EinsUndSechs)
{
	ASSERT_EQ( 1+6, 7 );
	ASSERT_NE( 1+6, 8 );
}



TEST(Additionstest, EinsUndSieben)
{
	ASSERT_EQ(88888, 1+7);
}
