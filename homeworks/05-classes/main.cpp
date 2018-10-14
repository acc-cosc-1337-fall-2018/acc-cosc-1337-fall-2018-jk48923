#include "tic_tac_toe_board.h"
#include<iostream>
#include<string>

using std::cout; using std::cin; 
using std::endl; using std::vector;

int main()
{

	TIC_TAC_TOE_BOARD a;
	TIC_TAC_TOE_BOARD b;
	TIC_TAC_TOE_BOARD c;
	TIC_TAC_TOE_BOARD result;

	vector<TIC_TAC_TOE_BOARD> types{ a, b, c };

	string choice;

	while (true)
	{

		cout << "Play Tic Tac Toe?" << endl;
		cout << endl;
		cout << "Choice x = Player X" << endl;
		cout << "Choice o = Player O" << endl;
		cout << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		if (choice == "X" || choice == "O" || choice == "x" || choice == "o")
		{

			for (auto b : types)
			{
				while (b.game_over() == false)
				{
					//b.start_game("X");
					//b.start_game("O");

					cin >> b;

					result = result + b;

					cout << b << endl;
				}

			}

			cout << endl;
			cout << "Player " << b.get_player() << " is the winner!" << endl;
			cout << endl;
		}

		else
			cout << "Please enter X or O!";

		return false;
	
	}

	return 0;
}
