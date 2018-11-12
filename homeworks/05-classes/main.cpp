#include "tic_tac_toe_board.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "peg.h"
#include<iostream>
#include<string>
#include<memory>
#include<vector>

using std::cout; using std::cin; 
using std::endl; using std::vector;

int main()
{

	int enable = 1;

	do
	{

		TIC_TAC_TOE_MANAGER controller;

		int board_choice;

		cout << endl;
		cout << "Play Tic Tac Toe?" << endl;
		cout << endl;
		cout << "Choice 0 = TicTacToe3 (connect 3 in a row to win)" << endl;
		cout << "Choice 1 = TicTacToe4 (connect 4 in a row to win)" << endl;
		cout << endl;
		cout << "Enter your choice: ";
		cin >> board_choice;
		cout << endl;


		//std::unique_ptr<TIC_TAC_TOE_BOARD> board;

		if (board_choice = 0)
		{
			auto a = controller.get_game(tic_tac_toe_3);
		}
		else if (board_choice = 1)
		{
			auto a = controller.get_game(tic_tac_toe_4);
		}

		string choice;

		cout << endl;
		cout << "Play Tic Tac Toe?" << endl;
		cout << endl;
		cout << "Choice X = Player X" << endl;
		cout << "Choice O = Player O" << endl;
		cout << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		cout << endl;

		if (choice == "X" || choice == "O" || choice == "x" || choice == "o")
		{
			std::unique_ptr<TIC_TAC_TOE_BOARD> board;

			board->start_game(choice);
		}

	} while (enable = 1);

	return 0;

}