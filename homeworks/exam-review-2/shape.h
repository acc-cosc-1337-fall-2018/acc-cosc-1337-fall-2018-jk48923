#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

class Shape
{
public:
	virtual void draw() {}
};

class Line : public Shape
{
public:
	void draw() 
	{ 
		std::cout << "I drew a Line" << std::endl; 
	}
};

class Circle : public Shape
{

public:
	void draw() 
	{ 
		std::cout << "I drew a Cirle" << std::endl; 
	                                                                                                                                                                                                                                      }
};

#endif //SHAPE_H