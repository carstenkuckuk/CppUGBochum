// Datei FunktionenTest.cpp
//
// Enth�lt Unit Tests f�r Fakult�ten usw 

// DUT:
#include "Funktionen.hpp"

// Google Test Library:
#include "gtest/gtest.h"

TEST(FunktionenTest, Fakultaeten)
{
	ASSERT_EQ( Fakultaet(1), 1 );
	ASSERT_EQ( Fakultaet(2), 2 );
	ASSERT_EQ( Fakultaet(3), 6 );
	ASSERT_EQ( Fakultaet(4), 24 );
}
