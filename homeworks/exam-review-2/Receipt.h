#ifndef RECEIPT_H
#define RECEIPT_H
#include <iostream>
#include<string>

class Receipt
{

public:

	Receipt() = default;
	// one constructor that has two parameters amount and tax_rate (default value of .075).
	Receipt(double a, double t = 0.075) : amount(a), tax_rate(t) {}

	friend std::ostream & operator<<(std::ostream & out, Receipt & POINTER_O);
	friend std::istream & operator>>(std::istream & in, Receipt & POINTER_I);


	friend void overWriteTax(Receipt & r, double t);

	friend Receipt operator+(const Receipt & b, const Receipt & b2);


protected:

	virtual void display(std::ostream& out);

	double amount{ 0.0 };
	double total_amount{ 0.0 };
	double bill_amount{ amount };
	double tax_rate{ 0.075 };
	const double tip_rate{ 0.10 };
	double tip_amount{ amount * tip_rate };
	double tax_amount{ amount * tax_rate };

	void calculate_bill_total();

};

#endif //RECEIPT_H