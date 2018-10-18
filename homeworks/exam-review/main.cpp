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

	// return by reference
	//string str_by_reference;

	//get_reverse(str_by_reference);

	//cout << get_reverse << endl;

	// return by value
	string str_by_value;

	value_reverse(str_by_value);

	cout << value_reverse << endl;

	//vector_of_ints();

	//get_dna_count();



	return 0;
}