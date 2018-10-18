#include "receipt.h"
#include<iostream>
#include<string>
#include<vector>

using std::endl; using std::cout;


//void calculate_tax()
//{
//	tax = total * TaxRate;
//}



// d-Overload the += operator to add bill amount, tip amount, tax amount, and total amount.
Receipt operator+(const Receipt & b, const Receipt & b2)
{
	Receipt receipt;

	receipt.bill = b.bill + b2.bill;

	receipt.tip = b.tip + b2.tip;

	receipt.tax = b.tax + b2.tax;

	receipt.total = b.total + b2.total;

	return receipt;
}

//b-Overwrite insertion << operator to output the following:
//Bill Amount : 10.00
//Tip Amount : 2.00
//Tax Amount : 1.00
//Total Amount : 13.00

std::ostream & operator<<(std::ostream & out, const Receipt & POINTER_O)
{

	out << endl;
	out << "Bill Amount: " << POINTER_O.bill <<  endl;
	out << "Tip Amount: " << POINTER_O.tip << endl;
	out << "Tax Amount: " << POINTER_O.tax <<  endl;
	out << "Total Amount: " << POINTER_O.total << endl;
	out << endl;

	return out;
}

//a-Overwrite extraction >> operator to capture the bill amount from keyboard.
std::istream & operator>>(std::istream & in, Receipt & POINTER_I)
{
	//int output_amount;

	//std::cout << "Enter the bill amount: ";

	//in >> output_amount;

	std::cout << "Enter bill amount: ";
	in >> POINTER_I.bill;
	std::cout << "Enter tip amount: ";
	in >> POINTER_I.tip;
	std::cout << "Enter tax amount: ";
	in >> POINTER_I.tax;


	return in;
}

double Receipt::get_extended_cost()
{
	double compute_result;

	compute_result = bill + tip + tax;

	return compute_result;
}

double Receipt::get_total() const
{
	return total;
}
