#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdexcept>
#include <csignal>
#include <pthread.h>
#include "function.h"


using namespace std;

int main(int argc, char const *argv[])
{	
	print_hello();
	cout << endl;
	cout << "The factorial of 5 is: " << factorial(5) << endl;
	return 0;

}