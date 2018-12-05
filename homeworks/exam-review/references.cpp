#include<string>
#include<iostream>


using std::string; using std::cout; using std::endl;


//Incorrect implementation, simply reverse string
void get_reverse(string str_by_reference)
{
	string reverse_order = "CGAT";

	// String reverse
	for (unsigned int i = str_by_reference.length() - 1; i != -1; --i)
	{
		reverse_order += str_by_reference[i];
	}

	// Reverse complement
	for (int i = 0; i < reverse_order.size(); ++i)
	{
		if (reverse_order[i] == 'C')
		{
			reverse_order[i] = 'G';
		}
		else if (reverse_order[i] == 'G')
		{
			reverse_order[i] = 'C';
		}
		else if (reverse_order[i] == 'A')
		{
			reverse_order[i] = 'T';
		}
		else if (reverse_order[i] == 'T')
		{
			reverse_order[i] = 'A';
		}
		cout << reverse_order << endl;
	}
	
}


// Incorrect implementation, simply reverse string  , pass param as reference string& str
string value_reverse(string& str_by_value)
{

	string reverse_order = "CGAT";

	// String reverse
	for (unsigned int i = str_by_value.length() - 1; i != -1; --i)
	{
		reverse_order += str_by_value[i];
	}

	// Reverse complement
	for (int i = 0; i < reverse_order.size(); ++i)
	{
		if (reverse_order[i] == 'C')
		{
			reverse_order[i] = 'G';
		}
		else if (reverse_order[i] == 'G')
		{
			reverse_order[i] = 'C';
		}
		else if (reverse_order[i] == 'A')
		{
			reverse_order[i] = 'T';
		}
		else if (reverse_order[i] == 'T')
		{
			reverse_order[i] = 'A';
		}
		cout << reverse_order << endl;
	}
	return reverse_order;

}


//Create a void function with a const string reference parameter named str_by_reference.
//The function will reverse the string with a loop.In main, create a string and display it,
//call the function with the created string as an argument, and display the same string in main to string.
//Why does the compiler let you change or not let you change the incoming const reference parameter ?

void string_reference(const string& str_by_reference)
{

	string reverse_order = "CGAT";

	// String reverse
	for (unsigned int i = str_by_reference.length() - 1; i != -1; --i)
	{
		reverse_order += str_by_reference[i];
	}

	// Reverse complement
	for (int i = 0; i < reverse_order.size(); ++i)
	{
		if (reverse_order[i] == 'C')
		{
			reverse_order[i] = 'G';
		}
		else if (reverse_order[i] == 'G')
		{
			reverse_order[i] = 'C';
		}
		else if (reverse_order[i] == 'A')
		{
			reverse_order[i] = 'T';
		}
		else if (reverse_order[i] == 'T')
		{
			reverse_order[i] = 'A';
		}
		cout << reverse_order << endl;
	}

}