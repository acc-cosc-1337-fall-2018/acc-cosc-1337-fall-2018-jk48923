#include "invoice_detail.h"

using std::cout;

double InvoiceDetail::get_extended_cost()
{

	double compute_result;

	compute_result = units * cost;

	return compute_result;
}

std::istream & operator >> (std::istream& in, InvoiceDetail & d)
{

	std::cout << "Enter cost: ";
	in >> d.cost;
	std::cout << "Enter units: ";
	in >> d.units;

	return in;
}
