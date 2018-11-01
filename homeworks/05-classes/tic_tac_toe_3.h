#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H
#include "tic_tac_toe_board.h"
#include<iostream>
#include<string>

class TIC_TAC_TOE_3 : public TIC_TAC_TOE_BOARD
{

public:

	TIC_TAC_TOE_3();

protected:

	bool check_column_win() const override;
	bool check_diagonal_win() const override;
	bool check_row_win() const override;
	void display_board(std::ostream& out) const override;
	void get_input(std::istream& in) override;


};



#endif // TIC_TAC_TOE_3_H