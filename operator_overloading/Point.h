#pragma once
class Point
{
private:
	double x;
	double y;
public:
	Point() :Point(0, 0) {}
	Point(double x, double y) :x{ x }, y{ y } {}
	void show();
	void read();
	/*static Point add(const Point& point1, const Point& point2) {
		return Point(point1.x + point2.x, point1.y + point2.y);
	}*/
};

