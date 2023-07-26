#include<iostream>
#include<time.h>
#include<list>
#include<vector>
#include<algorithm>


using namespace std;

bool isEven(int number) {
	return !(number % 2);
}

bool isOdd(int number) {
	return number % 2;
}

bool isPrime(int number) {
	if (number == 1) return false;
	for (size_t i = 2; i <= number / 2; i++)
	{
		if (number % i == 0) return false;
	}
	return true;
}

class Cat {
private:
	string name;
	int life;
public:
	Cat(string name, int life=9):name(name), life(life) {}
	bool operator()(const Cat& cat) {
		return cat.life <= 0;
	}

	void killCat() {
		this->life = 0;
	}

	string getName() {
		return name;
	}
	int getLife() {
		return life;
	}
};

bool isAlive(Cat& cat) {
	return cat.getLife() <= 0;
}

int main() {
	srand(time(NULL));
	// Predicates
	/*cout << boolalpha << isEven(6) << endl;*/
	/*list<int> lst;
	for (size_t i = 0; i < 20; i++)
	{
		lst.push_back(rand() % 100);
	}
	for (int item : lst)
	{
		cout << item << ' ';
	}
	cout << '\n';

	cout << count_if(lst.begin(), lst.end(), isEven) << endl;
	cout << count_if(lst.begin(), lst.end(), isOdd) << endl;
	cout << count_if(lst.begin(), lst.end(), isPrime) << endl;*/

	vector<Cat> cats{
		Cat{"Kuroneco", 8},
		Cat{"Alexander from Macedonia", 4},
		Cat{"Gaius Julius Caesar", 0},
		Cat{"Vasilius", 4},
		Cat{"Strelka", 9},
		Cat{"Arsenius", 1},
		Cat{"Pussy in boots", 1},
		Cat{"Simba", 7},
		Cat{"Barbie", 0},
		Cat{"Ken", 0},
		Cat{"Chuck", INT32_MAX}
	};
	/*cout << cats.front().getName() << endl;
	cout << cats[0].getName() << endl;*/

	cout << boolalpha << cats[0](cats[2]) << endl;
	cout << count_if(cats.begin(), cats.end(), cats.front()) << endl;
	cats[1].killCat();
	cout << count_if(cats.begin(), cats.end(), cats.front()) << endl;
	cout << count_if(cats.begin(), cats.end(), isAlive) << endl;
}