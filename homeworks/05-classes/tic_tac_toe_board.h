#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H
#include<string>
#include<vector>
#include<iostream>

using std::string; using std::vector;


class TIC_TAC_TOE_BOARD
{

public:

	TIC_TAC_TOE_BOARD() = default;

	TIC_TAC_TOE_BOARD(int x, int o, int c) : x_win(x), o_win(o), c_win(c) {}

	friend TIC_TAC_TOE_BOARD operator+(const TIC_TAC_TOE_BOARD & b, const TIC_TAC_TOE_BOARD & b2);

	friend std::ostream & operator<<(std::ostream & out, const TIC_TAC_TOE_BOARD & d);

	friend std::istream & operator>>(std::istream & in, TIC_TAC_TOE_BOARD & d);


	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player();
	//void display_board();

private:

	int x_win = 0;
	int o_win = 0;
	int c_win = 0;
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	vector<string> pegs{9, " "};
	string next_player;

};

#endif // TIC_TAC_TOE_BOARD_H