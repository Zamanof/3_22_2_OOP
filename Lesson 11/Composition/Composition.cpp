#include<iostream>

using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point(int x, int y) :x(x), y(y)
	{
		cout << "Point (" << x << ", " << y << ") was created!" << endl;
	}
	~Point()
	{
		cout << "Point (" << x << ", " << y << ") was deleted!" << endl;
	}
	void change(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

class Image {
private:
	string name;
	int width;
	int height;
	Point position;
public:
	Image(string name, int width = 100, int heigth = 100, int x = 0, int y = 0) :
		name(name),
		width(width),
		height(heigth),
		position(Point(x, y))
	{
		cout << "Image: " << name << " was created!" << endl;
	}
	~Image()

	{
		cout << "Image: " << name << " was deleted!" << endl;
	}
	void moveTo(int x, int y) {
		cout << "Image: " << name 
			<< " was moved to point ("<<x<<", "<<y<<")"<<endl;
		position.change(x, y);
	}
};

int main() {
	// relations - отношение
	// is - является
	// has - имеет (содержит)
	// depends on - зависит от
	// uses - использует
	// part-whole - часть-целое

	// Композиция
	// 1. Объект-часть входит в состав объекта-целого
	// 2. Объект-часть может входит в состав только одного объекта-целого
	// 3. Объект-часть не существует без объекта-целого
	// 4. Объект-часть не содержит информацию об объекте-целом

	Image image1("Mojna Lizu?");
	image1.moveTo(123, 100);
	Image image2("Malevich black cross");
	image2.moveTo(255, 255);
}