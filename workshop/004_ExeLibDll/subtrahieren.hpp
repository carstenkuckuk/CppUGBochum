// Datei: subtrahieren.hpp
//

#ifndef __SUBTRAHIEREN_HPP__
#define __SUBTRAHIEREN_HPP__

#define DLLBINDING

#ifdef EXPORTDLL
#define DLLBINDING __declspec(dllexport)
#endif

#ifdef USEDLL
#define DLLBINDING __declspec(dllimport)
#endif


int DLLBINDING subtrahieren(int arg1, int arg2);

#endif
