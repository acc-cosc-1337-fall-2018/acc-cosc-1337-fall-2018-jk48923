#include "receipt.h"
#include<iostream>
#include<string>
#include<iomanip>


void Receipt::display(std::ostream& out)
{
	//calculate_bill_total();

	std::cout << std::endl;
	std::cout << "Bill Amount: $" << std::internal << std::setw(8) << std::setprecision(2) << std::fixed << bill_amount << std::endl;
	std::cout << "Tip Amount: $" << std::internal << std::setw(8) << std::setprecision(2) << std::fixed << tip_amount << std::endl;
	std::cout << "Tax Amount: $" << std::internal << std::setw(8) << std::setprecision(2) << std::fixed << tax_amount << std::endl;
	std::cout << "Total Amount: $" << std::internal << std::setw(8) << std::setprecision(2) << std::fixed << total_amount << std::endl;
	std::cout << std::endl;

}

std::ostream & operator<<(std::ostream & out, Receipt & POINTER_O)
{


	POINTER_O.calculate_bill_total();

	POINTER_O.display(out);

	//out << POINTER_O.display << std::endl;



	//out << POINTER_O.display(std::ostream& out);

	//out << std::endl;
	//out << "Bill Amount: $" << POINTER_O.bill_amount << std::endl;
	//out << "Tip Amount: $" << POINTER_O.tip_amount << std::endl;
	//out << "Tax Amount: $" << POINTER_O.tax_amount << std::endl;
	//out << "Total Amount: $" << POINTER_O.total_amount << std::endl;
	//out << std::endl;

	//POINTER_O.calculate_bill_total();

 //	out << "Total Amount: $" << POINTER_O.total_amount << std::endl;

	return out;
}

std::istream & operator>>(std::istream & in, Receipt & POINTER_I)
{
	//int enable = 1;

	//do
	//{
	//	std::cout << "Enter bill amount: ";
	//	in >> POINTER_I.amount;

	//	POINTER_I.calculate_bill_total();



	//} while (enable = 1);

	return in;
}

void overWriteTax(Receipt & r, double t)
{
	r.tax_rate = t;
}



Receipt operator+(const Receipt & b, const Receipt & b2)
{
	Receipt receipt;

	//receipt.bill_amount += b.bill_amount;
	//receipt.tax_amount += b.tax_amount;
	//receipt.tip_amount += b.tip_amount;

	receipt.amount = b.amount + b2.amount;
	receipt.bill_amount = b.bill_amount + b2.bill_amount;
	receipt.tax_amount = b.tax_amount + b2.tax_amount;
	receipt.tip_amount = b.tip_amount + b2.tax_amount;

	return receipt;

	//return receipt.bill_amount, receipt.tax_amount, receipt.tip_amount;
}

void Receipt::calculate_bill_total()
{
	bill_amount = amount;
	tip_amount = (amount * tip_rate);
	tax_amount = round(tax_amount * 100) / 100;

	tip_amount = round(tip_amount * 100) / 100;


	total_amount = bill_amount + tax_amount + tip_amount;

	total_amount = round(total_amount * 100) / 100;



	//bill_amount = amount;
	//total_amount = bill_amount + tax_amount + tip_amount;

}
