#ifndef INVOICE_H
#define INVOICE_H
#include "invoice_detail.h"
#include<vector>
#include<iostream>

using std::vector;

class Invoice
{
public:

	// Create a void class function with add_invoice_detail with an InvoiceDetail parameter
	// add a value to the invoice_details variable.

	void add_invoice_detail(InvoiceDetail detail);
	virtual double get_total() const;
	friend Invoice operator+(const Invoice& i, const Invoice& i2);
	Invoice operator+=(const Invoice& i2);

private:

	// Create a private variable vector of InvoiceDetails named invoice_details.
	vector<InvoiceDetail> invoice_details;
	double total{ 0 };



};


#endif // INVOICE_H
