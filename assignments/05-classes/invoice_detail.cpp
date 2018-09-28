#include "invoice_detail.h"

double InvoiceDetail::get_extended_cost()
{

	double compute_result;

	compute_result = units * cost;

	return compute_result;
}
