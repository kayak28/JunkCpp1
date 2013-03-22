#include <iostream>
using namespace std;

int countBits(unsigned x)
{
	int counter = 0;
	while(x != 0)
	{
		if(x & 1)//single & is called "bit wise AND operator"
		{
			counter++;
		}
		x >>= 1; // x = x >> 1;
	}
	return counter;
}

int main ()
{
	unsigned x = 10;
	cout << "num of "1" bit in "<< x;
	cout <<  countBits(x) << ".\n";
	return 0;
}
