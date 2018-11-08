#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <vector>
#include <iostream>
#include<memory>

class TIC_TAC_TOE_MANAGER
{

public:

	enum GameType { tic_tac_toe_3, tic_tac_toe_4};
	std::unique_ptr<TIC_TAC_TOE_BOARD> get_game(GameType board_type);
	void save_game(std::unique_ptr<TIC_TAC_TOE_BOARD> board);
	friend std::ostream & operator<<(std::ostream & out, TIC_TAC_TOE_MANAGER & POINTER);


private:

	std::vector<std::unique_ptr<TIC_TAC_TOE_BOARD>> boards;
	void update_winner_count(std::string& winner);
	int x_win{ 0 };
	int o_win{ 0 };
	int c_win{ 0 };

};




#endif // TIC_TAC_TOE_MANAGER_H