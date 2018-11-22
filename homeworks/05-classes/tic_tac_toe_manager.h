#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include "tic_tac_toe_board.h"
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <vector>
#include <iostream>
#include<memory>

enum GameType { tic_tac_toe_3, tic_tac_toe_4 };

class TIC_TAC_TOE_MANAGER
{

public:

	TIC_TAC_TOE_MANAGER() = default;

	std::unique_ptr<TIC_TAC_TOE_BOARD> get_game(GameType board_type);
	const std::vector<std::unique_ptr<TIC_TAC_TOE_BOARD>>& get_games();
	void save_game(std::unique_ptr<TIC_TAC_TOE_BOARD> board);
	void get_winner_totals(int& x, int& o, int& c);
	friend std::ostream & operator<<(std::ostream & out, TIC_TAC_TOE_MANAGER & POINTER);


private:

	std::vector<std::unique_ptr<TIC_TAC_TOE_BOARD>> boards;
	void update_winner_count(std::string& winner);
	int x_win{ 0 };
	int o_win{ 0 };
	int c_win{ 0 };

	std::unique_ptr<TIC_TAC_TOE_DATA> board;

};




#endif // TIC_TAC_TOE_MANAGER_H