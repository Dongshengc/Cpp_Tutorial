#include<iostream>
using namespace std;

int main()
{
    cout << "Tests for enumeration type" << endl;
    enum color {red, blue, green};
    color a = blue;
    cout << "a: " << a << endl;
    
    enum length {low = 6, middium, high};
    length b = middium;
    cout << "b: " << b << endl;

    return 0;
}
