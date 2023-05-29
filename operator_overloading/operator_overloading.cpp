#include<iostream>
#include"Point.h"

using namespace std;

int main() {
	/*Point point1{25, 69};
	Point point2{36, 17};
	Point point3 = point1 * 5;
	Point point4 = 5 * point1;
	point4 = -point4;
	point3.show();
	(--point3).show();
	point3.show();*/

	Point p1{ 0, 0 };
	Point p2{ 1, 1 };

	Point p3 = p1++ + p2;
	p3.show();
}