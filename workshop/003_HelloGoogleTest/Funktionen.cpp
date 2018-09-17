// Funktionen.cpp
//
// Funktionen, die man mit Unit Tests testen kann

#include "Funktionen.hpp"

int Fakultaet(int nArg)
{
	int nErg = 1;

	for(int i=1; i<=nArg; i++)
	{
		nErg = nErg * i;
	}

	return nErg;
}
