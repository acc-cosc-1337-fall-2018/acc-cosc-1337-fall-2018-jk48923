#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H
#include "peg.h"
#include<string>
#include<vector>
#include<iostream>

using std::string; using std::vector;


class TIC_TAC_TOE_BOARD
{

public:

	TIC_TAC_TOE_BOARD() = default;

	TIC_TAC_TOE_BOARD(std::vector<Peg> p) {}

	TIC_TAC_TOE_BOARD(int x, int o, int c) {}

	bool game_over();
	string get_player();
	string get_winner();
	void start_game(string player);
	void mark_board(int position);
	const vector<Peg>& get_pegs();


	friend std::ostream & operator<<(std::ostream & out, TIC_TAC_TOE_BOARD & POINTER_O);
	friend std::istream & operator>>(std::istream & in, TIC_TAC_TOE_BOARD & POINTER_I);

	virtual void display_board(std::ostream& out) const = 0;
	virtual void get_input(std::istream& in) = 0;


protected:

	virtual bool check_board_full() const;
	virtual bool check_column_win() const = 0;
	virtual bool check_diagonal_win() const = 0;
	virtual bool check_row_win() const = 0;

	void set_next_player();
	void clear_board();
	vector<Peg> pegs;
	string next_player;
	string winner;

};

#endif // TIC_TAC_TOE_BOARD_H