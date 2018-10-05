#include "invoice.h"
#include<iostream>

int main()
{

	//InvoiceDetail InvoiceDetail_1(10, 100);
	//std::cout<<InvoiceDetail_1.get_extended_cost(); //output to screen

	Invoice invoice;
	InvoiceDetail detail;
	std::cin >> detail;
	invoice.add_invoice_detail(detail);
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));


	invoice.add_invoice_detail(InvoiceDetail(10, 10));
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(10, 10));

	Invoice invoice1;

	invoice1.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice result = invoice + invoice1;

	std::cout << result.get_total();

	return 0;
	
}
