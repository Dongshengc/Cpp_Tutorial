#include<iostream>
using namespace std;

#define HEIGHT 10 // no semicolon
#define WIDTH 20
const int PRICE = 20;
const int UNIT = 50;

int main()
{

    cout << "Area: " << HEIGHT*WIDTH << endl;
    cout << "Total: " << PRICE*UNIT << endl;
    return 0;
}
