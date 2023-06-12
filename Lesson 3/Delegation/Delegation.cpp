#include<iostream>


using namespace std;
#pragma region without delegation
// Class without constructor delegation 
//class Person
//{
//	char* name;
//	uint16_t age;
//	uint32_t socialId;
//
//public:
//	Person() : name{ nullptr }, age{ 0 }, socialId{ 0 } {
//		cout << "Person constructed" << endl;
//	}
//
//	Person(const char* name)
//		:name{ new char[strlen(name) + 1] }
//		, age{ 0 }, socialId{ 0 } {
//		strcpy_s(this->name, strlen(name)+1, name);
//		cout << "Person constructed" << endl;
//	}
//
//	Person(const char* name, uint16_t age)
//		:name{ new char[strlen(name) + 1] }
//		, age{ age }, socialId{ 0 } {
//		strcpy_s(this->name, strlen(name)+1, name);
//		cout << "Person constructed" << endl;
//	}
//
//	Person(const char* name, uint16_t age, uint32_t socialId)
//		:name{ new char[strlen(name) + 1] }
//		, age{ age }, socialId{ socialId } {
//		strcpy_s(this->name, strlen(name)+1, name);
//		cout << "Person constructed" << endl;
//	}
//
//	~Person()
//	{
//		delete[] name;
//		cout << "Person deconstructed" << endl;
//	}
//
//};
#pragma endregion

#pragma region with delegation
class Person
{
	char* name;
	uint16_t age;
	uint32_t socialId;

public:
	Person(const char* name, uint16_t age, uint32_t socialId)
		: name{ name ? new char[strlen(name) + 1] : nullptr }
		, age{ age }, 
		socialId{ socialId } {
		if (name) {
			strcpy_s(this->name, strlen(name) + 1, name);
		}
		cout << "Person constructed " << endl;
	}

	Person() : Person{ nullptr, 0, 0 } {
		cout << "Person constructed (Person{ nullptr, 0, 0 })" << endl;
	}

	Person(const char* name): Person{name, 0, 0}
	{
		cout << "Person constructed (Person{name, 0, 0})" << endl;
	}


	Person(const char* name, uint16_t age): Person{name, age, 0}
	{
		cout << "Person constructed (Person{name, age, 0})" << endl;
	}


	~Person()
	{
		delete[] name;
		cout << "Person deconstructed" << endl;
	}

};
#pragma endregion


int main() {
	Person person{ "Nadir"};
}