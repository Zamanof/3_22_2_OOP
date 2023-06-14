#include<iostream>
#include<format>

using namespace std;
/*
	Base class -> Derived class
	Parent class -> Child class
	Superclass -> Subclass

*/

// Base class
//class Vehicle {
//	// fields
//	// Engine
//	// Wheels
//
//	// view info ()
//	// view fuel ()
//	// refuel()
//	// start ()
//};

// Derived class
//class Truck : public Vehicle {
//	
//	// 
//};

// Derived class
//class Bus : public Vehicle {
//	
//
//};

// Derived class
//class Tractor : public Vehicle {
//	
//	// 
//};

class Person
{
protected:
	string firstName;
	string lastName;
	int age;
public:
	Person(string firstName, string lastName, int age) :
		firstName(firstName),
		lastName(lastName),
		age(age)
	{
		cout << "Person parametrized constructor" << endl;
	}

	Person() {
		cout << "Person default constructor" << endl;
	}

	string getInfo() const {
		string result = format("FirstName: {};\nLastName: {};\nAge: {};\n", firstName, lastName, age);
		return result;
	}

	string getGreetings(string msgText = "") const {
		string result = "I am " + firstName;
		if (!msgText.empty()) {
			result += ". I say: ";
			result += msgText;
		}
		else {
			result += ". I say nothing.";
		}
		return result;
	}
	~Person()
	{
		cout << "Person destructor" << endl;
	}
};

class Student : public Person {
private:
	string faculty;
	int score;
public:
	Student(int score, string faculty = "Development") :
		faculty(faculty),
		score(score)
	{
		cout << "Student parametrized constructor" << endl;
	}

	Student(string firstName, string lastName, int age, int score, string faculty = "Development") :
		Person(firstName, lastName, age),
		faculty(faculty),
		score(score)
	{
		cout << "Student parametrized constructor" << endl;
	}
	bool isSuccessful() const {
		cout << "Hi. I'm " << firstName << " " << lastName << endl;
		if (score >= 7) {
			cout << "I'm successful student. WOWOWOWOWOW" << endl;
			return true;
		}
		cout << "Bextinizi bir daha sinayin" << endl;
		return false;
	}
	~Student()
	{
		cout << "Student destructor" << endl;
	}
};


int main() {
	/*Person person = Person("Nadir", "Zamanov", 42);
	cout << person.getInfo() << endl;
	cout << person.getGreetings("Salam. Atilla ne for, a while!");

	Student student1(8);
	student1.isSuccessful();*/
	/*Student student(8);*/

	Student student3("Nadir", "Zamanov", 42, 12);


}