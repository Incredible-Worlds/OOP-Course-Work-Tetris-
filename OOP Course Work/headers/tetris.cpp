#include "tetris.hpp"

Tetris::Tetris()
{
	system("color 25");


	gameStatus = true;
	while (gameStatus) {
		int** gamefield = new int* [10];
		for (int i = 0; i < 10; i++)
		{
			gamefield[i] = new int[15];
		}
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 15; j++)
			{
				gamefield[i][j] = 0;
			}
		}
		

	}
}


