#include<iostream>

using namespace std;

class Test {
	int a;
	int b;
public:
	Test(int a, int b) : a{ a }, b{ b }
	{}
};

void foo(int&& a) {

}
int main() {
	int number = 5;
	int& refNumber = number;
	int&& rRefNumber = number + 5;
	foo(number + 5);
}