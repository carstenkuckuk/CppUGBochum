project(004ExeLibDll)

# Eine statische Bibliothek (.lib):
add_library(mathstatisch STATIC addieren.hpp addieren.cpp subtrahieren.hpp subtrahieren.cpp)

# Eine dynamische/shared Bibliothek (.dll):
add_library(mathdynamisch SHARED addieren.hpp addieren.cpp subtrahieren.hpp subtrahieren.cpp)
target_compile_definitions(mathdynamisch PRIVATE EXPORTDLL)

# Ein ausführbares Programm, das die obige statische Bibliothek benutzt:
add_executable(mainstatisch main.cpp)
target_link_libraries(mainstatisch mathstatisch)

# Ein ausführbares Programm, das die obige dynamische Bibliothek benutzt:
add_executable(maindynamisch main.cpp)
target_compile_definitions(maindynamisch PRIVATE USEDLL=1)
target_link_libraries(maindynamisch mathdynamisch)

