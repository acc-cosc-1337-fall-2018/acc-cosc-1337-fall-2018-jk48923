//write include statement for vectors header
//write include statement for cout object
#include "vectors.h"
#include<iostream>
#include<vector>

using std::vector; using std::cout; using std::endl;


//dont forget using statement for cout object
int main() 
{
	//Write code to call get_max_from_vector with argument
	//vector of values 4, 5, 1, 50, 6, 77, 0 and display max

	vector <int> numbers_1 = { 4, 5, 1, 50, 6, 77, 0 };

	cout << "Max Values: " << get_max_from_vector(numbers_1) << endl;

	//auto  get_max = get_max_from_vector(vector<int>{ 4, 5, 1, 50, 6, 77, 0, 99, 1000, 10, 500, 66, 770, 10 });
	//std::cout << "Max Values: " << get_max << std::endl;



	//write code to call the sum_of_square function with argument
	//vector of values 2, 3, 4 and display result

	vector<int> numbers_2 = { 2, 3, 4 };
	cout << "Squared Sums: " << sum_of_squares(numbers_2) << endl;


	//write code to call the replace function with argument 
	//vector of strings "Joe", "joe", "mary", old argument "joe", new argument "John"

	vector<string> names = { "Joe", "joe", "mary" };

	
	//write code to call is_prime with value 3 output result

	bool is_prime(vector<int>& number);

	//write code to call vector_of_primes, save return value to a vector of ints

	vector<int> primes_up_to_10{ 2,3,5,7 };

	vector<int> primes_up_to_50{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };

	//cout << "Primes up to 10: " << vector_of_primes(vector_numbers) << endl;
	//output each int in the return vector



	return 0;
}