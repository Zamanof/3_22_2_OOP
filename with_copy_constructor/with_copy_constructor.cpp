#include<iostream>
#include"DynamicArray.h"

using namespace std;


int main() {
	DynamicArray array1{ 25 };
	array1.randomize();
	array1.show();

	DynamicArray array2 =  array1;
	array2.show();
}