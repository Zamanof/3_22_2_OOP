#include<iostream>
#include<typeinfo>

using namespace std;

class Animal {
public:
	string name;
	virtual void Sound() {
		cout << name << " Some sound" << endl;
	}
};

class Dog : public Animal {
public:
	int age;
	void Sound() override {
		cout << name << " Gaw gaw" << endl;
	}
	void fooDog() {
		cout << "Dog foo" << endl;
	}
};

class Cat : public Animal {
public:
	float price;
	virtual void Sound() {
		cout << name << " Meow meow" << endl;
	}
	void fooCat() {
		cout << "Cat foo" << endl;
	}
};


class CheshireCat : public Cat {
public:
	void Sound() override {
		cout << name << " Smile" << endl;
	}
	void fooCheshireCat() {
		cout << "Cheshire Cat foo" << endl;
	}
};


void someFunc(Animal* animal) {
	animal->Sound();

	Cat* cat = dynamic_cast<Cat*> (animal);
	if (cat != nullptr) {
		cat->fooCat();
	}
	Dog* dog = dynamic_cast<Dog*> (animal);
	if (dog != nullptr) {
		dog->fooDog();
	}
	CheshireCat* che = dynamic_cast<CheshireCat*> (animal);
	if (che != nullptr) {
		che->fooCheshireCat();
	}

}

void someFuncTypeId(Animal* animal) {
	animal->Sound();
	const type_info& type = typeid(*animal);
	if (type == typeid(Cat)) {
		((Cat*)(animal))->fooCat();
	}
	if (type == typeid(Dog)) {
		static_cast<Dog*>(animal)->fooDog();
	}
	if (type == typeid(CheshireCat)) {
		static_cast<CheshireCat*>(animal)->fooCheshireCat();
	}
}

void someFuncRef(Animal& animal) {
	animal.Sound();
	try {
		Cat& cat = dynamic_cast<Cat&> (animal);
		cat.fooCat();
	}
	catch (bad_cast cast) {
		cout << "Invalid cast" << endl;
	}


}

int main() {
	// dynamic_cast<new_type>(expression) - ��� ������������ ��������������
	Cat cat;
	Dog dog;
	CheshireCat cheCat;
	Animal animal;
	/*someFunc(&cat);
	someFunc(&dog);
	someFunc(&cheCat);*/
	/*someFunc(&animal);*/
	/*someFuncRef(dog);*/

	someFuncTypeId(&cat);
	someFuncTypeId(&cheCat);
	someFuncTypeId(&dog);
}