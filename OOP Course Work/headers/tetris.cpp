#include "tetris.hpp"


Tetris::Tetris()
{
	gameStatus = true;

	boardStatus = false;

	while (gameStatus)
	{
		while (boardStatus != 1)
		{
			int** gamefield = new int* [10];
			for (int i = 0; i < 10; i++)
			{
				gamefield[i] = new int[5];
			}

			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					gamefield[i][j] = 0;
				}
			}
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					std::cout << gamefield[i][j] << " ";
				}
				std::cout << std::endl;
			}
			boardStatus = true;
		}


		
	}

	
	
}


