#include "tic_tac_toe_4.h"
#include<iostream>

using std::cout; using std::endl;

TIC_TAC_TOE_4::TIC_TAC_TOE_4()
{
	for (int i = 0; i < 16; i++)
	{
		Peg peg;
		pegs.push_back(peg);
	}
}


void TIC_TAC_TOE_4::display_board(std::ostream& out) const
{
	for (unsigned i = 0; i < pegs.size(); i += 3)
	{
		out << pegs[i].val << "|" << pegs[i + 1].val << "|" << pegs[i + 2].val << std::endl;
	}
}

void TIC_TAC_TOE_4::get_input(std::istream & in)
{
	int position{ -1 };

	while (position < 1 || position > 9)
	{
		cout << "enter a position (1-9) for" << get_player() << ": ";
		in >> position;
		mark_board(position);
	}


	//mark_board(position);
}


bool TIC_TAC_TOE_4::check_column_win() const
{
	if (pegs[4].val != " " && pegs[0].val == pegs[4].val && pegs[4].val == pegs[8].val && pegs[8].val == pegs[12].val ||
		pegs[5].val != " " && pegs[1].val == pegs[5].val && pegs[5].val == pegs[9].val && pegs[9].val == pegs[13].val ||
		pegs[6].val != " " && pegs[2].val == pegs[6].val && pegs[6].val == pegs[10].val && pegs[10].val == pegs[14].val ||
		pegs[7].val != " " && pegs[3].val == pegs[7].val && pegs[7].val == pegs[11].val && pegs[11].val == pegs[15].val)
	{
		return true;
	}
	else
	{
		return false;
	}
}


bool TIC_TAC_TOE_4::check_row_win() const
{
	if (pegs[1].val != " " && pegs[0].val == pegs[1].val && pegs[1].val == pegs[2].val && pegs[2].val == pegs[3].val ||
		pegs[5].val != " " && pegs[4].val == pegs[5].val && pegs[5].val == pegs[6].val && pegs[6].val == pegs[7].val ||
		pegs[9].val != " " && pegs[8].val == pegs[9].val && pegs[9].val == pegs[10].val && pegs[10].val == pegs[11].val ||
		pegs[13].val != " " && pegs[12].val == pegs[13].val && pegs[13].val == pegs[14].val && pegs[14].val == pegs[15].val)
	{
		return true;
	}
	else
	{
		return false;
	}

}


bool TIC_TAC_TOE_4::check_diagonal_win() const
{

	if (pegs[5].val != " " && pegs[0].val == pegs[5].val && pegs[5].val == pegs[10].val && pegs[10].val == pegs[15].val ||
		pegs[6].val != " " && pegs[3].val == pegs[6].val && pegs[6].val == pegs[9].val && pegs[9].val == pegs[12].val ||
		pegs[5].val != " " && pegs[0].val == pegs[5].val && pegs[5].val == pegs[10].val && pegs[10].val == pegs[15].val ||
		pegs[6].val != " " && pegs[3].val == pegs[6].val && pegs[6].val == pegs[9].val && pegs[9].val == pegs[12].val)
	{
		return true;
	}
	else
	{
		return false;
	}
}