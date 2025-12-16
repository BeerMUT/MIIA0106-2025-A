#include <iostream>
using namespace std;
void swapbyvalue(int a, int b) 
{
	int temp = a;
	a = b;
	b = temp;
}
void swapbyreference(int &a, int &b) 
{
	int temp = a;
	a = b;
	b = temp;
}
int main() 
{
	int x = 10;
	int y = 20;
	cout << "Before swap by value: x = " << x << ", y = " << y << endl;
	swapbyvalue(x, y);
	cout << "After swap by value: x = " << x << ", y = " << y << endl;

	cout << "Before swap by reference: x = " << x << ", y = " << y << endl;
	swapbyreference(x, y);
	cout << "After swap by reference: x = " << x << ", y = " << y << endl;

	return 0;
}