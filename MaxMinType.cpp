#include <iostream>
#include <climits>
//#include <limits> enable to use functions that return max and min num

using namespace std;

int main()
{
	cout << "char     : " << CHAR_MIN << "~" << CHAR_MAX << "\n";
	cout << "short int: " << SHRT_MIN << "~" << SHRT_MAX << "\n";
	cout << "int      : " << INT_MIN << "~" << INT_MAX << "\n";
	cout << "long     : " << LONG_MIN << "~" << LONG_MAX << "\n";

	return 0;

}
