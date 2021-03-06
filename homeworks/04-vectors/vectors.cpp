#include<vector>
#include<iostream>
#include<string>

using std::vector; using std::string;

/*
Write a value return function with a vector of ints list reference parameter
that returns the maximum value of the list

@param numbers is a reference to a vector of integers
@return the max value in the vector

*/
int get_max_from_vector(vector<int>& numbers)
{

	int get_max = 0;

	for (auto i : numbers) {
		if (i > get_max)
		{
			get_max = i;
		}
	}

	return get_max;

}


/*
Write a value function sum_of_squares with a vector of ints list reference parameter
that computes the sum of the squares of the numbers in the vector. For example,
a vector of ints with values 2, 3, 4 should return 4+9+16 which is 29.

WRITE THE PARAM AND RETURN COMMENTS BELOW(SEE MY EXAMPLE ABOVE)

*/

int sum_of_squares(vector<int>& numbers) 
{

	int square_compute = 0;

	for (auto i : numbers) {
		square_compute += i * i;
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

bool is_prime(int number)
{
	int prime_number = 0;

	for (int i = 1; i <= number; ++i)
	{
		if (number % i == 0)
		{
			++prime_number;
		}	
	}
	if (prime_number == 2)
	{
		return true;
	}
	else
		return false;
}



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

vector<int> vector_of_primes(int number)
{
	vector<int> primes;

	for (int i = 1; i <= number; ++i)
	{
		if (is_prime(i))
		{
			primes.push_back(i);
		}
	}
	return primes;
}
