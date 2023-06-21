#include<iostream>

using namespace std;
class Base {
public:
	Base()
	{
		cout << "Base class constructor" << endl;
	}
};

class DerivedA : virtual public Base{
public:
	DerivedA()
	{
		cout << "DerivedA class constructor" << endl;
	}
};

class DerivedB : virtual public Base {
public:
	DerivedB()
	{
		cout << "DerivedB class constructor" << endl;
	}
};

class DiamondChild : public DerivedA, public DerivedB {
public:
	DiamondChild()
	{
		cout << "DiamondChild class constructor" << endl;
	}
};

int main() {
	DiamondChild diamond;
}