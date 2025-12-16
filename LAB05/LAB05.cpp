#include <iostream>
#include <string>
using namespace std;	
double calculateCIrcleArea(double radius) 
{
	return 3.14159 * radius * radius;
}
double calculateRectangleArea(double length, double width) 
{
	return length * width;
}
void inputandcalculateCircleArea() 
{
	double radius;
	cout << "Enter the radius of the circle: ";
	cin >> radius;
	double area = calculateCIrcleArea(radius);
	cout << "The area of the circle is: " << area << endl;
}
void inputandcalculateRectangleArea() 
{
	double length, width;
	cout << "Enter the length of the rectangle: ";
	cin >> length;
	cout << "Enter the width of the rectangle: ";
	cin >> width;
	double area = calculateRectangleArea(length, width);
	cout << "The area of the rectangle is: " << area << endl;
}
int main()
{
	inputandcalculateCircleArea();
	inputandcalculateRectangleArea();
	return 0;
}