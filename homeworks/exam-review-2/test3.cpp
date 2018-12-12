#include "test3.h"
#include "receipt.h"
#include <iostream>
#include <string>

void Test3::execute() 
{
	//int size = 5;
	//receipt = new Receipt[size]{ 10,20,30,40,50 };
	//for (int i = 0; i < size; i++)
	//{
	//	std::cout << receipt[i];
	//}
}

Test3::Test3()
{
	receipt = new Receipt(10);

}

Test3::~Test3()
{
	delete receipt;
	receipt = nullptr;
}
