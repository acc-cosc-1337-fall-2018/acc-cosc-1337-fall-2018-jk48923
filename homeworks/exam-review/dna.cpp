#include "dna.h"
#include <iostream>
#include <vector>

using std::vector; using std::string;
//
//// Return: vector of Four integers counting the respective number of times
//// that the symbols 'A', 'C', 'G', and 'T' occur in s.



vector<int> get_dna_count()
{
	string s = "AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC";

	vector<int> a{ 0 };
	vector<int> c{ 0 };
	vector<int> g{ 0 };
	vector<int> t{ 0 };

	//int a = 0;
	//int c = 0;
	//int g = 0;
	//int t = 0;

	//vector<int> dna{ 0, 0, 0, 0 };

	//int a = 0;
	//int c = 0;
	//int g = 0;
	//int t = 0;


	for (int i = 0; i < s.length(); i++) 
	{
		if (s[i] == 'A') 
		{
			a[0] += 1;

		}
		else if (s[i] == 'C') 
		{
			c[0] += 1;
		}
		else if (s[i] == 'G') 
		{
			g[0] += 1;
		}
		else if (s[i] == 'T') 
		{
			t[0] += 1;
		}
		std::cout << a[0] << " " << c[0] << " " << g[0] << " " << t[0] << std::endl;
	}

	return a, c, g, t;
}
