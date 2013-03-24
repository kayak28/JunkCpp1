//
#include <iostream>
using namespace std;
class POINT
{
	public:
		long x;
		long y;
		void operator ++(int n)
		{
			x++;
			y++;
		}
		POINT operator ++()
		{
			++x;
			++y;
			return *this;
		}			
} obj1, obj2;

int main()
{
	obj1.x = 10;//assign obj1 of x is 10
	obj2.y = 5;//assign obj2 of y is 5
	
	cout << "after assign \n";
	cout <<"obj1.x = " << obj1.x << "\n";
	cout << "obj1.y = " << obj1.y << "\n";
	cout << "obj2.x = " << obj2.x << "\n";
	cout << "obj2.y = " << obj2.y << "\n";
 
	
	obj2 = ++obj1;//assign obj2 with  pre-increment both variables in obj1

	cout << " after obj2 = ++obj1\n";
	cout <<"obj1.x = " << obj1.x << "\n";
	cout << "obj1.y = " << obj1.y << "\n";
	cout << "obj2.x = " << obj2.x << "\n";
	cout << "obj2.y = " << obj2.y << "\n";
	
	obj2++;//post-increment with both variable in obj2 
	
	cout << "after  post-increment\n";
	cout << "x = " << obj1.x << "\ty = " << obj1.y << "\n";
	cout << "x = " << obj2.x << "\ty = " << obj2.y << "\n";

	return 0;
}
