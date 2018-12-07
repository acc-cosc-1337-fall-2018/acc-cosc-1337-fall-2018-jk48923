#include "receipt.h"
#include<iostream>
#include<string>
#include<vector>

using std::endl; using std::cout;


Receipt Receipt::operator+=(const Receipt & b)
{
	Receipt receipt;

	bill += b.bill;
	tax += b.tax;
	tip += b.tip;

	return receipt;
}

std::ostream & operator<<(std::ostream & out, const Receipt & POINTER_O)
{

	out << endl;
	out << "Bill Amount: $" << POINTER_O.bill <<  endl;
	out << "Tip Amount: $" << POINTER_O.tip << endl;
	out << "Tax Amount: $" << POINTER_O.tax <<  endl;
	out << "Total Amount: $" << POINTER_O.total << endl;
	out << endl;

	return out;
}

//a-Overwrite extraction >> operator to capture the bill amount from keyboard.
std::istream & operator>>(std::istream & in, Receipt & POINTER_I)
{

	std::cout << "Enter bill amount: ";
	in >> POINTER_I.bill;
	std::cout << "Enter tip amount: ";
	in >> POINTER_I.tip;
	std::cout << "Enter tax amount: ";
	in >> POINTER_I.tax;

	return in;
}

double Receipt::get_total()
{
	double compute_result;

	compute_result = bill + tip + tax;

	return compute_result;

}

