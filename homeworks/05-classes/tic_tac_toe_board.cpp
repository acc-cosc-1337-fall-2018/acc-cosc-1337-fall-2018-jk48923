#include "tic_tac_toe_board.h"
#include<iostream>
#include<string>
#include<vector>

using std::string; using std::vector;
using std::cout; using std::endl;


bool TIC_TAC_TOE_BOARD::game_over()
{
	if (check_column_win() == true || check_row_win() == true || check_diagonal_win() == true || check_board_full() == true)
	{
		if (next_player == "X")
		{
			x_win = +1;
		}
		else if (next_player == "O")
		{
			o_win = +1;
		}
		else if (next_player != "X" || "O")
		{
			c_win = +1;
		}

		return true;

	}
	else
		return false;
}

void TIC_TAC_TOE_BOARD::start_game(string player)
{
	for (auto i : player)
	{
		if (i == 'X' || i == 'O')
		{
			next_player = player;

			clear_board();
		}
	}
}

void TIC_TAC_TOE_BOARD::mark_board(int position)
{
	// Mark pegs vector position with value of next_player 
	// variable and call set_next_player private function

	pegs[position -= 1] = next_player;

	set_next_player();

}

string TIC_TAC_TOE_BOARD::get_player()
{
	return next_player;
}

// Display the board to the screen with current user choices
//void TIC_TAC_TOE_BOARD::display_board()
//{
//	//cout << "Cuurent user choices: " << display_board << endl;
//
//}

void TIC_TAC_TOE_BOARD::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";
	}
	else
		next_player = "X";
}


bool TIC_TAC_TOE_BOARD::check_column_win()
{

	if (pegs[0 && 3 && 6] == "X" || pegs[1 && 4 && 7] == "X" || pegs[2 && 5 && 8] == "X")


	//if (pegs[0] == pegs[1] && pegs[3] == pegs[4] && pegs[6] == pegs[7] 
	//	&& pegs[0] == "X" || pegs[0] == "O" && pegs[3] == "X" || pegs[3] == "O" && pegs[6] == "X" || pegs[6] == "O")
	{
		return true;
	}

	if (pegs[0 && 3 && 6] == "O" || pegs[1 && 4 && 7] == "O" || pegs[2 && 5 && 8] == "O")

	//else if (pegs[1] == pegs[2] && pegs[4] == pegs[5] && pegs[7] == pegs[8] 
	//	&& pegs[1] == "X" || pegs[1] == "O" && pegs[4] == "X" || pegs[4] == "O" && pegs[7] == "X" || pegs[7] == "O")
	{
		return true;
	}


	//else if (pegs[2] == pegs[3] && pegs[5] == pegs[6] && pegs[8] == pegs[9] 
	//	&& pegs[2] == "X" || pegs[2] == "O" && pegs[5] == "X" || pegs[5] == "O" && pegs[8] == "X" || pegs[8] == "O")
	//{
	//	return true;
	//}
	else
	{
		return false;
	}
}

bool TIC_TAC_TOE_BOARD::check_row_win()
{

	if (pegs[0 && 1 && 2] == "X" || pegs[3 && 4 && 5] == "X" || pegs[6 && 7 && 8] == "X")

	//if (pegs[0] == pegs[1] && pegs[1] == pegs[2] && pegs[2] == pegs[3] 
	//	&& pegs[0] == "X" || pegs[0] == "O" && pegs[1] == "X" || pegs[1] == "O" && pegs[2] == "X" || pegs[2] == "O")
	{
		return true;
	}

	if (pegs[0 && 1 && 2] == "O" || pegs[3 && 4 && 5] == "O" || pegs[6 && 7 && 8] == "O")

	//else if (pegs[3] == pegs[4] && pegs[4] == pegs[5] && pegs[5] == pegs[6] 
	//	&& pegs[3] == "X" || pegs[3] == "O" && pegs[4] == "X" || pegs[4] == "O" && pegs[5] == "X" || pegs[5] == "O")
	{
		return true;
	}


	
	//else if (pegs[6] == pegs[7] && pegs[7] == pegs[8] 
	//	&& pegs[6] == "X" || pegs[6] == "O" && pegs[7] == "X" || pegs[7] == "O")
	//{
	//	return true;
	//}
	else
	{
		return false;
	}

}

