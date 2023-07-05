#include<iostream>

using namespace std;

void foo() {
	try
	{
		throw 13;
	}
	catch (int ex)
	{
		cout << "Exception catched in func!" << endl;
		throw ex;
	}
	
}

int main() {
	/*int a = 5;
	int b = 2;*/
	/*if (b != 0) {
		cout << a / (float)b << endl;
	}
	else {
		cout << "Can not divide by zero" << endl;
	}*/

	// try catch throw
	// exception

	//try
	//{
	//	cout << "Before exception" << endl;
	//	/*throw 101;*/
	//	int a = 5;
	//	int b = 0;
	//	if (b == 0) throw b;
	//	cout << a / b << endl;
	//	cout << "After exception" << endl;
	//}
	//catch (int ex)
	//{
	//	cout << "Exception catched!" << endl;
	//}

	//try
	//{
	//	int key = 0;
	//	cin >> key;

	//	if (key == 1) {
	//		throw 404;
	//	}
	//	else if (key == 2) {
	//		throw 1.5;
	//	}
	//	else if (key == 3) {
	//		throw "Alleluah";
	//	}
	//	else {
	//		throw true;
	//	}
	//}
	//catch (int ex)
	//{
	//	cout << ex <<" Atilla not found!" << endl;
	//}
	//catch (double ex)
	//{
	//	cout << "Double exception catched!" << endl;
	//}
	//catch (const char* ex) {
	//	cout<<"Char* exception catched!" << endl;
	//}
	//catch (...) {
	//	cout << "Other exception catched!" << endl;
	//}
	
	try {
		try
		{
			foo();
		}
		catch (int ex )
		{
			cout << "Exception catched in main in try in try" << endl;
			throw ex;
		}
	}
	catch(int ex) {
		cout << "Exception catched in main" << endl;
	}
	cout << "End of code" << endl;
}