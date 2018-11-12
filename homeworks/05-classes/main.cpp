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
	//Create an instance of TicTacToeManager
	//Prompt user for Game Type using enum as variable(0 = tic tac toe 3 and 1 = tic tac toe 4)
	//Get an instance of TicTacToeBoard concrete class by calling the get_game function and passing the GameType value to the function(0 or 1)
	//Play the game using a loop until game is over.
	//Save the game to the manager by calling the save_game function.

	//Create an instance of TicTacToeManager
	TIC_TAC_TOE_MANAGER controller;

	//Prompt user for Game Type using enum as variable(0 = tic tac toe 3 and 1 = tic tac toe 4)
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

	//controller.get_game(board_choice);

	//if (board_choice = 0)
	//{
	//	controller.get_game(GameType);
	//	//auto c = controller.get_game(tic_tac_toe_3);
	//	//c->get_choice_type();
	//}
	//else if (board_choice = 1)
	//{
	//	controller.get_game(GameType);
	//	auto d = controller.get_game(tic_tac_toe_4);

	//}



	//auto c = controller.get_game(tic_tac_toe_3);
	//c->make_noise();

	//auto d = controller.get_game(tic_tac_toe_4);
	//d->make_noise();




	//TIC_TAC_TOE_MANAGER result;

	//vector<TIC_TAC_TOE_MANAGER> types{ a };

	//string choice;
	//string current_player;
	//string play_again = "1";

	//for (auto a : types)
	//{
	//	cout << endl;
	//	cout << "Play Tic Tac Toe?" << endl;
	//	cout << endl;
	//	cout << "Choice X = Player X" << endl;
	//	cout << "Choice O = Player O" << endl;
	//	cout << endl;
	//	cout << "Enter your choice: ";
	//	cin >> choice;
	//	cout << endl;

	//	if (choice == "X" || choice == "O" || choice == "x" || choice == "o")
	//	{
	//		a.start_game(choice);

	//		while (a.game_over() == false)
	//		{
	//			current_player = a.get_player();

	//			cin >> b;

	//			//result = result + b;

	//			cout << b << endl;
	//		}


	//	}

	//cout << endl;
	//cout << "Player " << current_player << " is the winner!" << endl;
	//cout << endl;

	//}
	//
	//cout << result;

	return 0;
}
