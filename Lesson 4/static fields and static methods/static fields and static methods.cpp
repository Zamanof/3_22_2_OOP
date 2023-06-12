#include<iostream>

using namespace std;

class House {
	static int count;
public:
	bool hasDoor;
	bool hasWindow;
	bool hasRoof;
	House()
		: hasDoor{ false }, hasWindow{ false },
		hasRoof{ false }
	{
		count++;
	}
	
	void foo() {
		getCount();
	}
	void bar() {
		foo();
	}
	static int getCount() {
		return count;
	}

};

int House::count{ 0 };

int main() {
	//for (size_t i = 0; i < 50; i++)
	//{
	//	House house;
	//}

	House house1;
	///*cout << House::count << endl;*/
	cout << house1.getCount() << endl;
	/*cout << House::getCount() << endl;*/

}