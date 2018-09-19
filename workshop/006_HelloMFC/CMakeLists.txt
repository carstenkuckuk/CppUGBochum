cmake_minimum_required(VERSION 3.10)
project(006HelloMFC)

# Für eine MFC-Applikation muß das Preprocessor-Symbol _AFXDLL gesetzt werden und CMake muß gesagt werden,
# wie die MFC Bibliotheken eingebunden werden sollen: Statisch oder dynamisch:
set(CMAKE_MFC_FLAG 2) #1=static MFC, 2=shared MFC

add_executable(HelloMFC WIN32 
	HelloMFC.cpp
	HelloMFC.rc
)
target_compile_definitions(HelloMFC PRIVATE _AFXDLL)
target_compile_definitions(HelloMFC PRIVATE _UNICODE)
target_compile_definitions(HelloMFC PRIVATE _WIN32_WINNT=0x0601 )