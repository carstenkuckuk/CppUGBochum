cmake_minimum_required(VERSION 3.10)
project(003HelloGoogleTest)

add_executable(HelloGoogleTest 
	UnitTestsMain.cpp
	Funktionen.hpp
	Funktionen.cpp
	FunktionenTest.cpp
	../../libs/gtest-1.7.0/src/gtest-all.cc
)
target_include_directories(HelloGoogleTest PRIVATE 
	../../libs/gtest-1.7.0/include
	../../libs/gtest-1.7.0
)