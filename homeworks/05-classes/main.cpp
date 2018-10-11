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
	TIC_TAC_TOE_BOARD result;

	vector<TIC_TAC_TOE_BOARD> types{ a, b, c };

	// Iterate the vector of TicTacToeBoard
	// sum the winners using the statement result += current_board_in_vector
	
	for (auto i : types)
	{
		cout << i.get_player() << endl;
		//result += i;
	}

	std::cout << a << std::endl;
	//::cout << b << std::endl;
	//std::cout << c << std::endl;

	return 0;
}