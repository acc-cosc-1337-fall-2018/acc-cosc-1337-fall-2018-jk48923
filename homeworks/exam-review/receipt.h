#ifndef RECEIPT_H
#define RECEIPT_H
#include<string>
#include<vector>
#include<iostream>

class Receipt
{
public:

	Receipt() = default;
	Receipt(double b, double t, double tx) : bill(b), tip(t), tax(tx) {}
	double get_total();

	Receipt operator+=(const Receipt & b);
	friend std::ostream & operator<<(std::ostream & out, const Receipt & POINTER_O);
	friend std::istream & operator>>(std::istream & in, Receipt & POINTER_I);

private:
	
	double bill{ 0.0 };
	double tip{ 0.15 };
	double tax{ 0.0825 };
	double total = get_total();

};

#endif //RECEIPT_H