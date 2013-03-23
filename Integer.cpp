#include <iostream>
using namespace std;

class Integer 
{
	public:
		int value;
		friend void operator += (Integer &obj, int value);
		friend void operator >> (int value, Integer &obj);
		Integer() 
		{
			value = 0;
		}

} obj ;
void operator += (Integer &obj, int value)
{
	obj.value += value;
}
void operator >> (int value, Integer &obj)
{
	obj.value += value;
}
int main ()
{
	obj += 100;
	cout << "after obj += integer \n";
	//cout << obj; can not execute because obj is not primative type,
	// it is unknown data type for operator" << " 
	
	cout << obj.value;//obj.value is int type so it can execute  
	cout << "\n";
	100 >> obj; 

	cout << obj.value;
	cout << "\n";
	return 0;
}

