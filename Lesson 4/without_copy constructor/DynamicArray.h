class DynamicArray
{
private:
	int* arr;
	int size;
public:
	DynamicArray(int size);

	DynamicArray();

	DynamicArray(const DynamicArray& other);

	int getElement(int index) { return arr[index]; }
	void setElement(int index, int value) { arr[index] = value; }

	void show();
	void randomize();

	~DynamicArray();

};

