#include "test4.h"
#include "receipt.h"
#include <iostream>
#include <string>

void Test4::execute()
{


	//https://stackoverflow.com/questions/27117597/how-to-create-an-array-of-smart-pointers
	//int size = 5;
	//receipt = new Receipt[size]{ 10,20,30,40,50 };



	//upArray = unique_ptr<int[]>(new int[nArrayLength]());

	//int Array = { 10, 20, 30, 40, 50 };

	//std::unique_ptr<int[]> Receipt(new int[Array])

	//std::unique_ptr<int[]> Receipt(new int[10, 20, 30, 40, 50]);

	//std::unique_ptr<unique_ptr<Object>[]>= make_unique<unique_ptr<Object>[]>(20);



	//unsigned int size = 16000;
	//std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>> pData(new unsigned char[size]);

	//std::unique_ptr<Receipt[]> receipt = std::make_unique<Receipt[]>(size);


	//int size{ 5 };

	//receipt = new Receipt[size]{ 10,20,30,40,50 };

	//std::unique_ptr<int[]> Receipt(new int[size]{10, 20, 30, 40, 50});

	//std::unique_ptr<Receipt> receipt = { 10,20,30,40,50 };

	//std::unique_ptr<int[]> receipt = { 10,20,30,40,50 };

	//std::unique_ptr<int[]> Receipt(new int[size]{10, 20, 30, 40, 50});

	//std::unique_ptr<int[]> arr(new int[size] {10});

	//std::unique_ptr<int[]> Receipt(int [size]{ 10,20,30,40,50 });


	//for (int i{}; i != size; ++i)
		//std::cout << receipt[i];

	//for (int i = 0; i < size; i++)
	//{
	//std::cout << receipt[i];
	//}


//	const int size = 5;
//	std::unique_ptr<int[]> Receipt(new int[size]);
//
//	for (int i = 0; i < size; ++i) {
//		Receipt[i] = (i == 0) ? 1 : i * Receipt[i - 1];
//	}
//
//	for (int i = 0; i < size; ++i) {
//		std::cout << i << ": " << Receipt[i] << '\n';
//	}
//}

	//std::cout << *receipt;


	//for (int i = 0; i < size; i++)
	//{
	//	std::cout << receipt[i];
	//}

	//Receipt receipt;
	//
	//std::unique_ptr<Receipt> ptr_cls = std::make_unique <Receipt>();

	//for (int i = 0; i < size; i++)
	//{
	//	std::cout receipt[i];
	//}

	//int size = 5;

	//receipt = new Receipt[size]{ 10,20,30,40,50 };

	//std::unique_ptr<Receipt> ptr_cls = std::make_unique<Receipt>();
	//std::cout << *receipt;
	//ptr_cls->receipt.amount(10, 20, 30, 40, 50);

}

Test4::Test4()
{
	receipt = new Receipt(10);

}

Test4::~Test4()
{
	delete receipt;
	receipt = nullptr;
}
