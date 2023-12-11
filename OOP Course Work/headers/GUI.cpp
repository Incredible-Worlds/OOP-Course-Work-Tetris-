#include "GUI.hpp"

void drawMenu::drawT() {
	std::cout << std::endl << std::endl << std::endl << std::endl;
	std::cout
		<< std::setw(30) << "|-------------|" << std::endl
		<< std::setw(30) << "|-------------|" << std::endl
		<< std::setw(24) << "| |" << std::endl
		<< std::setw(24) << "| |" << std::endl
		<< std::setw(24) << "| |" << std::endl
		<< std::setw(24) << "| |" << std::endl
		<< std::setw(24) << "| |" << std::endl
		<< std::setw(24) << "|-|" << std::endl;
}

void drawMenu::drawTE() {
	std::cout << std::endl << std::endl << std::endl << std::endl;
	std::cout
		<< std::setw(30) << "|-------------|" << std::setw(20) << "|-------------|" << std::endl
		<< std::setw(30) << "|-------------|" << std::setw(20) << "| /-----------|" << std::endl
		<< std::setw(24) << "| |" << std::setw(14) << "| |" << std::endl
		<< std::setw(24) << "| |" << std::setw(26) << "|  -----------|" << std::endl
		<< std::setw(24) << "| |" << std::setw(26) << "| /-----------|" << std::endl
		<< std::setw(24) << "| |" << std::setw(14) << "| |" << std::endl
		<< std::setw(24) << "| |" << std::setw(26) << "|  -----------|" << std::endl
		<< std::setw(24) << "|-|" << std::setw(26) << "|-------------|" << std::endl;
}

void drawMenu::drawTET() {
	std::cout << std::endl << std::endl << std::endl << std::endl;
	std::cout
		<< std::setw(30) << "|-------------|" << std::setw(20) << "|-------------|" << std::setw(20) << "|-------------|" << std::endl
		<< std::setw(30) << "|-------------|" << std::setw(20) << "| /-----------|" << std::setw(20) << "|-------------|" << std::endl
		<< std::setw(24) << "| |" << std::setw(14) << "| |" << std::setw(26) << "| |" << std::endl
		<< std::setw(24) << "| |" << std::setw(26) << "|  -----------|" << std::setw(14) << "| |" << std::endl
		<< std::setw(24) << "| |" << std::setw(26) << "| /-----------|" << std::setw(14) << "| |" << std::endl
		<< std::setw(24) << "| |" << std::setw(14) << "| |" << std::setw(26) << "| |" << std::endl
		<< std::setw(24) << "| |" << std::setw(26) << "|  -----------|" << std::setw(14) << "| |" << std::endl
		<< std::setw(24) << "|-|" << std::setw(26) << "|-------------|" << std::setw(14) << "| |" << std::endl;
}

void drawMenu::drawTETR() {
	std::cout << std::endl << std::endl << std::endl << std::endl;
	std::cout
		<< std::setw(30) << "|-------------|" << std::setw(20) << "|-------------|" << std::setw(20) << "|-------------|" << std::setw(20) << "|-------------|" << std::endl
		<< std::setw(30) << "|-------------|" << std::setw(20) << "| /-----------|" << std::setw(20) << "|-------------|" << std::setw(20) << "|  |       |  |" << std::endl
		<< std::setw(24) << "| |" << std::setw(14) << "| |" << std::setw(26) << "| |" << std::setw(26) << "|  |       |  |" << std::endl
		<< std::setw(24) << "| |" << std::setw(26) << "|  -----------|" << std::setw(14) << "| |" << std::setw(26) << "|-------------|" << std::endl
		<< std::setw(24) << "| |" << std::setw(26) << "| /-----------|" << std::setw(14) << "| |" << std::setw(26) << "|       |      " << std::endl
		<< std::setw(24) << "| |" << std::setw(14) << "| |" << std::setw(26) << "| |" << std::setw(26) << "|  |  |    |   " << std::endl
		<< std::setw(24) << "| |" << std::setw(26) << "|  -----------|" << std::setw(14) << "| |" << std::setw(26) << "|  |   |    |  " << std::endl
		<< std::setw(24) << "|-|" << std::setw(26) << "|-------------|" << std::setw(14) << "| |" << std::setw(26) << "|  |     |    |" << std::endl;
}

