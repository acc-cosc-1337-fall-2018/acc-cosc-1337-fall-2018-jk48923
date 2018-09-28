#include "invoice_detail.h"
#include<iostream>

int main()
{

	InvoiceDetail InvoiceDetail_1(10, 100);
	std::cout<<InvoiceDetail_1.get_extended_cost();//output to screen

	return 0;
}
