#ifndef TEST3_H
#define TEST3_H
#include "receipt.h"
#include<iostream>
#include<string>

class Test3
{

public:

	Test3();
	~Test3();

	void execute();

private:

	Receipt* receipt;


};

#endif //TEST3_H