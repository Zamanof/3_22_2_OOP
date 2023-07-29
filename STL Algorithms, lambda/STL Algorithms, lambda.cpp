#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>

using namespace std;

//[](int n) {return n %2 == 0; }

class {
public:
	bool operator()(int n) const { return n % 2 == 0; }
};

bool isEven(int n) {
	return n % 2 == 0;
}

template <class T>
void show(vector<T> vec) {
	for (auto item : vec) {
		cout << item << '\t';
	}
	cout << '\n';
}

int main() {
	vector<int> numbs{ 2, 6, 4, 8, 15, 45, 32, 1, 845, 222, 357, 38, 48 };
	vector<int> even_numbers;

	/*copy_if(
		numbs.begin(),
		numbs.end(),
		back_inserter(even_numbers),
		isEven);*/
	// lambda expression - anonymous functions
	// [](){}
	copy_if(
		numbs.begin(),
		numbs.end(),
		back_inserter(even_numbers),
		[](int n) {return n %2 == 0; });

	/*show(even_numbers);*/
	
	/*string word = "HELLO world";*/

	/*auto lwr = (char*)word.c_str();
	_strlwr_s(lwr, word.size() + 1);
	word = string(lwr);
	cout << word << endl;*/

	/*for_each(word.begin(), word.end(), 
		[](char& chr) {chr = tolower(chr);});
	cout << word << endl;*/

	/*for_each(numbs.begin(), numbs.end(), [](int& n) {
		n *= 2;
		});*/

	show(numbs);
	/*auto rmv = remove(numbs.begin(), numbs.end(), 32);
	numbs.erase(rmv);
	show(numbs);
	
	rmv = remove_if(numbs.begin(), numbs.end(), [](int x) {return x < 100; });
	numbs.erase(rmv, numbs.end());*/

	/*reverse(numbs.begin(), numbs.end());*/

	random_shuffle(numbs.begin(), numbs.end());

	show(numbs);
}