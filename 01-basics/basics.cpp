#include "basics.h"
#include <iostream>


int sum_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write code for multiply_numbers function here

int multiply_numbers(int num1, int num2)
{
	return num1 * num2;
}

void pass_by_val_by_ref(int val, int& ref)
{
	val = 99;
	ref = 99;

}

void const_pass_by_val_by_ref(int val, const int & ref)
{
}

void pass_by_pointer(int * ptr)
{
	//ptr wer're using the address
	*ptr = 99; // *ptr get the value of address pointed to
}

void initialize_vector_of_strings()
{
}

MyClass::MyClass()
{
	std::cout << "Constructor....\n";
}

MyClass::MyClass(MyClass & my_class)
{
	ptr_num = new int(*my_class.ptr_num);
}

void MyClass::set_ptr_num(int val)
{
	*ptr_num = val;
}

MyClass & MyClass::operator=(MyClass other)
{
	ptr_num = new int(*my_class.ptr_num);

	return *this;
}

MyClass::~MyClass()
{
	std::cout << "Num: " << num << " Ptr num: " << *ptr_num << "Address: " << ptr_num << "deconstructor...\n";
}
