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
	string current_player;
	string play_again = "1";

	for (auto b : types)
	{
		cout << endl;
		cout << "Play Tic Tac Toe?" << endl;
		cout << endl;
		cout << "Choice X = Player X" << endl;
		cout << "Choice O = Player O" << endl;
		cout << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		cout << endl;

		if (choice == "X" || choice == "O")
		{
			b.start_game(choice);

			while (b.game_over() == false)
			{
				current_player = b.get_player();

				cin >> b;

				result = result + b;

				cout << b << endl;
			}

		}

	cout << endl;
	cout << "Player " << current_player << " is the winner!" << endl;
	cout << endl;

	}
	
	cout << result;

	return 0;
}
