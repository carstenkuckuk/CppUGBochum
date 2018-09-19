#include <windows.h>

int main(int nargc, char**rgszargs)
{
	MessageBox(0, "main() sagt: Mensch, ist das doof!", "HelloMessagebox", MB_OK);
	return 0;
}

int WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	MessageBox(0, "WinMain() sagt: Mensch, ist das doof!", "HelloMessagebox", MB_OK);
	return 0;
}
