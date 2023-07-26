#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

class Test {
private:
	int a = 0;
public:
	void operator()() {
		a++;
		cout << "Functor" << endl;
	}
	int operator()(int number) {
		a++;
		return number + a;
	}

	int operator()(int number1, int number2) {
		a++;
		return number1 * a + number2;
	}

	int getA() {
		return a;
	}
};


class addNumberFrom
{
private:
	int current;
	int delta;
public:
	addNumberFrom(int number, int from = 0)
		:delta(number), current(from)
	{}
	int operator()() {
		return current += delta;
	}
};



int main() {
	// Functor - functional object

	/*Test test;
	cout << test.getA() << endl;
	test();
	test();
	cout << test.getA() << endl;
	cout << test(25) << endl;
	cout << test(10, 15) << endl;*/

	cout << "\t\t\t\tMultiplication table" << endl;
	cout << "\n\n";
	for (size_t i = 1; i <= 10; i++)
	{
		list<int> lst(10);
		generate_n(lst.begin(), lst.size(), addNumberFrom(i));
		copy(lst.begin(), lst.end(), ostream_iterator<int>(cout, "\t"));
		/*for (auto item : lst) {
			cout << item << '\t';
		}*/
		cout << "\n\n";
	}

}