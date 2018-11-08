#include "tic_tac_toe_board.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "peg.h"
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

	pegs[position -= 1].val = next_player;

	set_next_player();

}

string TIC_TAC_TOE_BOARD::get_player()
{
	return next_player;
}

string TIC_TAC_TOE_BOARD::get_winner()
{
	return get_winner();
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