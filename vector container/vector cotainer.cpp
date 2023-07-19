#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

void show(const vector<int>& vec) {
	for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << ' ';
	}
	cout << '\n';
}

int main() {
	vector<int> vec;
	/*cout <<"Vector size\t: " << vec.size() << endl;
	cout <<"Vector capacity\t: " << vec.capacity() << endl << endl;*/
	vec.push_back(25);
	//cout << "Vector size\t: " << vec.size() << endl;
	//cout << "Vector capacity\t: " << vec.capacity() << endl << endl;

	for (size_t i = 0; i < 40; i++)
	{
		vec.push_back(i);
		/*cout << "Vector size\t: " << vec.size() << endl;
		cout << "Vector capacity\t: " << vec.capacity() << endl << endl;*/
	}
	/*show(vec);

	vec.clear();
	cout << "Vector size\t: " << vec.size() << endl;
	cout << "Vector capacity\t: " << vec.capacity() << endl << endl;
	cout << vec[1] << endl;*/

	/*vec.empty();*/
	/*vector < vector<int>> vectorRoot;
	vector<int> vectorChild{2, 3};
	vectorRoot.push_back(vectorChild);
	cout << vectorRoot[0][1] << endl;

	vectorRoot.shrink_to_fit();*/

	/*vector<int>::reverse_iterator r_itera = vec.rbegin();

	for (size_t i = 0; i < vec.size(); i++)
	{
		cout << *(r_itera++) << endl;
	}*/

	vector<int>::iterator itera = vec.begin();
	vec.insert(itera + 5, 15);

	for ( itera = vec.begin(); itera < vec.end(); itera++)
	{
		cout << *itera << ' ';
	}
	cout << '\n';

}