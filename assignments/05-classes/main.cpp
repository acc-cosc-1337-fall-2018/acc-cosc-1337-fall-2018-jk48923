#include "invoice.h"
#include "invoice_progress.h"
#include "invoice_utility.h"
#include "invoice.h"
#include<iostream>
#include<vector>
#include<memory> // smart pointer



//int main()
//{
//
//	InvoiceUtility invu(25);
//	invu.add_invoice_detail(InvoiceDetail(100, 1));
//
//	InvoiceProgress invp(250);
//	invp.add_invoice_detail(InvoiceDetail(100, 1));
//
//	std::cout << invu.get_total() << std::endl;
//
//	std::cout << invp.get_total() << std::endl;
//
//	invu.get_total();
//	invp.get_total();
//
//	Invoice& u = invu;
//	Invoice& p = invp;
//
//	u.get_total();
//	p.get_total();
//
//	std::cout << u.get_total() << std::endl;
//
//	std::cout << p.get_total() << std::endl;
//
//	return 0;
//
//}


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


int main()
{

	// smart pointer
	std::unique_ptr<Shape> line = std::make_unique<Line>();
	line->draw();

	std::vector<std::unique_ptr<Shape>> shapes;
	shapes.push_back(std::make_unique<Line>());
	shapes.push_back(std::make_unique<Circle>());

	for (auto& shape : shapes)
	{
		shape.get()->draw();
	}


	// Standard pointer
	//std::vector<Shape*> shapes{new Line(), new Circle()};

	//for (auto shape : shapes)
	//{
	//	shape->draw(); // arrow is howto access dynamic * memory
	//}

	//Line line;
	//Circle c;
	//shapes.push_back(line);
	//shapes.push_back(c);

	//for (auto w_r_shape : shapes)
	//{
	//	w_r_shape.get().draw();
	//}


	//line.draw();
	//Shape& shape = line;
	//shape.draw();

	//Circle c;

	//c.draw();
	//Shape& shape_c = c;
	//shape_c.draw();

	return 0;

}



//
//int main()
//{
//
//	InvoiceProgress inv(250);
//	inv.add_invoice_detail(InvoiceDetail(100, 1));
//
//
//	//InvoiceDetail InvoiceDetail_1(10, 100);
//	//std::cout<<InvoiceDetail_1.get_extended_cost(); //output to screen
//
//	Invoice invoice;
//	InvoiceDetail detail;
//	std::cin >> detail;
//	invoice.add_invoice_detail(detail);
//	invoice.add_invoice_detail(InvoiceDetail(5, 5));
//	invoice.add_invoice_detail(InvoiceDetail(100, 2));
//
//
//	invoice.add_invoice_detail(InvoiceDetail(10, 10));
//	invoice.add_invoice_detail(InvoiceDetail(5, 5));
//	invoice.add_invoice_detail(InvoiceDetail(10, 10));
//
//	Invoice invoice1;
//
//	invoice1.add_invoice_detail(InvoiceDetail(100, 2));
//
//	Invoice result = invoice + invoice1;
//
//	std::cout << result.get_total();
//
//	return 0;
//	
//}
