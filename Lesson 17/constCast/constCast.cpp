#include<iostream>

using namespace std;

void foo(const int* a, const int& b, int* c) {
	int* fooA = const_cast<int*> (a);
	*fooA = 136;
	const_cast<int&>(b) = 69;
	const int* fooC = const_cast<const int*> (c);
}

int main() {
	// const_cast<new_type>(expression)
	int numb1 = 12;
	int numb2 = 10;
	int numb3 = 36;
	cout << "Before function call" << endl;
	cout << "numb1 = " << numb1 << endl;
	cout << "numb2 = " << numb2 << endl;
	foo(&numb1, numb2, &numb3);
	cout << "After function call" << endl;
	cout << "numb1 = " << numb1 << endl;
	cout << "numb2 = " << numb2 << endl;
}