#include<iostream>

using namespace std;

// Static polymorphism
template <class T>
T foo(T a, T b) {
	return a + b;
}

/*
int foo(int a, int b) {
	return a + b;
}

double foo(double a, double b) {
	return a + b;
}


string foo(string a, string b) {
	return a + b;
}
*/


class Animal {
public:
	string name;
	virtual void Sound() {
		cout << name <<" Some sound" << endl;
	}
};

class Dog : public Animal {
public:
	int age;
	void Sound() override {
		cout << name << " Gaw gaw" << endl;
	}
};

class Cat : public Animal {
public:
	float price;
	void Sound() override {
		cout << name << " Meow meow" << endl;
	}
};


//void info(Dog dog) {
//	cout << "This is " << dog.name << endl;
//	dog.Sound();
//}
//
//void info(Cat cat) {
//	cout << "This is " << cat.name << endl;
//	cat.Sound();
//}

void info(Animal* animal) {
	cout << "This is " << animal->name << endl;
	animal->Sound();
}

void info(Animal& animal) {
	cout << "This is " << animal.name << endl;
	animal.Sound();
}


int main() {
	/*cout << foo(2, 5) << endl;
	cout << foo(2.3, 5.78) << endl;
	string str1 = "Atilla";
	string str2 = "String";
	cout << foo(str1, str2) << endl;*/

	Animal animal;
	animal.name = "666";
	/*animal.Sound();*/

	Dog dog;
	dog.name = "Bobik";
	/*dog.Sound();*/

	Cat cat;
	cat.name = "Murka";
	/*cat.Sound();*/

	Animal& dog1 = dog;
	Animal& cat1 = cat;
	Animal* cat2 = new Cat();
	cat2->name = "Alexander";
	Animal* dog2 = new Dog();
	dog2->name = "Innokentiy";

	/*dog1.Sound();
	cat1.Sound();
	cat2->Sound();
	dog2->Sound();*/

	//info(&cat);
	//info(&dog);

	info(cat);
	
	

}