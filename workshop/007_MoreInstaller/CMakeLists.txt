project(007MoreInstaller)

# Wir legen ein Target an und zwar ein Executable, das den Namen HelloWorld haben soll.
# Es wird gebaut aus der Quellcodedatei HelloWorld.cpp:
set(CMAKE_MFC_FLAG 2) #1=static MFC, 2=shared MFC
add_executable(HelloWorld WIN32 
	HelloWorld.cpp
)
target_compile_definitions(HelloWorld PRIVATE _AFXDLL)
target_compile_definitions(HelloWorld PRIVATE _UNICODE)
target_compile_definitions(HelloWorld PRIVATE _WIN32_WINNT=0x0601 )


# Mit install() sagen wir CMake welche Targets oder Dateien wo auf dem Zielsystem landen sollen.
# Mehr unter https://gitlab.kitware.com/cmake/community/wikis/doc/cmake/Install-Commands
# Zuerst das Programm HelloWorld.exe:
install(
	TARGETS HelloWorld
	RUNTIME
	DESTINATION bin
)
# Dann zwei Text-Dateien:
install(
	FILES license.txt readme.txt
	DESTINATION .
)

# Generische Installer-Einstellungen:
set(CPACK_PACKAGE_NAME     "007MoreInstaller")
set(CPACK_PACKAGE_VENDOR   "kuckuk.com")
set(CPACK_PACKAGE_CONTACT  "Carsten Kuckuk <ck@kuckuk.com>")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Beispiel 7 aus dem CMake Workshop")
set(CPACK_PACKAGE_VERSION "10.11.12")
set(CPACK_PACKAGE_VERSION_MAJOR "10")
set(CPACK_PACKAGE_VERSION_MINOR "11")
set(CPACK_PACKAGE_VERSION_PATCH "12")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "007MoreInstaller")
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/license.txt")
set(CPACK_RESOURCE_FILE_README "${CMAKE_CURRENT_SOURCE_DIR}/readme.txt")
set(CPACK_CREATE_DESKTOP_LINKS HelloWorld)

# Start Menue Entries:
set(CPACK_PACKAGE_EXECUTABLES "HelloWorld" "Hello C++ World"
)

# NSIS-spezifische Einträge:
set(CPACK_NSIS_MODIFY_PATH ON)
set(CPACK_NSIS_MENU_LINKS "http://kuckuk.com/" "kuckuk.com Web Site" )
set(CPACK_NSIS_DISPLAY_NAME "${CPACK_PACKAGE_INSTALL_DIRECTORY}")
set(CPACK_NSIS_HELP_LINK "http:\\\\\\\\www.kuckuk.com")
set(CPACK_NSIS_URL_INFO_ABOUT "http:\\\\\\\\www.kuckuk.com")
set(CPACK_NSIS_CONTACT "ck@kuckuk.com")
set(CPACK_NSIS_MODIFY_PATH ON)

include(InstallRequiredSystemLibraries)

# Und wir sagen CMake, daß wir einen Installer bauen wollen:
include(CPack)
