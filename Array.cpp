//overloading operator var-- [] ---
#include <iostream>
using namespace std;

class Array 
{
	int ary[2];
	
	public:
		int & operator [] (int n)
		{
			//ary[n] = 555; 
			//if this excuted,
			// then n th array will be changed to 555
			return ary[n];
		}
} obj;

int main()
{
	obj[0] = 10;
	obj[1] = 100;
	
	cout << "obj[0] = " << obj[0] << "\n";
	cout << "obj[1] = " << obj[1] << "\n";
	
	return 0;
}