bool TIC_TAC_TOE_BOARD::check_diagonal_win()
{
	if (pegs[0 && 4 && 8] == "X" || pegs[2 && 4 && 6] == "X")

	//if (pegs[0] == pegs[1] && pegs[4] == pegs[5] && pegs[8] == pegs[9] 
	//	&& pegs[0] == "X" || pegs[0] == "O" && pegs[4] == "X" || pegs[4] == "O" && pegs[8] == "X" || pegs[8] == "O")
	{
		return true;
	}

	if (pegs[0 && 4 && 8] == "O" || pegs[2 && 4 && 6] == "O")

	//else if (pegs[2] == pegs[4] && pegs[4] == pegs[5] && pegs[6] == pegs[7] 
	//	&& pegs[2] == "X" || pegs[2] == "O" && pegs[4] == "X" || pegs[4] == "O" && pegs[6] == "X" || pegs[6] == "O")
	{
		return true;
	}
	else
	{
		return false;
	}
}

void TIC_TAC_TOE_BOARD::clear_board()
{
	//system("CLS");
}

bool TIC_TAC_TOE_BOARD::check_board_full()
{
	for (int i = 0; i < pegs.size(); i++)
		cout << pegs[i] << " ";

	return 0;
}

// Overload + to add the private data members x_win, o_win, and c_win
TIC_TAC_TOE_BOARD operator+(const TIC_TAC_TOE_BOARD & b, const TIC_TAC_TOE_BOARD & b2)
{
	TIC_TAC_TOE_BOARD TIC_TAC_TOE_BOARD_ADD;

	TIC_TAC_TOE_BOARD_ADD.x_win = b.x_win + b2.x_win;

	TIC_TAC_TOE_BOARD_ADD.o_win = b.o_win + b2.o_win;

	TIC_TAC_TOE_BOARD_ADD.c_win = b.c_win + b2.c_win;

	return TIC_TAC_TOE_BOARD_ADD;

}

// Capture the position from the keyboard
std::istream & operator>>(std::istream & in, TIC_TAC_TOE_BOARD & POINTER)
{

	cout << "Enter the position: ";
	
	in >> POINTER.x_win >> POINTER.o_win;

	return in;
}

// Display the board to the screen with current user choices followed by the current score of x, o, and c.
std::ostream & operator<<(std::ostream & out, const TIC_TAC_TOE_BOARD & POINTER)
{

	TIC_TAC_TOE_BOARD TIC_TAC_TOE_PLAY;

	TIC_TAC_TOE_PLAY.start_game("X");

	TIC_TAC_TOE_PLAY.start_game("O");

	string choice;
	int position;

	while (true)
	{

		out << "Play Tic Tac Toe?" << endl;
		out << endl;
		out << "Choice x = Player X" << endl;
		out << "Choice o = Player O" << endl;
		out << endl;
		out << "Enter your choice: ";
		std::cin >> choice;

		if (choice == "X" || choice == "O" || choice == "x" || choice == "o")
		{

			//out << "(" << POINTER.x_win << "," << POINTER.o_win << ")";

			//out << "(" << TIC_TAC_TOE_BOARD.OSTREAM_POINTER.x_win << "," << OSTREAM_POINTER.o_win() << ")";



			while (!TIC_TAC_TOE_PLAY.game_over())
			{

				out << "Enter position for " << TIC_TAC_TOE_PLAY.get_player() << ": ";

				//OSTREAM_POINTER.x_win

				std::cin >> position;
				TIC_TAC_TOE_PLAY.mark_board(position);


			}

			out << "Player " << TIC_TAC_TOE_PLAY.get_player() << " is the winner!";
			
		}
		else

		out << "Please enter X or O!";

		return out;
	}
}
