// FunctionParametersReturntype.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Prototype//
void Mysum(float x,float y);
void Mydifference(float m, float n);
void Myproduct(float p, float q);
void Square(float side);
void Rectangle(float length, float breadth);





int main()
{
	float x, y;
	cout << "\nEnter the value for x: ";
	cin >> x;
	cout << "\nEnter the value for y: ";
	cin >> y;

	Mysum(x,y);//Function call//
	Mydifference(x, y);
	Myproduct(x, y);
	Square(x);
	Rectangle(x, y);
}

void Mysum(float x,float y) {
	//adding two numbers//
	
	cout << "\nThe sum of two numbers is:" << (x + y) << endl;
	
}
void Mydifference(float m, float n) {
	//substracting two numbers//
	cout << "\nEnter the value for m: ";
	cin >> m;
	cout << "\nEnter the value for n: ";
	cin >> n;
	cout << "\nThe difference of two numbers is:" << (m - n) << endl;
}
void Myproduct(float p, float q) {
	//The multiplication//
	cout << "\nThe multiplication of two numbers is:" << (p * q) << endl;
}
void Square(float side) {
	cout << "\nThe area of square is: " << (side * side) << endl;
	cout << "\nThe perimeter of square is: " << (4 * side) << endl;
}

void Rectangle(float length, float breadth) {
	cout << "\nThe area of rectangle is: " << (length * breadth) << endl;
	cout << "\nThe perimeter of rectag=ngle is: " << (2 * (length + breadth)) << endl;
}
