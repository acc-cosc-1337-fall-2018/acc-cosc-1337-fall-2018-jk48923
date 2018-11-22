#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H
#include "tic_tac_toe_board.h"
#include<vector>

class TIC_TAC_TOE_DATA
{
public:

	TIC_TAC_TOE_DATA() = default;

	TIC_TAC_TOE_DATA(std::vector<Peg> p);

	std::vector<std::unique_ptr<TIC_TAC_TOE_BOARD>> get_games();
	void save_pegs(const std::vector<Peg>& pegs);

private:
	std::string myfile{"tic_tac_toe.txt"};
	std::vector<std::string> pegs;

	std::unique_ptr<TIC_TAC_TOE_DATA> board;

};



#endif // TIC_TAC_TOE_DATA_H