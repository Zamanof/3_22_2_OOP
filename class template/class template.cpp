#include<iostream>

using namespace std;

template <class T>
void foo(T a, T b) {
	cout << typeid(a).name() << endl;
}

template <class T>
T bor(int a, int b) {
	return a + b;
}

template<class T, class T1>
class Test {
	T field1;
	T1 field2;
public:
	Test(T a) : field1{a}{}

	void showInfo() {
		cout << typeid(field1).name() << endl;
		cout << typeid(field2).name() << endl;
	}
};

template <>
class Test<double, float> {
	double field1;
	float field2;
public:
	Test(double a) : field1{ a } {}

	void showInfo() {
		cout << typeid(field1).name() <<"  "<< typeid(field2).name() << endl;
	}
};

int main() {
	/*foo(4, 6);*/
	//foo(4.5, 5.3);

	Test<char, int> test1 {5};
	test1.showInfo();
	Test<double, float> test2{ 5.6 };
	test2.showInfo();
	/*bor<int>(3, 78);*/
}