#include "vectors.h"
#include<vector>
#include<iostream>

/*
Write a value return function with a vector of ints list reference parameter
that returns the maximum value of the list

@param numbers is a reference to a vector of integers
@return the max value in the vector

*/
int get_max_from_vector(vector<int>& numbers)
{

	int get_max = INT_MIN;

	for (auto i : numbers) {
		if (i > get_max) get_max = i;
	}
	return get_max;

	//vector<int>::const_iterator it;

	//for (unsigned int i = 0; i < cdf.size(); i++)
	//	if (cdf[i] < cdfMin)
	//		cdfMin = cdf[i];

}


/*
Write a value function sum_of_squares with a vector of ints list reference parameter
that computes the sum of the squares of the numbers in the vector. For example,
a vector of ints with values 2, 3, 4 should return 4+9+16 which is 29.

WRITE THE PARAM AND RETURN COMMENTS BELOW(SEE MY EXAMPLE ABOVE)

*/

int get_sum_of_squares(vector<int>& numbers) 
{
	int square_compute{ 0 };

	for (auto n : numbers) {
		square_compute += n * n;
	}
	return square_compute;
}



/*
Write a value-return function replace with parameters reference to vector of strings ,
old string, and new_val string that replaces all occurences of old string with new_val
string in a vector of strings

@param strings reference to a vector of strings (read/write)
@param old reference to a string read only
@param new_val reference to a string read only

*/
void replace(vector<string>& strings, const string& old, const string& new_val)
{
	//write code here. 
	//Remember passing by reference without keyword const makes the string vector
	//read/write meaning you can modify strings in the vector
	//Also there is no need to return the strings vector because a reference
	//points to a previously declared vector of strings variable(see test case 
	//in vectors_test.cp)

	for (int i = 0; i < strings.size(); ++i)
	{
		if (strings[i] == old)
		{
			strings[i] = new_val;
		}
	}

}

/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/
//write prototype here

//bool is_prime(unsigned int number)
//{
//	if (number < 2 && number > 4)
//	{
//		return false;
//	}
//	else if (number % 2 == 0)
//	{
//		return false;
//	}
//	for (int i = 2; i < number / 2; i++)
//	{
//		if (number % i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}

bool is_prime(int num) {
	if (num < 2) {
		return false;
	}
	else if (num == 3 || num == 4) {
		return true;
	}
	else if (num % 2 == 0) {
		return false;
	}
	for (int i = 3, max = sqrt(num); i < max; i += 2) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

//int is_prime(vector<int>& numbers)
//{
//	int prime_check;
//
//	if (prime_check == 3)
//	{
//		return true;
//	}
//	else if (prime_check == 4)
//	{
//		return false;
//	}
//	
//}

//int prime = 1;;
//vector<int>primes(n);
//for (int i = 2; i < n; i++) {
//	prime = 1;
//
//	for (int j = 2; j < i; j++)
//	{
//		if (i%j == 0) {
//			prime = 0;
//			break;
//		}
//		if (prime == 1) {
//			cout << i << endl;
//		}
//		getch();
//		return 0;


/*
Write a a function named vector_of_primes with an integer parameter
that Given a number returns all the prime numbers up to the number

	Example given number 10 returns '2,3,5,7,'
@param int integer value
@return vector of ints containing prime values up to a value

Psuedocode:
	Create a variable vector of ints named primes
	loop from 1 to the value of n
	in the loop call is_prime function you created with an argument of
	the current vector value at the current loop index
	if the return value of is_prime is true add the value to the primes vector

	make sure to return vector of ints primes after loop exits
*/
//write function prototype here

int vector_of_primes(vector<int>& numbers)
{
	return 0;
}
