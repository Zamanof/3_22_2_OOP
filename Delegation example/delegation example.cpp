#include<iostream>

using namespace std;

class Date {
public:
	int year;
	double month;
	float day;

	Date()
		:Date( 2023, 6 , 2 )
	{

	}

	Date(int year, double month, float day)
		:year{ year }, month{ month }, day{ day }
	{

	}
	Date(int year, float day): Date(year, 0, day) {

	}
};


int main() {
	
	Date date1(2023, 0, 25);
	Date date2(2023, 0, 25);
	date1 = date2;
}