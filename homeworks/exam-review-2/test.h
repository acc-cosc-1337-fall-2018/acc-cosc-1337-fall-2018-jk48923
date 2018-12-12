#ifndef TEST_H
#define TEST_H
#include "receipt.h"
#include "taxexemptreceipt.h"

class Test
{

public:

	Test();
	~Test();

	void execute();


private:

	Receipt* receipt;

};


#endif //TEST_H