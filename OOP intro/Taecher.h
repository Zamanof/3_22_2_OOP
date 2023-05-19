#pragma once
#include<iostream>
using namespace std;
class Teacher
{
private:
	int age{};
public:
	// Fields
	char name[50];
	char surname[50];


	// class methods - member functions
	void info();

	// Getter - accessor
	int getAge();
	
	// Setter - mutator
	void setAge(int value);

};
