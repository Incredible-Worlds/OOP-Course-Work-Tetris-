#pragma once

#ifdef _WIN32
#include "GUI.hpp"
#include <Windows.h>
#include <iostream>

#endif // _WIN32

class Tetris {
public:
	Tetris();


private:
	bool gameStatus;
	bool boardStatus;
};
