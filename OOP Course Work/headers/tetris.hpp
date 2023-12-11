#pragma once

#ifdef _WIN32
#include <Windows.h>
#include "GUI.hpp"
#endif // _WIN32

class Tetris {
public:
	Tetris();
private:
	bool gameStatus;
};
