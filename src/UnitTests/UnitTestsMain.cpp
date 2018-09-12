// Datei src/UnitTests/UnitTestsMain.cpp
//
#include "gtest/gtest.h"

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  int nErg = RUN_ALL_TESTS();

  return nErg;
}
