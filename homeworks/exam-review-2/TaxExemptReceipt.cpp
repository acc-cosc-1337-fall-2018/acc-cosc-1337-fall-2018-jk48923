#include "taxexemptreceipt.h"
#include<iomanip>


void TaxExemptReceipt::calculate_bill_total()
{
	bill_amount = amount;
	tip_amount = (amount * tip_rate);

	tip_amount = round(tip_amount * 100) / 100;


	total_amount = bill_amount + tip_amount;

	total_amount = round(total_amount * 100) / 100;
}

void TaxExemptReceipt::display(std::ostream & out)
{

	calculate_bill_total();

	std::cout << std::endl;
	std::cout << "Bill Amount: $" << std::internal << std::setw(8) << std::setprecision(2) << std::fixed << bill_amount << std::endl;
	std::cout << "Tip Amount: $" << std::internal << std::setw(8) << std::setprecision(2) << std::fixed << tip_amount << std::endl;
	std::cout << "Total Amount: $" << std::internal << std::setw(8) << std::setprecision(2) << std::fixed << total_amount << std::endl;
	std::cout << std::endl;
}

