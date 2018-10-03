#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H
#include<string>
#include<vector>

using std::string; using std::vector;


class TIC_TAC_TOE_BOARD
{

public:

	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player();
	void display_board();

private:

	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	vector<string> pegs{9, 0};
	string next_player;

};

#endif // TIC_TAC_TOE_BOARD_H