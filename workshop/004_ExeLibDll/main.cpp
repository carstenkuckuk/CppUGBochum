// Datei main.cpp
//
// Ruft die Funktionen addieren() und subtrahieren() auf, die entweder über eine
// statische Bibliothek oder über eine dynamische Bibliothek hinzu kommen

// Wird über CMake mit -D gesetzt für das dynamisch gelinkte Hauptprogramm: #define USEDLL 

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