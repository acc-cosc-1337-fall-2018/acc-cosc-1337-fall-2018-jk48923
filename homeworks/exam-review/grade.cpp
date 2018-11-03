#include "grade.h"
#include<vector>
#include<string>
#include<iostream>

using std::vector; using std::cout;


void vector_of_ints(vector<int> grades) 
{
	int a{ 0 };
	int b{ 0 };
	int c{ 0 };
	int d{ 0 };
	int f{ 0 };

	for (auto grade : grades) 
	{
		if ((grade >= 90) && (grade <= 100))
		{
			a++;
		}
		else if ((grade >= 80) && (grade <= 89))
		{
			b++;
		}
		else if ((grade >= 70) && (grade <= 79))
		{
			c++;
		}
		else if ((grade >= 60) && (grade <= 69))
		{
			d++;
		}
		else if ((grade >= 0) && (grade <= 59))
		{
			f++;
		}
	}

	std::cout << "Grade " << "Count of each\n";
	std::cout << "A >=90  " << a << std::endl;
	std::cout << "B >=80  " << b << std::endl;
	std::cout << "C >=70  " << c << std::endl;
	std::cout << "D >=60  " << d << std::endl;
	std::cout << "F >= 0  " << f << std::endl;
}
