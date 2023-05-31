#pragma once
#include<iostream>
#include<conio.h>
using namespace std;

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

	static double distance(const Point& left, const Point& right) {
		return sqrt((left.x - right.x)* (left.x - right.x) 
			+ (left.y - right.y) * (left.y - right.y));
	}

	static double length(const Point& point) {
		return distance(point, Point());
	}

	friend Point operator+(const Point& left, const Point& right) {
		return Point(left.x + right.x, left.y + right.y);
	}

	friend Point operator-(const Point& left, const Point& right) {
		return Point(left.x - right.x, left.y - right.y);
	}

	friend Point operator*(const Point& left, double value) {
		return Point(left.x * value, left.y * value);
	}
	
	friend Point operator*(double value, const Point& left) {
		return Point(left.x * value, left.y * value);
	}
	
	friend Point operator/(const Point& left, double value) {
		return Point(left.x / value, left.y / value);
	}
	
	// unar minus
	const Point operator-() {
		return Point(-x, -y);
	}

	// -- ++
	Point& operator--() {
		--x;
		--y;
		return *this;
	}

	Point& operator++() {
		++x;
		++y;
		return *this;
	}

	const Point operator--(int) {
		Point point(x, y);
		--(*this);
		return point;
	}

	const Point operator++(int) {
		Point point(x, y);
		++(*this);
		return point;
	}

	friend bool operator==(const Point& left, const Point& right) {
		return left.x == right.x && left.y == right.y;
	}

	friend bool operator!=(const Point& left, const Point& right) {
		return !(left.x == right.x && left.y == right.y);
	}

	friend bool operator>(const Point& left, const Point& right) {
		return length(left) > length(right);
	}
	friend bool operator<(const Point& left, const Point& right) {
		return length(left) < length(right);
	}

	friend ostream& operator<<(ostream& output, const Point& point) {
		output << "(" << point.x << ", " << point.y << ")";
		return output;
	}
	friend istream& operator>>(istream& input, Point& point) {
		input >> point.x;
		input.ignore(1);
		input >> point.y;
		return input;
	}

	double operator!() {
		return distance(*this, Point());
	}
};