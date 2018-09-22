//write the dna.h include statement here
#include "dna.h"

int main()
{
	//call the dna functions from dna.h and display output
	//Use the function arguments from the test cases in dna_test.cpp
	//Example:

	//auto point_mutation = get_point_mutations("GAGCCTACTAACGGGAT");
	auto point_mutation = get_point_mutations("GAGCCTACTAACGGGAT", "CATCGTAATGACGG");
	//std::cout << point_mutation;

	auto point_complement = get_dna_complement("AAAACCCGGT");
	//auto point_complement = get_dna_complement("AAAACCCGGT", "ACCGGGTTTT");
	//std::cout << point_complement;

	auto point_transrcribe = transcribe_dna_into_rna("GATGGAACTTGACTACGTAAATT");
	//auto point_transrcribe = transcribe_dna_into_rna("GATGGAACTTGACTACGTAAATT", "GAUGGAACUUGACUACGUAAAUU");
	//std::cout << point_transrcribe;


	auto point_get = get_gc_content("CCACCCTCGTGGTATGGCTAGGCATTCAGGAACCGGAGAACGCTTCAGACCAGCCCGGACTGGGAACCTGCGGGCAGTAGGTGGAAT");
	//std::cout << point_get;

	return 0;
}
