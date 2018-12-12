#include "receipt.h"
#include "test.h"
#include "test3.h"
#include "test4.h"
#include "shape.h"
#include <iostream>
#include <vector>


int main()
{


	// This will work by displaying, but does not work for this program because the value 10 is a static value for the total_amount
	//Receipt r1(10);
	//Receipt r2 = r1;


	//std::cout << r1;




	//In main.cpp, create a local class, dynamic class, and a unique pointer instance of the Test Class.

	//Receipt run(10);
	
	//Test run;

	//run.execute;


	//In main.cpp, create a local class, dynamic class, and a unique pointer instance of the Test Class.


	//Test a;

	//a.execute();

	//Test local_variable;
	//Test* dynamic_variable = new Test();
	//std::unique_ptr<Test> pointer = std::make_unique <Test>();

	//local_variable.execute();
	//dynamic_variable->execute();
	//pointer->execute();


	//Test3 local_variable_3;
	//Test3* dynamic_variable_3 = new Test3();
	//std::unique_ptr<Test3> pointer_3 = std::make_unique <Test3>();

	//local_variable_3.execute();
	//dynamic_variable_3->execute();
	//pointer_3->execute();


	//Test4 local_variable;
	//Test4* dynamic_variable = new Test4();
	//std::unique_ptr<Test4> pointer = std::make_unique <Test4>();

	//local_variable.execute();
	//dynamic_variable->execute();
	//pointer->execute();



	//Problem 4
	Line line;
	Shape& shape = line;
	shape.draw();

	Circle c;
	Shape& shape_c = c;
	shape_c.draw();

	std::vector<std::unique_ptr<Shape>> shapes;

	shapes.push_back(std::make_unique<Line>());
	shapes.push_back(std::make_unique<Circle>());
	shapes.push_back(std::make_unique<Shape>());

	for (auto& shape : shapes)
	{
		shape->draw();
	}





	system("pause");

	return 0;
}