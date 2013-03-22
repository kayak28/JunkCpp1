#include <iostream>
using namespace std;

int& referTo()
{
	static int x;
	return x;
}
int main ()
{
	referTo() = 5;// substitude 5 into referTo() function
	cout << "referTo() = " << referTo() << "\n";

	return 0;

}
