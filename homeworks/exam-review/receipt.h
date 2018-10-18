#ifndef RECEIPT_H
#define RECEIPT_H
#include<string>
#include<vector>
#include<iostream>

class Receipt
{
public:

	Receipt() = default;
	Receipt(int b, double t, double tx) : bill(b), tip(t), tax(tx) {}
	double get_extended_cost();

	friend Receipt operator+(const Receipt & b, const Receipt & b2);

	friend std::ostream & operator<<(std::ostream & out, const Receipt & POINTER_O);

	friend std::istream & operator>>(std::istream & in, Receipt & POINTER_I);

private:
	
	int bill;
	double tip;
	double tax;
	double total;

};

#endif //RECEIPT_H