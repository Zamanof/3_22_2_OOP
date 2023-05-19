#include"Taecher.h"


int Teacher::getAge() {
	return age;
}
void Teacher::setAge(int value) {
	if (value > 0 && value < 150) {
		age = value;
	}
}

void Teacher::info() {

	cout << "FirstName: " << name << endl;
	cout << "LastName: " << surname << endl;
	cout << "Age: " << age << endl;
}