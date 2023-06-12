#include"DynamicArray.h"
#include<iostream>

DynamicArray::DynamicArray(int size)
	:arr{ new int[size] {} }, size{ size }
{}

DynamicArray::~DynamicArray()
{
	delete[] arr;
}

DynamicArray::DynamicArray() :DynamicArray(5) {
	std::cout << "Dynamic Array default constructor" << std::endl;
}

// Copy constructor
DynamicArray::DynamicArray(const DynamicArray& other)
	:arr{ new int[other.size] }, size{ other.size } {
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = other.arr[i];
	}
	std::cout << "Dynamic Array copy constructed" << std::endl;
}

// Move constructor
DynamicArray::DynamicArray(DynamicArray&& other)
	:arr{ other.arr }, size{other.size}
{
	other.arr = nullptr;
	other.size = 0;
	std::cout << "Dynamic Array move constructor" << std::endl;
}


DynamicArray& DynamicArray::operator=(const DynamicArray& other) {
	if (!(this == &other)) {
		if (size != other.size) {
			delete[] arr;
			arr = new int[other.size];
		}
		size = other.size;

		int* dest{ arr };
		int* src{ other.arr };

		int* const end{ arr + size };

		while (dest < end) {
			*dest++ = *src++;
		}
		
	}
	std::cout << "Dynamic Array copy assign opreator" << std::endl;
	return *this;
}

DynamicArray& DynamicArray::operator=(DynamicArray&& other) {
	if (!(this == &other)) {
		delete arr;
		arr = other.arr;
		size = other.size;
		other.arr = nullptr;
		other.size = 0;
	}
	std::cout << "Dynamic Array move assign opreator" << std::endl;
	return *this;
}

void DynamicArray::show() {
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << '\n';

}
void DynamicArray::randomize() {
	srand(time(NULL));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 90 + 10;
	}
}
