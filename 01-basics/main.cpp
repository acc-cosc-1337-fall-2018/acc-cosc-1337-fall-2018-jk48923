#include<iostream>
#include "basics.h"

using std::cout;

void func()
{
	int num{ 3 };
	std::cout << num;
}

int main()
{
	// dynamic memory allocation - allocated on the heap
	int* ptr_n = new int(5);
	cout << ptr_n;
	delete ptr_n; // 3 stages, point to (send) to memory then do task, release/delete

	// We are responsable for releasing it!!
	delete ptr_n;

	func();

	//int num{ 5 };
	//int& num_ref = num;
	//cout << "Address of num: " << &num_ref << std::endl;
	//cout << "Value at address stored by num_ref: " << num_ref << std::endl;
	//cout << "Address stored at num_ref: " << &num_ref << std::endl;
	//

	//int* ptr_num = &num_ref;
	//cout << "Value pointed to by ptr_num: " << ptr_num << std::endl;
	//cout << "Address of num: " << ptr_num << std::endl;
	//cout << "Address ptr_num: " << &ptr_num << std::endl;

	//cout << sum_numbers(5, 5);

	return 0;
	
}
