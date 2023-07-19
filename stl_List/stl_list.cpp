#include<iostream>
#include<list>

using namespace std;


int main() {
	list<int> lst;
	lst.push_back(25);
	lst.push_back(22);
	lst.push_back(12);
	lst.push_back(2545);
	lst.push_back(13654);
	lst.push_back(123);
	cout << lst.front() << endl;
	cout << lst.back() << endl;
	list<int>::iterator itera = lst.begin();
	lst.insert(itera, 13);

	for (int item : lst) {
		cout << item << ' ';
	}
	cout << '\n';
}