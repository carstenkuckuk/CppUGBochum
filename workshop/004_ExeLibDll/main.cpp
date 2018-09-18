// Datei main.cpp
//
// Ruft die Funktionen addieren() und subtrahieren() auf, die entweder �ber eine
// statische Bibliothek oder �ber eine dynamische Bibliothek hinzu kommen

// Wird �ber CMake mit -D gesetzt f�r das dynamisch gelinkte Hauptprogramm: #define USEDLL 

#include "addieren.hpp"
#include "subtrahieren.hpp"

#include <iostream>

int main(int argc, char**rgszargv)
{
	std::cout 
		<< "47 + 11 = " << addieren(47, 11) << std::endl
		<< "47 - 11 = " << subtrahieren(47, 11) << std::endl
		<< std::flush;

	return 0;
}