#include<iostream>
#include"Taecher.h"

using namespace std;

struct Student
{
	char name[50];
	char surname[50];
	int age;

	void info() {
		cout << "FirstName: " << name << endl;
		cout << "LastName: " << surname << endl;
		cout << "Age: " << age << endl;
	}
};

void showInfo(Student student) {
	cout << "FirstName: " << student.name << endl;
	cout << "LastName: " << student.surname << endl;
	cout << "Age: " << student.age << endl;
}

int main() {
	// OOP principles
	// Encapsulation 
	// Polymorphism
	// Inheritance
	// Abstraction
	

	/*cout<<sizeof(Student)<<endl;
	cout<<sizeof(Teacher)<<endl;*/

	//Student st1;
	//strcpy_s(st1.name, "Atilla");
	//strcpy_s(st1.surname, "Ismayil");
	//st1.age = 25;
	//Teacher tch1;
	//strcpy_s(tch1.name, "Nadir");
	//strcpy_s(tch1.surname, "Zamanov");
	/*tch1.age = 42;*/

	///*showInfo(st1);*/
	//st1.info();
	//tch1.info();


	// PPP - public, protected, private

	Teacher teacher;
	/*teacher.setAge(-5);*/
	teacher.setAge(42);
	cout << teacher.getAge() << endl;


}