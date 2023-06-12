#include<iostream>
#include"Human.h"

using namespace std;

int main() {
	Human human1( "Atilla", "Ismail", 14);
	Human human2( "Nadir", "Zamanov", 14);

	cout <<boolalpha<< (human1 <= human2) << endl;
}