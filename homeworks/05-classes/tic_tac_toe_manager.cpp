#include "tic_tac_toe_manager.h"
#include<memory>

std::unique_ptr<TIC_TAC_TOE_BOARD> TIC_TAC_TOE_MANAGER::get_game(GameType board_type)
{
	std::unique_ptr<TIC_TAC_TOE_BOARD> a;
	if (board_type == 0)
	{
		a = std::make_unique<tic_tac_toe_3>();
	}
	else if (board_type == 1)
	{
		a = std::make_unique<tic_tac_toe_4>();
	}

	return a;
}

void TIC_TAC_TOE_MANAGER::save_game(std::unique_ptr<TIC_TAC_TOE_BOARD> boards)
{
}

void TIC_TAC_TOE_MANAGER::update_winner_count(std::string & winner)
{
	if (winner == "X")
	{
		x_win++;
	}
	else if (winner == "O")
	{
		o_win++;
	}
	else
	{
		c_win++;
	}
}

std::ostream & operator<<(std::ostream & out, TIC_TAC_TOE_MANAGER & POINTER)
{
	//a) iterate the vector of tic_tac_toe_boards and output the board using the overloaded istream operator from TicTacToeBoard
	//b) to display the total of o_win, c_win, and x_win.

}
