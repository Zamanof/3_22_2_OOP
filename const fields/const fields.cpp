#include<iostream>

using namespace std;

class House {
	
public:
	bool hasDoor;
	bool hasWindow;
	bool hasRoof;
	const int fundament;
	House()
		// initialize list
		: hasDoor{ false }, hasWindow{ false },
		hasRoof{ false }, fundament{0}
	{

	}
	
	House(int fundament) 
		: fundament{fundament} 
	{}
};


int main() {

	/*House house1{true, true, false};
	cout << house1.fundament << endl;*/

	House house1(25);
	cout << house1.fundament << endl;

	House house2(393);
	cout << house2.fundament << endl;
}