void drawMenu::drawTETRI() {
	std::cout << std::endl << std::endl << std::endl << std::endl;
	std::cout
		<< std::setw(30) << "|-------------|" << std::setw(20) << "|-------------|" << std::setw(20) << "|-------------|" << std::setw(20) << "|-------------|" << std::setw(10) << "|--|" << std::endl
		<< std::setw(30) << "|-------------|" << std::setw(20) << "| /-----------|" << std::setw(20) << "|-------------|" << std::setw(20) << "|  |       |  |" << std::setw(10) << "|--|" << std::endl
		<< std::setw(24) << "| |" << std::setw(14) << "| |" << std::setw(26) << "| |" << std::setw(26) << "|  |       |  |" << std::setw(10) << "|--|" << std::endl
		<< std::setw(24) << "| |" << std::setw(26) << "|  -----------|" << std::setw(14) << "| |" << std::setw(26) << "|-------------|" << std::setw(10) << "|--|" << std::endl
		<< std::setw(24) << "| |" << std::setw(26) << "| /-----------|" << std::setw(14) << "| |" << std::setw(26) << "|       |      " << std::setw(10) << "|--|" << std::endl
		<< std::setw(24) << "| |" << std::setw(14) << "| |" << std::setw(26) << "| |" << std::setw(26) << "|  |  |    |   " << std::setw(10) << "|--|" << std::endl
		<< std::setw(24) << "| |" << std::setw(26) << "|  -----------|" << std::setw(14) << "| |" << std::setw(26) << "|  |   |    |  " << std::setw(10) << "|--|" << std::endl
		<< std::setw(24) << "|-|" << std::setw(26) << "|-------------|" << std::setw(14) << "| |" << std::setw(26) << "|  |     |    |" << std::setw(10) << "|--|" << std::endl;
}

void drawMenu::drawTETRIS() {
	std::cout << std::endl << std::endl << std::endl << std::endl;
	std::cout
		<< std::setw(30) << "|-------------|" << std::setw(20) << "|-------------|" << std::setw(20) << "|-------------|" << std::setw(20) << "|-------------|" << std::setw(10) << "|--|" << std::setw(20) << "|-------------|" << std::endl
		<< std::setw(30) << "|-------------|" << std::setw(20) << "| /-----------|" << std::setw(20) << "|-------------|" << std::setw(20) << "|  |       |  |" << std::setw(10) << "|--|" << std::setw(20) << "|-------------|" << std::endl
		<< std::setw(24) << "| |" << std::setw(14) << "| |" << std::setw(26) << "| |" << std::setw(26) << "|  |       |  |" << std::setw(10) << "|--|" << std::setw(20) << "|--|           " << std::endl
		<< std::setw(24) << "| |" << std::setw(26) << "|  -----------|" << std::setw(14) << "| |" << std::setw(26) << "|-------------|" << std::setw(10) << "|--|" << std::setw(20) << "|-------------|" << std::endl
		<< std::setw(24) << "| |" << std::setw(26) << "| /-----------|" << std::setw(14) << "| |" << std::setw(26) << "|       |      " << std::setw(10) << "|--|" << std::setw(20) << "|-------------|" << std::endl
		<< std::setw(24) << "| |" << std::setw(14) << "| |" << std::setw(26) << "| |" << std::setw(26) << "|  |  |    |   " << std::setw(10) << "|--|" << std::setw(20) << "           |--|" << std::endl
		<< std::setw(24) << "| |" << std::setw(26) << "|  -----------|" << std::setw(14) << "| |" << std::setw(26) << "|  |   |    |  " << std::setw(10) << "|--|" << std::setw(20) << "|-------------|" << std::endl
		<< std::setw(24) << "|-|" << std::setw(26) << "|-------------|" << std::setw(14) << "| |" << std::setw(26) << "|  |     |    |" << std::setw(10) << "|--|" << std::setw(20) << "|-------------|" << std::endl;
}

int drawMenu::GetState() {
	return currentState;
}

void drawMenu::getKey() {
	int state = _getch();
	switch (state) {
	case 72:
		currentState--;
		break;
	case 80:
		currentState++;
		break;
	case 27:
		currentState = 27;
		return;
	}
	
	if (currentState <= 0) {
		currentState = 3;
	}
	else if (currentState >= 4) {
		currentState = 1;
	}
}

drawMenu::drawMenu() {
	currentState = 1;
	drawT();
	Sleep(250);
	system("CLS");

	drawTE();
	Sleep(250);
	system("CLS");

	drawTET();
	Sleep(250);
	system("CLS");

	drawTETR();
	Sleep(250);
	system("CLS");

	drawTETRI();
	Sleep(250);
	system("CLS");

	while (true) {
		drawTETRIS();
		switch (currentState) {
		case 1:
			std::cout << std::endl << std::endl;
			std::cout << std::setw(70) << "MAIN MENU" << std::endl << std::endl;
			std::cout << std::setw(61) << char(254) << "START NEW GAME" << std::endl;
			std::cout << std::setw(68) << "CONTINUE" << std::endl;
			std::cout << std::setw(64) << "EXIT" << std::endl;
			break;
		case 2:
			std::cout << std::endl << std::endl;
			std::cout << std::setw(70) << "MAIN MENU" << std::endl << std::endl;
			std::cout << std::setw(74) << "START NEW GAME" << std::endl;
			std::cout << std::setw(61) << char(254) <<"CONTINUE" << std::endl;
			std::cout << std::setw(64) << "EXIT" << std::endl;
			break;
		case 3:
			std::cout << std::endl << std::endl;
			std::cout << std::setw(70) << "MAIN MENU" << std::endl << std::endl;
			std::cout << std::setw(74) << "START NEW GAME" << std::endl;
			std::cout << std::setw(68) << "CONTINUE" << std::endl;
			std::cout << std::setw(61) << char(254) << "EXIT" << std::endl;
			break;
		case 27:
			return;
		}


		getKey();
		system("CLS");
	}
	
}	