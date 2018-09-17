project(003HelloGoogleTest)

INCLUDE_DIRECTORIES(
	../../libs/gtest-1.7.0/include
	../../libs/gtest-1.7.0
)

add_executable(HelloGoogleTest 
	UnitTestsMain.cpp
	Funktionen.hpp
	Funktionen.cpp
	FunktionenTest.cpp
	../../libs/gtest-1.7.0/src/gtest-all.cc
)
