#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;


void main() {
	enum {
		CHOICE = 3,
		INPUT_FILENAME,
		INPUT_DIMENSIONS,
		INPUT_ELEMENTS,
		FILE_ERROR
	};
	char Answer;
	const int MessageCount = 8;
	int i, j;
	char Message[MessageCount][50] = {
		"1. Load data from text file\n",
		"2. Save data to text file\n",
		"3. Exit\n",
		"\nYour choice: ",
		"Enter file name: ",
		"Enter array sizes: ",
		"Enter array elements: ",
		"Cannot open file!!"
	};
	do
	{
		for (i = 0; i < 4; i++)
		{
			cout << Message[i];
		}
		cin >> Answer;
	} while (Answer < '1' || Answer > '3');

	if (Answer == '3') return;

	char FileName[80];
	int M, N;

	int num;

	cout << '\n' << Message[INPUT_FILENAME];
	cin >> FileName;

	if (Answer == '1') {
		ifstream inFile(FileName, ios::in | ios::_Nocreate);
		if (!inFile) {
			cout << Message[FILE_ERROR];
			return;
		}
		inFile >> M;
		inFile >> N;

		for (i = 0; i < M; i++)
		{
			for ( j = 0; j < N; j++)
			{
				inFile >> num;
				cout << setw(6) << num;
			}
			cout << '\n';
		}
		inFile.close();
	}
	else {
		ofstream outFile(FileName, ios::out);
		if (!outFile) {
			cout << Message[FILE_ERROR];
			return;
		}
		cout << Message[INPUT_DIMENSIONS]<<'\n';
		cout << "M: ";
		cin >> M;
		cout << "N: ";
		cin >> N;
		outFile << M << ' ' << N << '\n';
		for (i = 0; i < M; i++)
		{
			for (j = 0; j < N; j++)
			{
				cout << "Array [" << i << "][" << j << "] = ";
				cin >> num;
				outFile << num<<' ';
			}
			outFile << '\n';
		}
		outFile.close();
	}
}