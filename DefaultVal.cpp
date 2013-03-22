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
	display(2,1);
	display(3,2,3);
	
	return 0;
}
