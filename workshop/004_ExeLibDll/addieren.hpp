// Datei: addieren.hpp
//

#ifndef __ADDIEREN_HPP__
#define __ADDIEREN_HPP__

#define DLLBINDING

#ifdef EXPORTDLL
#define DLLBINDING __declspec(dllexport)
#endif

#ifdef USEDLL
#define DLLBINDING __declspec(dllimport)
#endif

int DLLBINDING addieren(int arg1, int arg2);

#endif
