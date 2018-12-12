#ifndef TAXEXEMPTRECEIPT_H
#define TAXEXEMPTRECEIPT_H
#include "receipt.h"

class TaxExemptReceipt : public Receipt
{

public:

	TaxExemptReceipt() = default;

	TaxExemptReceipt(double amount) : Receipt(amount, 0.00) {}

private:

	void calculate_bill_total();
	void display(std::ostream& out) override;


};




#endif //TAXEXEMPTRECEIPT_H