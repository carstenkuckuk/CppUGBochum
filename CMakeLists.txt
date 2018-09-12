project(CppUGBochum)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(HelloWorld src/HelloWorld.cpp)
install(
	TARGETS HelloWorld
	RUNTIME
	DESTINATION bin
	COMPONENT Applications
)

########################################
###
###  Installers for Windows (NSIS) and
###

set(CPACK_PACKAGE_NAME     "CppUGBochum")
set(CPACK_PACKAGE_VENDOR   "kuckuk.com")
set(CPACK_PACKAGE_CONTACT  "Carsten Kuckuk <ck@kuckuk.com>")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Demonstration Programs for C++ UG Meeting")
set(CPACK_PACKAGE_VERSION "1.2.3")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "2")
set(CPACK_PACKAGE_VERSION_PATCH "3")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "CppUGBochum")

set(CPACK_CREATE_DESKTOP_LINKS HelloWorld)
set(CPACK_NSIS_MODIFY_PATH ON)

# Start Menue Entries:
set(CPACK_PACKAGE_EXECUTABLES "HelloWorld" "Hello C++ World"
)

set(CPACK_NSIS_MENU_LINKS "https://www.meetup.com/pottcpp/events/247868442/" "C++ UG Meeting Web Site" )

include(InstallRequiredSystemLibraries)

include(CPack)
