#include<iostream>

using namespace std;

class BaseClass {
private:
	int privateBaseField;
protected:
	int protectedBaseField;
public:
	int publicBaseField;
};

class DerivedPublic : public BaseClass {
public:
	void AccessInfo() {
		cout << ": public BaseClass" << endl;
		cout << "Have access public fields and methods" << publicBaseField << endl;
		cout << "Have access protected fields and methods" << protectedBaseField << endl;
		cout << "Don't have access protected fields and methods"  << endl;
	}
};

class DerivedProtected : protected BaseClass {
public:
	void AccessInfo() {
		cout << ": public BaseClass" << endl;
		cout << "Have access public fields and methods" << publicBaseField << endl;
		cout << "Have access protected fields and methods" << protectedBaseField << endl;
		cout << "Don't have access protected fields and methods" << endl;
	}
};

class DerivedPrivate : private BaseClass {
public:
	void AccessInfo() {
		cout << ": public BaseClass" << endl;
		cout << "Have access public fields and methods" << publicBaseField << endl;
		cout << "Have access protected fields and methods" << protectedBaseField << endl;
		cout << "Don't have access protected fields and methods" << endl;
	}
};

class ThirdInheritance : public DerivedPrivate {
public:
	void method() {
		publicBaseField = 5;
		protectedBaseField = 45;
		/*privateBaseField = 23;*/
	}
};

int main() {
	ThirdInheritance third;
	third.publicBaseField;
	//DerivedPublic publicDerived;
	//publicDerived.AccessInfo();
	//publicDerived.publicBaseField = 12;
	///*publicDerived.protectedBaseField = 12;*/
	///*publicDerived.privateBaseField = 12;*/

	//DerivedProtected protectedDerived;
	//protectedDerived.AccessInfo();


	//DerivedPrivate privateDerived;
	//privateDerived.AccessInfo();
}