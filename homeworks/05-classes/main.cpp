#include "tic_tac_toe_board.h"
#include<iostream>
#include<string>

using std::cout; using std::cin; using std::endl;

//1) Create a program that will play the TicTacToe game until the user opts to quit(outer loop).
//2) Start the game with X or O.
//3) Create another loop(inner loop) that iterates until a winner is determined
//4) In the loop, prompt the user for a position from 1 through 9 and update board position.(Assume user never chooses a taken position)
//5) Display the current status of the board.
//6) After a winner is determined prompt user if they want to play another game.


int main()
{
	TIC_TAC_TOE_BOARD TIC_TAC_TOE_PLAY;

	TIC_TAC_TOE_PLAY.start_game("X");

	TIC_TAC_TOE_PLAY.start_game("O");

	string choice;
	int position;



	while ( true )
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
			//TIC_TAC_TOE_PLAY.start_game(choice);

			while (!TIC_TAC_TOE_PLAY.game_over())
			{

				cout << "Enter position for " << TIC_TAC_TOE_PLAY.get_player() << ": ";
				cin >> position;
				TIC_TAC_TOE_PLAY.mark_board(position);
				TIC_TAC_TOE_PLAY.display_board();


			}
			cout << "Player " << TIC_TAC_TOE_PLAY.get_player() << " is the winner!";
		}
		else

			cout << "Please enter X or O!";

		return false;



	}

	return 0;
}