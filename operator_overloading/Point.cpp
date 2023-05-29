#include "Point.h"
#include<iostream>
using namespace std;

void Point::show() 
{
	cout << "(" << x << ", " << y << ")\n";
}

void Point::read() {
	cin >> x;
	cin.ignore(1);
	cin >> y;
}
