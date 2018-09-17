project(002HelloInstaller)

# Wir legen ein Target an und zwar ein Executable, das den Namen HelloWorld haben soll.
# Es wird gebaut aus der Quellcodedatei HelloWorld.cpp:

add_executable(HelloWorld HelloWorld.cpp)

# Wir sagen CMake, daß diese Datei installiert werden soll:
install(
	TARGETS HelloWorld
	RUNTIME
	DESTINATION bin
	COMPONENT Applications
)

# Fuer Linux brauchen wir noch das hier:
set(CPACK_PACKAGE_CONTACT "Erika Mustermann")


# Und wir sagen CMake, daß wir einen Installer bauen wollen:
include(CPack)
