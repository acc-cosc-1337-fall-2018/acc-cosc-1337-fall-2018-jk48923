#include "test.h"
#include "receipt.h"
#include "taxexemptreceipt.h"
#include <iostream>
#include <string>
#include <vector>

void Test::execute()
{

	//Problem 1
//std::cout << *receipt;
//std::cin >> *receipt;


	// Problem 6
	//std::cout << std::endl;

	//overWriteTax(*receipt, .10);//friend function
	//std::cout << *receipt;


	//Problem 7
	//Receipt receipt1(15, .05);
	//Receipt receipt2(40, .05);
	//Receipt receipt3 = receipt1 + receipt2;
	//std::cout << receipt3;



	// Problem 8

	//Update the Test class to include a unique pointer to TaxExemptReceipt data member.

	//std::unique_ptr<Receipt> rec = std::make_unique<Receipt>(10.0);

	//std::unique_ptr<TaxExemptReceipt> no_tax_rec = std::make_unique<TaxExemptReceipt>(10.0);

	//std::cout << *rec;
	//std::cout << std::endl;

	//std::cout << *no_tax_rec;

	//Problem 9

	std::vector<std::unique_ptr<Receipt>> receipts;
	receipts.push_back(std::make_unique<TaxExemptReceipt>(10));
	receipts.push_back(std::make_unique<Receipt>(10, .05));

	for (auto &r : receipts)
	{
		std::cout << *r;
	}


}

Test::Test()
{
	receipt = new Receipt(10);

}

Test::~Test()
{
	delete receipt;
	receipt = nullptr;
}
