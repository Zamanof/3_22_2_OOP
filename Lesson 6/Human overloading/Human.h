#pragma once
#include<iostream>
using namespace std;
class Human
{
	char name[20];
	char lastname[20];
	int age;

public:
	Human(const char name[],
	const char lastname[],
	int age)
	{
		strcpy_s(this->name, name);
		strcpy_s(this->lastname, lastname);
		this->age = age;
	}
	friend bool operator==(const Human& left, const Human& right) {
		return left.age == right.age;
	}

	friend bool operator!=(const Human& left, const Human& right) {
		return left.age != right.age;
	}

	friend bool operator>(const Human& left, const Human& right) {
		return left.age> right.age;
	}
	friend bool operator>=(const Human& left, const Human& right) {
		return left.age >= right.age;
	}
	friend bool operator<(const Human& left, const Human& right) {
		return left.age < right.age;
	}
	friend bool operator<=(const Human& left, const Human& right) {
		return left.age <= right.age;
	}

	friend ostream& operator<<(ostream& output, const Human& Human) {
		output	<<"Name: " << Human.name 
				<<" Lastname: " <<Human.lastname 
				<< " (" << Human.age << ")";
		return output;
	}
	friend istream& operator>>(istream& input, Human& Human) {
		input >> Human.name>> Human.lastname>>Human.age;
		return input;
	}
};

