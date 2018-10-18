#include "grade.h"
#include<vector>
#include<string>
#include<iostream>

using std::vector; using std::cout;


void vector_of_ints()
{

	cout << "Enter your grade number between 0-100: ";
	int vec_size;
	std::cin >> vec_size;

	vector<int> v(vec_size);

	for (int i = 0; i < v.size(); ++i)
	{
		v[i] = i + 1;
		//cout << v[i] << '\n';

	}

	if ((vec_size >= 90) && (vec_size <= 100))
	{

		std::cout << "you grade is an: A ";
	}
	else if ((vec_size >= 80) && (vec_size <= 89))
	{
		std::cout << "your grade is a: B ";
	}
	else if ((vec_size >= 70) && (vec_size <= 79))
	{
		std::cout << "your grade is a: C ";
	}
	else if ((vec_size >= 60) && (vec_size <= 69))
	{
		std::cout << "your grade is a: D ";
	}
	else if ((vec_size >= 0) && (vec_size <= 59))
	{
		std::cout << "your grade is an: F ";
	}
	else
	{
		std::cout << "Please enter a grade number from 0 to 100";
	}
}


//void vector_of_ints(vector<int>)
//{
//	////vector<int> numbers;
//	////numbers.reserve(10); 
//	////for (int i = 1; i < 11; ++i)
//	////	numbers.push_back(i);
//
//	//vector<int> Grades;
//	//int i = 0;
//
//
//	//for (i = 0; i < 0; i++)
//	//{
//	//	cout << "Enter grade for student" << (i + 1) << ": ";
//	//	std::cin >> Grades[i];
//	//}
//
//
//	//std::vector<int> grades(100); // vector with 100 ints.
//	//std::iota(std::begin(grades), std::end(grades), 0); // Fill with 0, 1, ..., 99.
//
//
//
//	//cout << "Enter number of elements: ";
//
//	//int vec_size;
//	//cin >> vec_size;
//
//	//vector<int> v(vec_size);
//
//	//for (int i = 0; i < v.size(); ++i)
//	//{
//	//	v[i] = i + 1;
//	//	cout << v[i] << '\n';
//	//}
//
//
//}
