#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"
#include "grade.h"
#include "receipt.h"
#include "references.h"
#include<vector>
#include<string>


using std::vector; using std::string;

TEST_CASE("test of dna length return output", "dna string ")
{
	//vector<string> a{ "AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC" };

	vector<int> get_dna_count;
		
	//REQUIRE(get_dna_count("AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC") == 20);
	//REQUIRE(get_dna_count("AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC") == 12);
	//REQUIRE(get_dna_count("AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC") == 17);
	//REQUIRE(get_dna_count("AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC") == 21);

}

TEST_CASE("test of dna length return output", "dna string ")
{
	//vector<int> numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//REQUIRE(vector_of_ints() == 10);

}

// Write a test case to Test that two receipts with bill amount 10 calculates total amount of 26.
TEST_CASE("Test if the total amount is correct")
{
	//REQUIRE(tip == 2.00);
	//REQUIRE(tax == 1.00);
	//REQUIRE(total == 13.00);

}