#include<iostream>

using namespace std;

class Printer {
public:
	string name;
	virtual void print(string text) {
		cout << "__________" << name << "__________" << endl;
		cout << text << endl;
	}
};


class LaserPrinter: public Printer {
public:
	string name;
	void print(string text) override {
		cout << "__________" << name << "__________" << endl;
		cout << text <<" Laser printed" << endl;
	}
};

class InkPrinter : public Printer {
public:
	string name;
	void print(string text) override {
		cout << "__________" << name << "__________" << endl;
		cout << text <<" Ink printed"<< endl;
	}
};

class ThermoPrinter : public Printer {
public:
	string name;
	void print(string text) override {
		cout << "__________" << name << "__________" << endl;
		cout << text << " Thermo printed" << endl;
	}
};


void print(Printer& printer, const string text) {
	printer.print(text);
}

int main() {

	ThermoPrinter tPrinter;
	tPrinter.name = "Canon - MF1908";
	LaserPrinter lPrinter;
	lPrinter.name = "HP";
	InkPrinter iPrinter;
	iPrinter.name = "Canon - MP0987";

	print(tPrinter, "Atilla");
	print(lPrinter, "Atilla");
	print(iPrinter, "Atilla");

}