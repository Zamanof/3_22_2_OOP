#include<iostream>

using namespace std;

class Base 
{
public :
	int basePublicField;
	void fooPublic() {
		cout << "foo public";
	}
protected:
	int baseProtectedField;
	void fooProtected() {
		cout << "foo protected";
	}
};
class Derived :public Base {
private:
	using Base::fooPublic;
public:
	/*using Base::baseProtectedField;
	using Base::fooProtected;*/
	void show() {
		Base::fooProtected();
	}
	void fooProtected() = delete;

};

class GrandChild:public Derived {
public:
	void method() {
		/*fooProtected();*/
	}
};




int main() {
	/*Derived derived;*/

	/*derived.baseProtectedField;
	derived.fooProtected();*/
	/*GrandChild grand;*/
	/*grand.fooPublic();*/
	B a;
}