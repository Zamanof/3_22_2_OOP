#include<iostream>
#include<fstream>
#include<iomanip>
#include<windows.h>

using namespace std;

void RusificationMessage(const char* message) {
	char rusMessage[256];
	CharToOemA(message, rusMessage);
	cout << rusMessage;
}

int RussianMenu() {
	RusificationMessage("\nВведите 1 для добавления в файл\n");
	RusificationMessage("\nВведите 2 для показа из файла\n");
	RusificationMessage("\nВведите 3 для выхода\n");
	int choice;
	cin >> choice;
	return choice;
}

class Man {
private:
	char* name;
	char* surname;
	int age;
public:
	Man(char* name, char* surname, int age);
	Man();
	~Man();

	void Put();
	void Show();
	void SaveToFile();
	static void ShowfromFile();
};

Man::Man() {
	name = nullptr;
	surname = nullptr;
	age = 0;
}

Man::Man(char* name, char* surname, int age) {
	this->name = new char[strlen(name) + 1];
	if (!this->name) {
		RusificationMessage("Ошибка при выделении памяти !!!");
		exit(1);
	}
	strcpy_s(this->name, strlen(name), name);

	this->surname = new char[strlen(surname) + 1];
	if (!this->surname) {
		RusificationMessage("Ошибка при выделении памяти !!!");
		exit(1);
	}
	strcpy_s(this->surname, strlen(surname), surname);

	this->age = age;
}

Man::~Man() {
	delete[] name;
	delete[] surname;
}

void Man::Put() {
	char tmp[1024];
	RusificationMessage("\nВведите имя:\n");
	cin >> tmp;

	if (name) delete[] name;

	name = new char[strlen(tmp) + 1];

	if (!name) {
		RusificationMessage("Ошибка при выделении памяти !!!");
		exit(1);
	}
	strcpy_s(this->name, strlen(name) + 1, tmp);

	RusificationMessage("\nВведите фамилию:\n");
	cin >> tmp;

	if (surname) delete[] surname;

	surname = new char[strlen(tmp) + 1];

	if (!surname) {
		RusificationMessage("Ошибка при выделении памяти !!!");
		exit(1);
	}
	strcpy_s(this->surname, strlen(surname) + 1, tmp);

	RusificationMessage("Введите возраст");
	cin >> this->age;
}

void Man::Show() {
	RusificationMessage(" \nИмя\n");
	cout << name << '\n';
	RusificationMessage(" \nФамилия\n");
	cout << surname << '\n';
	RusificationMessage(" \nВозраст\n");
	cout << age << '\n';
}

void Man::SaveToFile() {
	int size;
	fstream file("men.txt", ios::out | ios::binary | ios::app);
	if (!file) {
		RusificationMessage("Файл не открылся для записи !!!");
		exit(1);
	}

	file.write((char*)&age, sizeof(int));

	size = strlen(name);
	file.write((char*)&size, sizeof(int));
	file.write((char*)name, size * sizeof(char));

	size = strlen(surname);
	file.write((char*)&size, sizeof(int));
	file.write((char*)surname, size * sizeof(char));

	file.close();
}

void Man::ShowfromFile() {
	fstream file("men.txt", ios::in | ios::binary);
	if (!file) {
		RusificationMessage("Файл не открылся для чтения!!!");
		exit(1);
	}
	char* name, * surname;
	int age;
	int tmp;
	while (file.read((char*)&age, sizeof(int))) {
		RusificationMessage("\nИмя:\n");
		file.read((char*)&tmp, sizeof(int));
		name = new char[tmp + 1];
		if (!name) {
			RusificationMessage("Ошибка при выделении памяти !!!");
			exit(1);
		}
		file.read((char*)name, tmp * sizeof(char));
		name[tmp] = '\0';
		cout << name;

		RusificationMessage("\nФамилия:\n");
		file.read((char*)&tmp, sizeof(int));
		surname = new char[tmp + 1];
		if (!surname) {
			RusificationMessage("Ошибка при выделении памяти !!!");
			exit(1);
		}
		file.read((char*)surname, tmp * sizeof(char));
		surname[tmp] = '\0';
		cout << surname;

		RusificationMessage("\nВозраст:\n");
		cout << age << '\n';
		delete[] name;
		delete[] surname;
	}
}
void main() {
	Man* man;
	do
	{
		switch (RussianMenu()) {
		case 1:
			man = new Man;
			man->Put();
			man->SaveToFile();
			break;
		case 2:
			Man::ShowfromFile();
			break;
		case 3:
			RusificationMessage("\nГудбай Ленин\n");
			return;
		default:
			RusificationMessage("\nНеверный ввод\n");
		}
	} while (true);
}