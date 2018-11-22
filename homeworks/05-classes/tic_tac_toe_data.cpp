#include "tic_tac_toe_data.h"
#include "tic_tac_toe_board.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>
#include<fstream>
#include<vector>


TIC_TAC_TOE_DATA::TIC_TAC_TOE_DATA(std::vector<Peg> p)
{
	std::vector<std::unique_ptr<TIC_TAC_TOE_BOARD>>const& boards = board->get_games();
}

std::vector<std::unique_ptr<TIC_TAC_TOE_BOARD>> TIC_TAC_TOE_DATA::get_games()
{

	//TIC_TAC_TOE_BOARD(std::vector<Peg> p);

// Algorithm to restore a vector of unique ptr of TicTacToeBoard from file.
// (Each line in the file is a game(vector of pegs), each character in the line is the peg.val, 
// and from left to right position 0, 1, etc.)

	std::unique_ptr<TIC_TAC_TOE_BOARD> boards;

	string line;

	std::ofstream myfile("tic_tac_toe.txt");

	while (myfile.is_open())
	{
		//myfile << pegs[i].val;

		vector<int> peg;

		while (std::getline(myfile, line))
		{
			std::cout << line << '\n';
		}
		
		for (unsigned i = 0; i < line.size(); i++)
		{
			pegs[i] = line;
		}
		peg.push_back(peg);
	}

	peg.push_back(peg);

	std::unique_ptr<TIC_TAC_TOE_BOARD> board;

	if (pegs.size() == 9)
	{
		board = std::make_unique<TIC_TAC_TOE_3>();
	}
	else
	{
		board = std::make_unique<TIC_TAC_TOE_4>();
	}

	peg.push_back(i);

	myfile.close();
}



void TIC_TAC_TOE_DATA::save_pegs(const std::vector<Peg>& pegs)
{

	//Write vector of pegs to file by iterating each peg, writing, to file, 
	//add a "\n" to create a new line after looping vector of pegs.

	std::ofstream myfile("example.txt");

	for (unsigned i = 0; i < pegs.size(); i++)
	{
		myfile << pegs[i].val;
	}

	myfile << "\n";
	myfile.close();
}