#include<iostream>

using namespace std;

class A {
public:
	A()
	{
		cout << "constructor A" << endl;
	}
	int fieldA;
	void methodA() {
		cout << "method a"<<endl;
	}
	void print() {
		cout << "print a" << endl;
	}
	~A()
	{
		cout << "destructor A" << endl;
	}
};

class B {
public:
	B()
	{
		cout << "constructor B" << endl;
	}
	int fieldB;
	void methodB() {
		cout << "method b" << endl;
	}
	void print() {
		cout <<"print b" << endl;
	}
	~B()
	{
		cout << "destructor B" << endl;
	}
};

class C: public A, public B{
public:
	C()
	{
		
		cout << "constructor C" << endl;
	}
	int fieldC;
	void methodC() {
		cout << "method c" << endl;
	}
	void print() {
		A::print();
		B::print();
		cout << "print c" << endl;
	}
	~C()
	{
		cout << "destructor C" << endl;
	}
};

class D : public A, public C {
public:
	D()
	{
		cout << "constructor D" << endl;
	}
	~D()
	{
		cout << "destructor D" << endl;
	}
};


class Base {
public:
	Base() {
		cout << "constructor Base" << endl;
	}
	void print() {
		cout << "print Base" << endl;
	}
	~Base() {
		cout << "destructor Base" << endl;
	}
};
class DerivedA: public Base {
public:
	DerivedA() {
		cout << "constructor DerivedA" << endl;
	}
	~DerivedA() {
		cout << "destructor DerivedA" << endl;
	}
};

class DerivedB : public Base {
public:
	DerivedB() {
		cout << "constructor DerivedB" << endl;
	}
	~DerivedB() {
		cout << "destructor DerivedB" << endl;
	}
};

class DerivedAB : public DerivedA, public DerivedB {
public:
	DerivedAB() {
		cout << "constructor DerivedAB" << endl;
	}
	~DerivedAB() {
		cout << "destructor DerivedAB" << endl;
	}
};

class Human {
public:
	string name;
	string lastname;
	int age;
	Human(string name,
	string lastname,
	int age):
		name(name),
		lastname(lastname),
		age(age)
	{}

	void showInfo() {
		cout << "Name: " << name << endl;
		cout << "Lastname: " << lastname << endl;
		cout << "Age: " << age << endl;
	}
};

class Student : public Human {
public:
	string groupName;
	Student(string name,
		string lastname,
		int age,
		string groupName):
		Human(name, lastname, age),
		groupName(groupName)
		
	{}

	void showInfo() {
		/*cout << "Name: " << name << endl;
		cout << "Lastname: " << lastname << endl;
		cout << "Age: " << age << endl;*/
		Human::showInfo();
		cout << "Group name: " << groupName << endl;
	}
};

int main() {
	/*C obj;*/
	/*obj.fieldA = 56;
	obj.fieldB = 78;
	obj.methodA();
	obj.methodB();
	obj.methodC();*/
	/*obj.A::print();
	obj.B::print();*/
	/*obj.print();*/
	/*Student at_il_la("Atilla", "Ismayil", 14, "3_22_2_ru");
	at_il_la.showInfo();*/

	/*D objD;*/

	DerivedA aObj;
	aObj.print();
	DerivedB bObj;
	bObj.print();
	DerivedAB abObj;
	
}