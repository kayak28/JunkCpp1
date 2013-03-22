//In c++, we can assign defalt value without using constructor. 

#include <iostream>
using namespace std;

// display "n th = (x,y) "
void display(int i, int x = 0, int y = 0)
{
	cout << i << "th = (" << x << ", " << y << ")\n";
}
int main()
{
	display(1);
	//because x and y are not declared, 
	//this program uses defalt value(x= 0, y =0) 
	display(2,1);
	//y are not declared, this program assumes that y = 0
	display(3,2,3);
	//all variables are declared.
	
	return 0;
}
