#include<iostream>

using namespace std;

class Shape
{
public:
	Shape() = default;
	Shape(const double &, const double &);
	virtual double area() = 0;
protected:
	double length = 0.0;
	double width = 0.0;
};


class Rectangle: public Shape
{
public:
	Rectangle() = default;
	Rectangle(const double &, const double &);
	double area() override;
};

class Triangle: public Shape
{
public:
	Triangle() = default;
	Triangle(const double &, const double &);
	double area() override;	
};

Shape::Shape(const double &l, const double &w):length(l), width(w) {}

Rectangle::Rectangle(const double &l, const double &w):Shape(l, w) {}
double Rectangle::area()
{
	return length*width;
}

Triangle::Triangle(const double &l, const double &w):Shape(l, w) {}
double Triangle::area()
{
	return length*width/2;
}


int	main(int argc, char const *argv[])
{
	Rectangle rect(2.5, 4);
	Triangle tri(2.5, 4);

	Shape *shape1 = &rect;
	Shape *shape2 = &tri;

	cout << shape1->area() << endl;
	cout << shape2->area() << endl;
	return 0;
}