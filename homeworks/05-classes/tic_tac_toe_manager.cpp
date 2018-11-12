#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<memory>
#include<vector>
#include<string>
#include<iostream>


std::unique_ptr<TIC_TAC_TOE_BOARD> TIC_TAC_TOE_MANAGER::get_game(GameType board_type)
{
	std::unique_ptr<TIC_TAC_TOE_BOARD> a;

	if (board_type == tic_tac_toe_3)
	{
		a = std::make_unique<TIC_TAC_TOE_3>();
	}
	else if (board_type == tic_tac_toe_4)
	{
		a = std::make_unique<TIC_TAC_TOE_4>();
	}

	return a;
}

void TIC_TAC_TOE_MANAGER::save_game(std::unique_ptr<TIC_TAC_TOE_BOARD> board)
{
	update_winner_count(board->get_winner());

	boards.push_back(std::move(board));
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

	for (unsigned i = 0; i < POINTER.boards.size(); i++) 
	{
		out << POINTER.boards[i];
	}

	return out;
}
