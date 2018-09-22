#include<math.h>
#include "dna.h"
#include<string>
#include<iostream>

int get_point_mutations(std::string dna1, std::string dna2)
{	//write the function code 

	int hamming_distance = 0;

	for (int i = 0; i < dna1.size(); ++i)
	{
		if (dna1.size() != dna2.size())
		{
			return -1;
		}

		else if (dna1[i] != dna2[i])
		{
			++hamming_distance;
		}
	}

	return hamming_distance;
}

std::string get_dna_complement(std::string dna)
{

	std::string dna_reverse = "";

	// String reverse
	for (unsigned int i = dna.length() - 1; i != -1; --i)
	{
		dna_reverse += dna[i];
	}

	// Reverse complement
	for (int i = 0; i < dna_reverse.size(); ++i)
	{
		if (dna_reverse[i] == 'C')
		{
			dna_reverse[i] = 'G';
		}
		else if (dna_reverse[i] == 'G')
		{
			dna_reverse[i] = 'C';
		}
		else if (dna_reverse[i] == 'A')
		{
			dna_reverse[i] = 'T';
		}
		else if (dna_reverse[i] == 'T')
		{
			dna_reverse[i] = 'A';
		}
	}
	return dna_reverse;

}


std::string transcribe_dna_into_rna(std::string dna)
{


	for (int i = 0; i < dna.size(); ++i)
	{
		if (dna[i] == 'T') {
			dna[i] = 'U';
		}
		else if (dna[i] == 'u') {
			dna[i] = 't';
		}
	}

	return dna;
}



double get_gc_content(std::string dna)
{
	auto size = dna.size(); //get the size of string let auto handle the data type
	auto gc_count{ 0 }; //initialize to 0 (int) let auto handle data type

	//for ranged loop, for each character in loop, s holds one char
	//auto determines data type in this case s is a char data type
	for (auto s : dna)
	{
		//in C++ logical and is && and logical or is ||
		//usage (and) condition1 && condition2 --- usage (or) condition1 || condition2 
		//write code to determine if s is 'C' or 'G' then increment gc_count by 1

		if (s == 'C' || s == 'G')
		{
			gc_count += 1;
		}

	}

	//dividing two integers nets an integer
	//here we need to convert one of the integers to double to get double division
	//that is a result with decimal values
	//static_cast converts a data type from one to another
	//here temporarily convert size to double
	auto gc_content = (gc_count / static_cast<double>(size)) * 100;

	//custom function to round to a desired precision
	return round_to_precision(gc_content, 2);
}

double round_to_precision(double number, int precision)
{
	return (std::round(number * std::pow(10, precision))) / std::pow(10, precision);
}