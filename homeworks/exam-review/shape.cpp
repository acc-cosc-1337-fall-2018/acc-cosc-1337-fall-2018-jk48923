#include<iostream>
#include "shape.h"

class Shape
{
public:
	virtual void draw() {}
};

class Line : public Shape
{
public:
	void draw() { std::cout << "Line"; }
};

class Circle : public Shape
{

public:
	void draw() { std::cout << "Cirle"; }
};