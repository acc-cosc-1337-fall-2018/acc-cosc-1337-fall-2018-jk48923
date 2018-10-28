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
			x_win = + 1;
		}
		else if (next_player == "O")
		{
			o_win = + 1;
		}
		else if (next_player != "X" || "O")
		{
			c_win = + 1;
		}

		return true;

	}
	else
		return false;
}

void TIC_TAC_TOE_BOARD::start_game(string player)
{
	next_player = player;
	clear_board();
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
	if (next_player == "X" || next_player == "x")
	{
		next_player = "O";
	}
	else
		next_player = "X";
}

bool TIC_TAC_TOE_BOARD::check_column_win()
{
	if (pegs[3] != " " && pegs[0] == pegs[3] && pegs[3] == pegs[6] ||
	    pegs[4] != " " && pegs[1] == pegs[4] && pegs[4] == pegs[7] ||
	    pegs[5] != " " && pegs[2] == pegs[5] && pegs[5] == pegs[8])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool TIC_TAC_TOE_BOARD::check_row_win()
{
	if (pegs[1] != " " && pegs[0] == pegs[1] && pegs[1] == pegs[2] || 
	    pegs[4] != " " && pegs[3] == pegs[4] && pegs[4] == pegs[5] ||
	    pegs[7] != " " && pegs[6] == pegs[7] && pegs[7] == pegs[8])
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool TIC_TAC_TOE_BOARD::check_diagonal_win()
{
	if (pegs[4] != " " && pegs[0] == pegs[4] && pegs[4] == pegs[8] ||
	    pegs[4] != " " && pegs[2] == pegs[4] && pegs[4] == pegs[6])
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
	for (auto& peg : pegs) //reference to make peg writeable
	{
		peg = " ";
	}
}

bool TIC_TAC_TOE_BOARD::check_board_full()
{
	for (int i = 0; i < pegs.size(); i++)
	{
		if (pegs[i] == " ") 
		{
			return false;
		}
	}

	return true;

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
std::istream & operator>>(std::istream & in, TIC_TAC_TOE_BOARD & POINTER_I)
{
	int position{ -1 };

	while (position < 1 || position > 9)
	{
		cout << "Enter a position (1-9) for " << POINTER_I.get_player() << ": ";
		in >> position;
	}

	POINTER_I.mark_board(position);


	return in;
}

// Display the board to the screen with current user choices followed by the current score of x, o, and c.
std::ostream & operator<<(std::ostream & out, const TIC_TAC_TOE_BOARD & POINTER_O)
{

	out << endl;
	out << "      " << '[' << POINTER_O.pegs[0] << ']' << '[' << POINTER_O.pegs[1] << ']' << '[' << POINTER_O.pegs[2] << ']' << endl;
	out << "      " << '[' << POINTER_O.pegs[3] << ']' << '[' << POINTER_O.pegs[4] << ']' << '[' << POINTER_O.pegs[5] << ']' << endl;
	out << "      " << '[' << POINTER_O.pegs[6] << ']' << '[' << POINTER_O.pegs[7] << ']' << '[' << POINTER_O.pegs[8] << ']' << endl;
	out << endl;

	return out;
}
