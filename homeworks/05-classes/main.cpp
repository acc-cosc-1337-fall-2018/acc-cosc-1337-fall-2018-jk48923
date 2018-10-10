#include "tic_tac_toe_board.h"
#include<iostream>
#include<string>

using std::cout; using std::cin; 
using std::endl; using std::vector;

//1) Create a program that will play the TicTacToe game until the user opts to quit(outer loop).
//2) Start the game with X or O.
//3) Create another loop(inner loop) that iterates until a winner is determined
//4) In the loop, prompt the user for a position from 1 through 9 and update board position.(Assume user never chooses a taken position)
//5) Display the current status of the board.
//6) After a winner is determined prompt user if they want to play another game.


//Create 3 instances of TicTacToeBoard a, b, and c.
//Play 3 games where x, o, and c win 1 game each.
//Use the overloaded >> operator to capture positions from keyboard



int main()
{



	TIC_TAC_TOE_BOARD a;
	TIC_TAC_TOE_BOARD b;
	TIC_TAC_TOE_BOARD c;

	// Create a vector of TicTacToeBoard data types initialized with a, b, and c(from above).

	vector<TIC_TAC_TOE_BOARD> types{ a, b, c };

	// Create another instance of TicTacToeBoard result

	TIC_TAC_TOE_BOARD result; 

	// Iterate the vector of TicTacToeBoard
	// sum the winners using the statement result += current_board_in_vector
	
	for (auto i : types)
	{
		cout << i.get_player() << endl;
		result += i;
		//result + i;
	}

	std::cout << a << std::endl;
	//std::cout << b << std::endl;
	//std::cout << c << std::endl;



	//TIC_TAC_TOE_BOARD TIC_TAC_TOE_PLAY;

	//TIC_TAC_TOE_PLAY.start_game("X");

	//TIC_TAC_TOE_PLAY.start_game("O");

	//string choice;
	//int position;



	//while ( true )
	//{

	//	cout << "Play Tic Tac Toe?" << endl;
	//	cout << endl;
	//	cout << "Choice x = Player X" << endl;
	//	cout << "Choice o = Player O" << endl;
	//	cout << endl;
	//	cout << "Enter your choice: ";
	//	cin >> choice;


	//	if (choice == "X" || choice == "O" || choice == "x" || choice == "o")
	//	{

	//		while (!TIC_TAC_TOE_PLAY.game_over())
	//		{

	//			cout << "Enter position for " << TIC_TAC_TOE_PLAY.get_player() << ": ";
	//			cin >> position;
	//			TIC_TAC_TOE_PLAY.mark_board(position);
	//			//TIC_TAC_TOE_PLAY.display_board();


	//		}
	//		cout << "Player " << TIC_TAC_TOE_PLAY.get_player() << " is the winner!";
	//	}
	//	else

	//		cout << "Please enter X or O!";

	//	return false;



	//}

	return 0;
}