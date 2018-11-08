#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include "tic_tac_toe_board.h"
#include <vector>
#include <iostream>
#include<memory>

class TIC_TAC_TOE_MANAGER
{

public:

	enum GameType { tic_tac_toe_3, tic_tac_toe_4};

	std::unique_ptr<TIC_TAC_TOE_BOARD> get_game(GameType board_type);

	void save_game(std::unique_ptr<TIC_TAC_TOE_BOARD> boards);


	friend std::ostream & operator<<(std::ostream & out, TIC_TAC_TOE_MANAGER & POINTER);

	// Create the update_winner function to update x_win, o_win, and c_win

	//The get_game function has an enum type named GameType
	//(https://en.cppreference.com/w/cpp/language/enum) that returns a unique_ptr of TicTacToeBoard

private:

	std::vector<std::unique_ptr<TIC_TAC_TOE_BOARD>> boards;
	void update_winner_count(std::string& winner);
	int x_win{ 0 };
	int o_win{ 0 };
	int c_win{ 0 };

};




#endif // TIC_TAC_TOE_MANAGER_H