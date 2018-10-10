#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe_board.h"


TEST_CASE("Test game over")
{
	TIC_TAC_TOE_BOARD TIC_TAC_TOE_PLAY;

	REQUIRE(TIC_TAC_TOE_PLAY.game_over() == false);
}


// Create an instance of TicTacToe, call start_game() function with argument X, verify that get_player() returns O
TEST_CASE("Test set first player X")
{
	TIC_TAC_TOE_BOARD TIC_TAC_TOE_X;
	TIC_TAC_TOE_X.start_game("X");

	REQUIRE(TIC_TAC_TOE_X.get_player() == "X");
}


// Create an instance of TicTacToe, call start_game() function with argument O, verify that get_player() returns X 
TEST_CASE("Test set first player O")
{
	TIC_TAC_TOE_BOARD TIC_TAC_TOE_O;
	TIC_TAC_TOE_O.start_game("O");

	REQUIRE(TIC_TAC_TOE_O.get_player() == "O");
}

// Test win by first column	Create an instance of TicTacToe, call start_game() function with argument X, set positions for first player X to 1,4,7.  
// Pick other positions for O. Verify that game_over() is true. See my example above 
TEST_CASE("Test win by first column", "[X wins first column]")
{

	TIC_TAC_TOE_BOARD first_column;

	first_column.start_game("X");
	first_column.mark_board(1); // X
	first_column.mark_board(2); // O
	first_column.mark_board(4); // X
	first_column.mark_board(5); // O
	first_column.mark_board(7); // X

	REQUIRE(first_column.game_over() == true);

}

// Create an instance of TicTacToe, call start_game() function with argument X, set positions for first player X to 2,5,8. 
// Pick other positions for O. Verify that game_over() is true.
TEST_CASE("Test win by seccond column", "[X wins seccond column]")
{

	TIC_TAC_TOE_BOARD second_column;

	second_column.start_game("X");
	second_column.mark_board(2); // X
	second_column.mark_board(3); // O
	second_column.mark_board(5); // X
	second_column.mark_board(7); // O
	second_column.mark_board(8); // X

	REQUIRE(second_column.game_over() == true);

}

// Create an instance of TicTacToe, call start_game() function with argument X, set positions for first player X to 3,6,9. 
// Pick other positions for O. Verify that game_over() is true.  
TEST_CASE("Test win by third column", "[X wins third column]")
{


	TIC_TAC_TOE_BOARD third_column;

	third_column.start_game("X");
	third_column.mark_board(1); // O
	third_column.mark_board(3); // X
	third_column.mark_board(6); // X
	third_column.mark_board(7); // O
	third_column.mark_board(9); // X

	REQUIRE(third_column.game_over() == true);

}

// Create an instance of TicTacToe, call start_game() function with argument X, set positions for first player X to 1,2,3. 
// Pick other positions for O. Verify that game_over() is true.  
TEST_CASE("Test win by first row", "[X wins first row]")
{

	TIC_TAC_TOE_BOARD first_row;

	first_row.start_game("X");
	first_row.mark_board(1); // X
	first_row.mark_board(5); // O
	first_row.mark_board(2); // X
	first_row.mark_board(7); // O
	first_row.mark_board(3); // X

	REQUIRE(first_row.game_over() == true);

}

//  Create an instance of TicTacToe, call start_game() function with argument X, set positions for first player X to 4,5,6. 
// Pick other positions for O. Verify that game_over() is true.    
TEST_CASE("Test win by second row", "[X wins second row]")
{

	TIC_TAC_TOE_BOARD second_row;

	second_row.start_game("X");
	second_row.mark_board(2); // O
	second_row.mark_board(4); // X
	second_row.mark_board(5); // X
	second_row.mark_board(6); // X
	second_row.mark_board(9); // O

	REQUIRE(second_row.game_over() == true);

}

// Create an instance of TicTacToe, call start_game() function with argument X, set positions for first player X to  7,8,9. 
// Pick other positions for O. Verify that game_over() is true.    
TEST_CASE("Test win by third row", "[X wins third row]")
{

	TIC_TAC_TOE_BOARD third_row;

	third_row.start_game("X");
	third_row.mark_board(2); // O
	third_row.mark_board(4); // O
	third_row.mark_board(7); // X
	third_row.mark_board(8); // X
	third_row.mark_board(9); // X

	REQUIRE(third_row.game_over() == true);

}

// Create an instance of TicTacToe, call start_game() function with argument X, set positions for first player X to 1,5,9. 
// Pick other positions for O. Verify that game_over() is true.  

TEST_CASE("Test win diagonally from top left")
{

	TIC_TAC_TOE_BOARD diag_top_left;

	diag_top_left.start_game("X");
	diag_top_left.mark_board(1); // X
	diag_top_left.mark_board(3); // O
	diag_top_left.mark_board(5); // X
	diag_top_left.mark_board(7); // O
	diag_top_left.mark_board(9); // X

	REQUIRE(diag_top_left.game_over() == true);

}

//Create an instance of TicTacToe, call start_game() function with argument X, set positions for first player X to 7,5,3.  
// Pick other positions for O. Verify that game_over() is true.    
TEST_CASE("Test win diagonally from bottom left")
{

	TIC_TAC_TOE_BOARD diag_bottom_left;

	diag_bottom_left.start_game("X");
	diag_bottom_left.mark_board(7); // X
	diag_bottom_left.mark_board(2); // O
	diag_bottom_left.mark_board(5); // X
	diag_bottom_left.mark_board(6); // O
	diag_bottom_left.mark_board(3); // X

	REQUIRE(diag_bottom_left.game_over() == true);

}

// Create an instance of TicTacToe, call start_game() function with argument X, set positions to values where no one wins.  
// Verify that game_over() is true when all positions have been filled.
TEST_CASE("Test for no winner")
{
	TIC_TAC_TOE_BOARD no_winner;

	no_winner.start_game("X");

	//no_winner.mark_board(0); // O
	no_winner.mark_board(1); // X
	no_winner.mark_board(2); // O
	no_winner.mark_board(3); // O 
	no_winner.mark_board(4); // X
	no_winner.mark_board(5); // O
	no_winner.mark_board(6); // X
	no_winner.mark_board(7); // O
	no_winner.mark_board(8); // X
	no_winner.mark_board(9); // O


	REQUIRE(no_winner.game_over() == true);
}