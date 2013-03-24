#include <cstdio>
#include <iostream>
namespace std{} 
using namespace std;

class CManiac
{
	public: 
		int operator +()
		{//define the operatrt +
			return 2; 
		}
};

int main ()
{
	CManiac maniac;// create a classObject named maniac 
	int value = +maniac; //use re-definded + operator 
	cout << "value = " << value << "\n";
	return 0;
}


