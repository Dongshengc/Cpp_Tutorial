#include <iostream>

using namespace std;

class Box
{
public: 
	Box(const double & = 0.0, const double & = 0.0, const double & = 0.0);
	Box(const Box &);
	~Box();

	double getVolume();

	static int obj_count;

private:
	double length;
	double width;
	double height;
};

Box::Box(const double &_length, const double &_width, const double &_height):length(_length), width(_width), height(_height)
{
	cout << "Normal Constructor" << endl;
	obj_count++;
}

Box::Box(const Box &box)
{
	cout << "Copy Constructor" << endl;
	length = box.length;
	width = box.width;
	height = box.height;
}

Box::~Box(){
	cout << "Destructor" << endl;
}

double Box::getVolume()
{
	return this->length * this->width * this->height;
}

int Box::obj_count = 0;
int main(int argc, char const *argv[])
{
	Box box1(1.1, 2.2, 3.3), box2(2.3, 4.5, 1.6);
	cout << "Total Object Number: " << box1.obj_count << endl;
	return 0;
}