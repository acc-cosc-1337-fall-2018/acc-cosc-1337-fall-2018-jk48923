#include "dna.h"
#include "grade.h"
#include "references.h"
#include<iostream>
#include<string>
#include<vector>
#include<map>


using std::vector; using std::cout; using std::string; using std::cout; using std::endl;


int main()
{

	// Problem 1 - DNA strings
	string s;
	get_dna_count(s);


	// Problem 2 - Vector of 20 ints
	//vector<int> grades;
	//vector_of_ints(grades);


	// Problem 3
	//In main Create 3 Receipt instances with amounts 10, 20, and 30.  
	//Add the instances to a vector of Receipt, iterate through the vector
	//to += each instance of receipt into a result Receipt class, and finally out the result total to screen.

	//Receipt a(10);
	//Receipt b(20);
	//Receipt c(30);


	// Problem 4
	//Line line;
	//Shape& shape = line;
	//shape.draw();
	//Circle c;
	//Shape& shape_c = c;
	//shape_c.draw();

	//std::vector<std::reference_wrapper<Shape>> shapes;
	//Circle circle;
	////Circle c;
	//shapes.push_back(line);
	//shapes.push_back(c);
	//for (auto wrsshape : shapes)
	//{
	//	wrsshape.get().draw();
	//}


	// Problem 5 return by reference
	//string str_by_reference;
	//get_reverse(str_by_reference);
	//cout << get_reverse << endl;

	//Why does the string change or not change?
	// The string changes because it is a return by reference 

	// Problem 6 return by value
	//string str_by_value;
	//value_reverse(str_by_value);
	//cout << value_reverse << endl;

	//Is the main created string the same variable(is it at the same memory address) as the returned string why or why not?
	// Yes because it is a reference

	// Problem 7 const return by reference
	//string str_by_reference;
	//get_reverse(str_by_reference);
	//cout << get_reverse << endl;

	//Why does the compiler let you change or not let you change the incoming const reference parameter?
	// It does not change because the reference parameter is a constant

	system("pause");

	return 0;

}
