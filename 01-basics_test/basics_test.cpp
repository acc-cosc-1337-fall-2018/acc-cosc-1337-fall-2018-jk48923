#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "basics.h"

TEST_CASE("Test sum_numbers", "[1,5,10]") {
	REQUIRE(sum_numbers(1, 0) == 1);
	REQUIRE(sum_numbers(2, 3) == 5);
	REQUIRE(sum_numbers(5, 5) == 10);
}

//Using the Test case above as a guide, write a test case for the
//multiply_numbers with values 
//2, 2 to equal 4
//5, 5 to equal 25
//10,10 to equal 100


// Test case for a new function
TEST_CASE("Test multiply numbers", "Products 4, 25, 100") {
	REQUIRE(multiply_numbers(2, 2) == 4);
	REQUIRE(multiply_numbers(5, 5) == 25);
	REQUIRE(multiply_numbers(10, 10) == 100);

}

TEST_CASE("Test pass by value and reference", "") {
	int num1{ 0 };
	int num2{ 0 };

	pass_by_val_by_ref(num1, num2);

	REQUIRE(num1 == 0);
	REQUIRE(num2 == 99);
}
