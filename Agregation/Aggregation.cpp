#include<iostream>

using namespace std;
class Address
{
private:
	string city;
	string street;
	int house;
	int apartment;
public:
	Address(string city,
		string street,
		int house,
		int apartment = 0) :
		city(city),
		street(street),
		house(house),
		apartment(apartment)
	{}
	void Show() {
		cout << "City: " << city << ";" << endl;
		cout << "Street: " << street << ";" << endl;
		cout << "House: " << house << ";" << endl;
		if (apartment != 0) {
			cout << "Apatment: " << apartment << ";" << endl;
		}
		cout << endl;
	}
};

class Student {
private:
	string firstName;
	string lastName;
	int age;
	float score;
	Address& address;
public:
	Student(string firstName,
		string lastName,
		int age,
		float score,
		Address& address):
		firstName(firstName),
		lastName(lastName),
		age(age),
		score(score),
		address(address)
	{}
	void Show() {
		cout << "Hi! My name is " << firstName << " " << lastName << endl;
		cout << "I'm " << age << "years old." << endl;
		cout << "My address: ";
		address.Show();
		
	}
};

class Teacher {
private:
	string firstName;
	string lastName;
	int age;
	float salary;
	Address& address;
public:
	Teacher(string firstName,
		string lastName,
		int age,
		float salary,
		Address& address) :
		firstName(firstName),
		lastName(lastName),
		age(age),
		salary(salary),
		address(address)
	{}
	void Show() {
		cout << "Hi! My name is " << firstName << " " << lastName << endl;
		cout << "I'm " << age << "years old." << endl;
		cout << "My address: ";
		address.Show();
	
	}
};


int main() {
	// relations - ���������
	// is - ��������
	// has - ����� (��������)
	// depends on - ������� ��
	// uses - ����������
	// part-whole - �����-�����

	// ���������
	// 1. ������-����� ������ � ������ �������-������
	// 2. ������-����� ����� ������ � ������ ����� ��� ������ �������-������
	// 3. ������-����� ����� ������������ ��� �������-������
	// 4. ������-����� �� �������� ��������� �� �������-�����

	Address address("Absheron", "Saray MTK", 70, 10);
	Student student("Ayan", "Zaman", 10, 11.5, address);
	Teacher teacher("Nadir", "Zamanov", 42, 15003.50, address);
	student.Show();
	teacher.Show();


}