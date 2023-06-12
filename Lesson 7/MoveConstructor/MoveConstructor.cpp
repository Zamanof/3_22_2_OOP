#include<iostream>
#include"DynamicArray.h"

DynamicArray foo(DynamicArray arr) {

	return arr;
}


using namespace std;
int main() {
	DynamicArray d1;
	d1.randomize();
	d1.show();

	d1 = foo(d1);
	 
	/*DynamicArray d2(d1);
	d1.show();

	DynamicArray d3 = d1;
	d3.show();

	DynamicArray d4;
	d4 = d1;
	d4.show();*/
}