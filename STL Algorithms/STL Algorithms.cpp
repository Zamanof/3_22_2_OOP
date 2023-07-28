#include<iostream>
#include<algorithm>
#include <vector>

using namespace std;

class Cat {
public:
	string name;
	int age;
	int life;
	Cat(string name, int age, int life)
		:name(name), age(age), life(life)
	{}
};

bool isPrime(int number);
bool isEven(int number);

void showVector(vector<int> vect);

bool age_compare(const Cat& left, const Cat& right) {
	return left.age < right.age;
}

bool compare(const Cat& left, const Cat& right) {
	return left.life < right.life;
}
int main() {
	// STL Algorithm
	/*int numb;*/


	vector<int> numbs{13, 18, 9, 728, 1, 3, 7, 668};

	/*cout << "Enter any number for search in vector: " << endl;*/
	/*cin >> numb;*/
	//auto result = find(numbs.begin(), numbs.end(), numb);

	///*cout << *result << endl;*/
	//if (result != numbs.end()) {
	//	cout << numb << " in this vector!" << endl;
	//}
	//else {
	//	cout << numb << " is not found!" << endl;
	//}

	/*auto result_fif = find_if(numbs.begin(), numbs.end(), isPrime);

	if (result_fif != numbs.end()) {
		cout << "On or more prime number in this vector!" << endl;
	}
	else {
		cout << "Prime numbers are not found!" << endl;
	}*/

	/*showVector(numbs);
	vector<int> new_numbs;*/
	/*copy(numbs.begin()+2, numbs.end()-2, back_inserter(new_numbs));
	showVector(new_numbs);*/

	/*copy_if(numbs.begin(), numbs.end(), back_inserter(new_numbs), isPrime);*/
	/*copy_if(numbs.begin(), numbs.end(), back_inserter(new_numbs), isEven);
	showVector(new_numbs);*/

	//int arr[]{ 13, 18, 9, 728, 1, 3, 7, 668 };

	//auto result_arr = find(arr, arr + 7, 99);
	//if (result_arr != arr + 7) {
	//	cout << " in this vector!" << endl;
	//}
	//else {
	//	cout << " is not found!" << endl;
	//}

	/*cout << *(max_element(numbs.begin(), numbs.end())) << endl;
	cout << *(min_element(numbs.begin(), numbs.end())) << endl;*/

	vector<Cat> cats{
		Cat{"Kuroneco",150, 8},
		Cat{"Alexander from Macedonia", 18, 4},
		Cat{"Gaius Julius Caesar", 55, 0},
		Cat{"Vasilius", 8, 4},
		Cat{"Strelka", 9, 9},
		Cat{"Arsenius",19 , 1},
		Cat{"Pussy in boots", 15, 1},
		Cat{"Simba", 5, 7},
		Cat{"Barbie", 39, 0},
		Cat{"Ken",37 , 0},
		Cat{"Chuck", 83, INT32_MAX}
	};


	/*auto max_cat = max_element(cats.begin(), cats.end(), age_compare);

	cout << (*max_cat).name << endl;*/

	sort(cats.begin(), cats.end(), compare);

	for (auto cat: cats)
	{
		cout << "Name: " << cat.name << endl;
		cout << "Age: " << cat.age << endl;
		cout << "Life: " << cat.life << endl;
		cout << endl;
	}
}

bool isPrime(int number) {
	if (number == 1) return false;
	for (size_t i = 2; i <= number / 2; i++)
	{
		if (number % i == 0) return false;
	}
	return true;
}

bool isEven(int number) {
	return number % 2 == 0;
}

void showVector(vector<int> vect) {
	for (int item : vect)
	{
		cout << item << ' ';
	}
	cout << '\n';
}