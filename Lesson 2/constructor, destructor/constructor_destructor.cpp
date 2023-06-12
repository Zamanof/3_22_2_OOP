#include<iostream>


using namespace std;
class Car
{
private:
	char model[20];
	char marka[20];
	short year;

public:
	int* liter;

	// constructor without parameters
	Car();
	// constructor with parameters
	Car(const char* model, const char* marka, int year);
	Car(const char* model, int year);

	void showInfo();
	const char* getModel();
	const char* getMarka();
	int getYear();

	void setModel(const char* model);
	void setMarka(const char* marka);
	void setYear(int year);
	
	// destructror 
	~Car();
};
void Car::showInfo() {
	cout << "Marka:\t" << this->marka << endl;
	cout << "Model:\t" << this->model << endl;
	cout << "Year:\t" << this->year << endl;
	cout << "----------------------------"<< endl;
}

Car::Car() {
	this->liter = new int[100000];
	cout << "constructor without parameters" << endl;
	setMarka("empty");
	setModel("empty");
	setYear(2023);
}
// constructor with parameters
Car::Car(const char* model, const char* marka, int year) {
	cout << "constructor with parameters (Model, Marka, Year)" << endl;
	setMarka(marka);
	setModel(model);
	setYear(year);
}

Car::Car(const char* model, int year) {
	cout << "constructor with parameters (Model, Year)" << endl;
	setMarka("");
	setModel(model);
	setYear(year);
}

const char* Car::getModel() {
	return this->model;
}
const char* Car::getMarka() {
	return this->marka;
}
int	Car::getYear() {
	return this->year;
}

void Car::setModel(const char* model) {
	strcpy_s(this->model, 20, model);
}
void Car::setMarka(const char* marka) {
	strcpy_s(this->marka, 20, marka);
}
void Car::setYear(int year) {
	if (year > 1885 && year <= 2023) {
		this->year = year;
	}
	else
	{
		this->year = 2023;
	}
}

Car::~Car()
{
	cout << "Destructor " << this->model << endl;
	delete[] liter;
}

void foo(Car car) {
	car.setModel("Allillyah");
	Car c;
}

int main() {
	//Car car1("BMW", "5", 2020);
	///*car1.setMarka("BMW");
	//car1.setModel("5");
	//car1.setYear(2022);*/
	///*car1.showInfo();*/
	///*Car car2;*/
	//
	//Car* car = new Car("Zaparojets", "303", 1973);
	//delete car;
	///*car2.showInfo();*/
	//Car car3("C++", 1983);
	///*
	//foo(car3);*/

	Car* carcar;
	while (true) {
		carcar = new Car();
		delete carcar;
	}
	

}