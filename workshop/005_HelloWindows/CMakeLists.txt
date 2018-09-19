project(004HelloMessagebox)

# Erstes Target: Eine Applikation ohne irgendwelche Besonderheiten, aber mit Resource-Datei.
# Die Exe wird für das Console Subsystem markiert und als Einsprungpunkt main() genommen:

add_executable(HelloMessageboxConsoleSubsystem 
	HelloMessagebox.cpp
	HelloMessagebox.rc
)

# Zweites Target: Eine Applikation bei der wir WIN32 angegeben haben, auch mit Resource-Datei.
# Die Exe wird für das Windows GUI Subsystem markiert und als Einsprungpunkt WinMain() genommen:

add_executable(HelloMessageboxWindowsSubsystem WIN32 
	HelloMessagebox.cpp
	HelloMessagebox.rc
)
