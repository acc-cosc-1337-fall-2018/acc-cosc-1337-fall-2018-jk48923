#include "grade.h"
#include<vector>
#include<string>
#include<iostream>

using std::vector; using std::cout;



//void vector_of_ints(vector<int> vec_size)
//{
//
//	cout << "Enter your grade number between 0-100: ";
//	int vec_size;
//	std::cin >> vec_size;
//
//	vector<int> v(vec_size);
//
//	for (int i = 0; i < v.size(); ++i)
//	{
//		v[i] = i + 1;
//
//
//	}
//
//	if ((vec_size >= 90) && (vec_size <= 100))
//	{
//
//		std::cout << "you grade is an: A ";
//	}
//	else if ((vec_size >= 80) && (vec_size <= 89))
//	{
//		std::cout << "your grade is a: B ";
//	}
//	else if ((vec_size >= 70) && (vec_size <= 79))
//	{
//		std::cout << "your grade is a: C ";
//	}
//	else if ((vec_size >= 60) && (vec_size <= 69))
//	{
//		std::cout << "your grade is a: D ";
//	}
//	else if ((vec_size >= 0) && (vec_size <= 59))
//	{
//		std::cout << "your grade is an: F ";
//	}
//	else
//	{
//		std::cout << "Please enter a grade number from 0 to 100";
//	}
//}

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

	cout << "Grade " << "Count of each\n";
	cout << "A >=90  " << a << std::endl;
	cout << "B >=80  " << b << std::endl;
	cout << "C >=70  " << c << std::endl;
	cout << "D >=60  " << d << std::endl;
	cout << "F >= 0  " << f << std::endl;

}