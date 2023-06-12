#include<iostream>

using namespace std;

//class Enclosing
//{
//public:
//private:
//	class Inner {
//	public:
//	private:
//	};
//};

class Car {
private:
	string model;
	int releaseYear;
	class Engine
	{
	public:
		bool isWorked;
		int horsePower;
		int cylinders;
		Engine(int horsePower, int cylinders):
			horsePower(horsePower),
			cylinders(cylinders)
		{
			
			isWorked = false;
		}
		void start() {
			
			isWorked = true;
			cout << "Engine vnnnnnnnnnn...." << endl;
		}
	};
	Engine* engine;

public:
	Car(string model, int releaseYear, int horsePower, int cylinders):
		model(model),
		releaseYear(releaseYear)
	{
		engine = new Engine(horsePower, cylinders);
		cout << "Car bombastic, fantastic!" << endl;
	}
	void move() {
		engine->start();
		cout << "Poyexali..." << endl;
	}

	~Car()
	{
		delete engine;
	}
};



int main() {
	Car bummbleBee("Camarro", 2006, 2500, 8);
	bummbleBee.move();
}