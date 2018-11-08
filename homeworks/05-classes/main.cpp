#include "tic_tac_toe_board.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "peg.h"
#include<iostream>
#include<string>
#include<memory>

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
	string board_choice;

	cout << endl;
	cout << "Play Tic Tac Toe?" << endl;
	cout << endl;
	cout << "Choice 0 = TicTacToe3 (connect 3 in a row to win)" << endl;
	cout << "Choice 1 = TicTacToe4 (connect 3 in a row to win)" << endl;
	cout << endl;
	cout << "Enter your choice: ";
	cin >> board_choice;
	cout << endl;


	//Get an instance of TicTacToeBoard concrete class by calling the
	//get_game function and passing the GameType value to the function(0 or 1)

	class Concrete_1 : public TIC_TAC_TOE_BOARD
	{
	public:
		void get_choice_type();
	};

	void Concrete_1::get_choice_type()
	{
		get_choice_type(GameType);
	}

	class Concrete_2 : public TIC_TAC_TOE_BOARD
	{
	public:
		void get_choice_type_2();
	};

	void Concrete_2::get_choice_type_2()
	{
		get_choice_type_2(GameType);
	}


	auto c = controller.get_game(Concrete_1);
	c->get_choice_type();

	auto d = controller.get_game(Concrete_2);
	d->get_choice_type_2();




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
