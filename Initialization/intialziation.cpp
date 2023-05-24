#include<iostream>


using namespace std;
class Point
{
public:
	int x;
	int y;
	Point() :x{ 0 }, y{ 0 } {
		/*x = 0;
		y = 0;*/
		cout << "(Point) Parameterless" << endl;
	}
	Point(int x, int y) : x{ x }, y{y} {
		/*this->x = x;
		this->y = y;*/
		cout << "(Point) With Parameters" << endl;
	}
};

class Rectangle {
public:
	Point leftUpperCorner;
	int width;
	int height;
	Rectangle() 
		: width{ 0 }, height{ 0 }, 
			leftUpperCorner{15, 20}
	{
		/*leftUpperCorner.x = 15;
		leftUpperCorner.y = 20;*/
		/*width = 0;
		height = 0;*/
		cout << "(Regtangle) Parameterless" << endl;
	}

	Rectangle(int x, int y, int width, int height) 
		:	leftUpperCorner{ x, y }, 
			width{ width }, height{height}
	{
		/*leftUpperCorner.x = x;
		leftUpperCorner.y = y;
		this->width = width;
		this->height = height;*/
		cout << "(Regtangle) With Parameters" << endl;
	}
};

int main() {
	//int a = 5;  // копирующая инциализация
	//int b{}; // унифицированная инциализация
	//int c(5);	// прямая инициализация
	/*Point p1;
	Point p2{ 52, 15 };*/

	/*Rectangle rect;*/
	Rectangle rect1{ 25, 33, 15, 7 };
}