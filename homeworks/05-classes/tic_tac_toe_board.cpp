#include "tic_tac_toe_board.h"
#include<iostream>
#include<string>
#include<vector>

using std::string; using std::vector;
using std::cout; using std::endl;


TIC_TAC_TOE_BOARD::TIC_TAC_TOE_BOARD(std::vector<Peg> p)
{
	pegs = p;
}

bool TIC_TAC_TOE_BOARD::game_over()
{
	if (check_column_win() == true || check_row_win() == true || check_diagonal_win() == true || check_board_full() == true)
	{
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

	pegs[position -= 1].val = next_player;

	set_next_player();

}

const vector<Peg>& TIC_TAC_TOE_BOARD::get_pegs()
{
	return pegs;
}


string TIC_TAC_TOE_BOARD::get_player()
{
	return next_player;
}

string TIC_TAC_TOE_BOARD::get_winner()
{
	return winner;
}


void TIC_TAC_TOE_BOARD::set_next_player()
{
	if (next_player == "X" || next_player == "x")
	{
		next_player = "O";
	}
	else
		next_player = "X";
}

void TIC_TAC_TOE_BOARD::clear_board()
{
	for (auto& peg : pegs) //reference to make peg writeable
	{
		peg.val = " ";
	}
}

bool TIC_TAC_TOE_BOARD::check_board_full() const
{
	for (int i = 0; i < pegs.size(); i++)
	{
		if (pegs[i].val == " ")
		{
			return false;
		}
	}

	return true;

}


// Capture the position from the keyboard
std::istream & operator>>(std::istream & in, TIC_TAC_TOE_BOARD & POINTER_I)
{
	POINTER_I.get_input(in);

	return in;
}

// Display the board to the screen with current user choices followed by the current score of x, o, and c.
std::ostream & operator<<(std::ostream & out, const TIC_TAC_TOE_BOARD & POINTER_O)
{

	POINTER_O.display_board(out);

	return out;
}