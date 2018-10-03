#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "invoice.h"

TEST_CASE("Test const and units")
{
	InvoiceDetail InvoiceDetail_1(10, 10);

	REQUIRE(InvoiceDetail_1.get_extended_cost() == 100);
}

TEST_CASE("Test invoice get total")
{
	Invoice Invoice_test;

	Invoice_test.add_invoice_detail(InvoiceDetail(10, 10));
	Invoice_test.add_invoice_detail(InvoiceDetail(5, 5));
	Invoice_test.add_invoice_detail(InvoiceDetail(100, 2));

	REQUIRE(Invoice_test.get_total() == 325);
}