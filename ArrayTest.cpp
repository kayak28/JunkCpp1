#include<iostream>
#include "math.h"
using namespace std;

int main ()
{
	int num;
	int digit[8];
	
	cout << "enter 8 num \n";
	cin >> num;

	for(int i = 7; i >= 0; i--)
	{
		digit[i] = (int) (num/pow(10.0,i)) %10; 
		cout << "digit[" << i <<"] = " << digit[i] << "\n";
	}


}
