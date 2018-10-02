#include "tic_tac_toe_board.h"
#include<iostream>
#include<string>
#include<vector>

using std::string; using std::vector; 
using std::cout; using std::endl;


bool TIC_TAC_TOE_BOARD::game_over()
{
	if (check_column_win() == true && check_row_win() == true)
	{
		return true;
	}
	else if (check_diagonal_win() == true || check_board_full() == true)
	{
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
void TIC_TAC_TOE_BOARD::display_board()
{
	//cout << "Cuurent user choices: " << display_board << endl;

}

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
	// Check column if X's win
	if (pegs[0 && 3 && 6] == "X" || pegs[1 && 4 && 7] == "X" || pegs[2 && 5 && 8] == "X")
	{
		return true;
	}

	// Check column if O's win
	if (pegs[0 && 3 && 6] == "O" || pegs[1 && 4 && 7] == "O" || pegs[2 && 5 && 8] == "O")
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
	// Check row if X's win
	if (pegs[0 && 1 && 2] == "X" || pegs[3 && 4 && 5] == "X" || pegs[6 && 7 && 8] == "X")
	{
		return true;
	}

	// Check row if O's win
	if (pegs[0 && 1 && 2] == "O" || pegs[3 && 4 && 5] == "O" || pegs[6 && 7 && 8] == "O")
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
	// Check diagonal if X's win
	if (pegs[0 && 4 && 8] == "X" || pegs[2 && 4 && 6] == "X")
	{
		return true;
	}

	// Check diagonal if O's win
	if (pegs[0 && 4 && 8] == "O" || pegs[2 && 4 && 6] == "O")
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

}

bool TIC_TAC_TOE_BOARD::check_board_full()
{
	for (int i = 0; i < pegs.size(); i++)
		cout << pegs[i] << " ";

	return 0;
}

