#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H
#include "tic_tac_toe_board.h"
#include <vector>

class TIC_TAC_TOE_DATA
{
public:

	std::vector<std::unique_ptr<TIC_TAC_TOE_BOARD>> get_games();
	void save_pegs(const std::vector<Peg>& pegs);

private:
	std::string = {"tic_tac_toe.txt"} file_name;
	std::vector<std::string> pegs;

};



#endif // TIC_TAC_TOE_DATA_H