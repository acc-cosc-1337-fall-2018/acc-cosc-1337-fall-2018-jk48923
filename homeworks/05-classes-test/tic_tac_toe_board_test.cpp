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

	REQUIRE(TIC_TAC_TOE_X.get_player == "X");

}


// Create an instance of TicTacToe, call start_game() function with argument O, verify that get_player() returns X 
TEST_CASE("Test set first player O")
{
	TIC_TAC_TOE_BOARD TIC_TAC_TOE_O;
	TIC_TAC_TOE_O.start_game("O");

	REQUIRE(TIC_TAC_TOE_O.get_player == "O");
}

// Test win by first column	Create an instance of TicTacToe, call start_game() function with argument X, set positions for first player X to 1,4,7.  
// Pick other positions for O. Verify that game_over() is true. See my example above 
TEST_CASE("Test win by first column", "[X wins first column]")
{

	TIC_TAC_TOE_BOARD first_column;

	first_column.start_game("X");
	first_column.mark_board(1);
	first_column.mark_board(4);
	first_column.mark_board(7); 

	REQUIRE(first_column.game_over() == true);

}

// Create an instance of TicTacToe, call start_game() function with argument X, set positions for first player X to 2,5,8. 
// Pick other positions for O. Verify that game_over() is true.
TEST_CASE("Test win by seccond column", "[X wins seccond column]")
{


	TIC_TAC_TOE_BOARD second_column;

	second_column.start_game("X");
	second_column.mark_board(2);
	second_column.mark_board(5);
	second_column.mark_board(8);

	REQUIRE(second_column.game_over() == true);

}

// Create an instance of TicTacToe, call start_game() function with argument X, set positions for first player X to 3,6,9. 
// Pick other positions for O. Verify that game_over() is true.  
TEST_CASE("Test win by third column", "[X wins third column]")
{


	TIC_TAC_TOE_BOARD third_column;

	third_column.start_game("X");
	third_column.mark_board(3);
	third_column.mark_board(6);
	third_column.mark_board(9);

	REQUIRE(third_column.game_over() == true);

}

// Create an instance of TicTacToe, call start_game() function with argument X, set positions for first player X to 1,2,3. 
// Pick other positions for O. Verify that game_over() is true.  
TEST_CASE("Test win by first row", "[X wins first row]")
{

	TIC_TAC_TOE_BOARD first_row;

	first_row.start_game("X");
	first_row.mark_board(1);
	first_row.mark_board(2);
	first_row.mark_board(3);

	REQUIRE(first_row.game_over() == true);

}

//  Create an instance of TicTacToe, call start_game() function with argument X, set positions for first player X to 4,5,6. 
// Pick other positions for O. Verify that game_over() is true.    
TEST_CASE("Test win by second row", "[X wins second row]")
{

	TIC_TAC_TOE_BOARD second_row;

	second_row.start_game("X");
	second_row.mark_board(4);
	second_row.mark_board(5);
	second_row.mark_board(6);

	REQUIRE(second_row.game_over() == true);

}

// Create an instance of TicTacToe, call start_game() function with argument X, set positions for first player X to  7,8,9. 
// Pick other positions for O. Verify that game_over() is true.    
TEST_CASE("Test win by third row", "[X wins third row]")
{

	TIC_TAC_TOE_BOARD third_row;

	third_row.start_game("X");
	third_row.mark_board(7);
	third_row.mark_board(8);
	third_row.mark_board(9);

	REQUIRE(third_row.game_over() == true);

}

// Create an instance of TicTacToe, call start_game() function with argument X, set positions for first player X to 1,5,9. 
// Pick other positions for O. Verify that game_over() is true.  
