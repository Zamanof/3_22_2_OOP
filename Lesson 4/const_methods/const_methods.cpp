#include<iostream>

using namespace std;

class Date {
public:
	int year;
	int month;
	int day;
	Date(int year, int month, int day) 
		: year{ year }, month{ month }, day{day} {};
	Date(const Date& date)
		: year{ date.year }, month{ date.month }, day{ date.day } {}

	void showYear(const int year) const {
		this->day = 4;
		cout << year;
	}
	void showYear(const int year){
		this->day = 4;
		cout << year;
	}
};


int main() {
	const Date today( 31, 5, 2023 );

	today.showYear(2512);

	Date otherDay(today);
	cout << otherDay.year << endl;
	cout << otherDay.month << endl;
	cout << otherDay.day << endl;
	otherDay.showYear(231);
	
}