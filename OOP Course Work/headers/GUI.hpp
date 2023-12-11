#pragma once
#include <windows.h>
#include <iostream>
#include <iomanip>
#include <conio.h>

class drawMenu {
public:
	drawMenu();
	int GetState();
private:
	void drawT();
	void drawTE();
	void drawTET();
	void drawTETR();
	void drawTETRI();
	void drawTETRIS();

	void getKey();
	int currentState;
};

