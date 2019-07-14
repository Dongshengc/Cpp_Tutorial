#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char const *argv[])
{
	time_t now = time(0);
	char *dt = ctime(&now);
	cout << "The local date and time is: " << dt << endl;

	tm *gmtm = gmtime(&now);
	dt = asctime(gmtm);
	cout << "The UTC date and time is : " << dt << endl;

	tm *ltm = localtime(&now);
	cout << "The number of seconds since January 1st, 1900: " << now << endl;
	cout << "Year: " << 1900 + ltm->tm_year << endl;
	cout << "Month: " << 1 + ltm->tm_mon << endl;
	cout << "Day: " << ltm->tm_mday << endl;
	cout << "Time: " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;

	return 0;
}