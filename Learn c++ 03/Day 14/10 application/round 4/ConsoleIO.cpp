#include <Windows.h>

#include "ConsoleIO.h"

void ConsoleIO::GotoXY(int x, int y) {
	COORD xy = { static_cast<short>(x), static_cast<short>(y) };
	HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, xy);
}