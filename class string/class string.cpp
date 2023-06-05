#include<iostream>

using namespace std;

int main() {
	/*string str = "Nadir Zamanov";
	cout << str << endl;
	cin >> str;
	cout << str << endl;*/

	string word;
	/*cout << sizeof(word) << endl;*/
	cout <<"size: " << word.size() << endl;
	cout << "capacity: " << word.capacity() << endl;
	for (size_t i = 0; i < 14; i++)
	{
		word += "a";
	}
	cout << "size: " << word.size() << endl;
	cout << "capacity: " << word.capacity() << endl;
	word += "a";
	cout << "size: " << word.size() << endl;
	cout << "capacity: " << word.capacity() << endl;
	word += "a";
	cout << "size: " << word.size() << endl;
	cout << "capacity: " << word.capacity() << endl;
	for (size_t i = 0; i < 16; i++)
	{
		word += "a";
	}
	cout << "size: " << word.size() << endl;
	cout << "capacity: " << word.capacity() << endl;
	word.clear();
	cout << "size: " << word.size() << endl;
	cout << "capacity: " << word.capacity() << endl;

	string a = "Salam";
	cout << a[6] << endl;
}