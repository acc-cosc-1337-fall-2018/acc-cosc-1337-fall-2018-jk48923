//write the dna.h include statement here
#include "dna.h"

using std::string;

int main()
{
	//call the dna functions from dna.h and display output
	//Use the function arguments from the test cases in dna_test.cpp
	//Example:


	auto point_mutation = get_point_mutations("GAGCCTACTAACGGGAT", "CATCGTAATGACGG");
	//cout << point_mutation;


	auto point_complement = get_dna_complement("AAAACCCGGT", "ACCGGGTTTT");
	//cout << point_complement;

	// Get dna transcribe define
	//dna_transcribe_1 = "GAUGGAACUUGACUACGUAAAUU";
	//dna_transcribe_2 = "AAAUUGAUCUUGACUACGUGGAA";

	auto point_transrcribe = transcribe_dna_into_rna("GATGGAACTTGACTACGTAAATT", "GAUGGAACUUGACUACGUAAAUU");
	//auto point_transrcribe = transcribe_dna_into_rna("GATGGAACTTGACTACGTAAATT");
	std::cout << "Point Transrcribe: " << point_transrcribe;


	auto point_get = get_gc_content("CCACCCTCGTGGTATGGCTAGGCATTCAGGAACCGGAGAACGCTTCAGACCAGCCCGGACTGGGAACCTGCGGGCAGTAGGTGGAAT");
	//cout << point_get;

	return 0;
}
