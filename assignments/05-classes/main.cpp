#include "invoice.h"
#include<iostream>

int main()
{

	//InvoiceDetail InvoiceDetail_1(10, 100);
	//std::cout<<InvoiceDetail_1.get_extended_cost(); //output to screen

	Invoice Invoice_test;

	InvoiceDetail d(10, 10);

	Invoice_test.add_invoice_detail(InvoiceDetail(10, 10));
	Invoice_test.add_invoice_detail(InvoiceDetail(5, 5));
	Invoice_test.add_invoice_detail(InvoiceDetail(10, 10));

	std::cout << Invoice_test.get_total();

	return 0;
	
}
