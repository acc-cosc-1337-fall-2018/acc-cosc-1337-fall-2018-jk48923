#include "dna.h"
#include <iostream>
#include <vector>
#include <iostream>
using std::vector; using std::string;
//
//// Return: vector of Four integers counting the respective number of times
//// that the symbols 'A', 'C', 'G', and 'T' occur in s.



vector<int> get_dna_count(string s)
//vector<int> get_dna_count()
{
	//string s = "AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC";

	s = "AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC";

	vector<int> a{ 0 };
	vector<int> c{ 0 };
	vector<int> g{ 0 };
	vector<int> t{ 0 };

	//int a{ 0 };
	//int c{ 0 };
	//int g{ 0 };
	//int t{ 0 };

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

//vector<int> get_dna_count(string dna)
//{
//	vector<int> result;
//
//	int a{ 0 };
//	int c{ 0 };
//	int g{ 0 };
//	int t{ 0 };
//
//	for (int i = 0; i < dna.length(); i++)
//	{
//			if (dna[i] == 'A')
//			{
//				a += 1;
//			}
//			else if (dna[i] == 'C')
//			{
//				c += 1;
//			}
//			else if (dna[i] == 'G')
//			{
//				g += 1;
//			}
//			else if (dna[i] == 'T')
//			{
//				t += 1;
//			}
//
//		std::cout << a[0] << " " << c[0] << " " << g[0] << " " << t[0] << std::endl;
//	}
//
//	result.push_back(a);
//	result.push_back(c);
//	result.push_back(g);
//	result.push_back(t);
//
//	return result;
//
//}