#include"DynamicArray.h"
#include<iostream>

DynamicArray::DynamicArray(int size)
	:arr{ new int[size] {} }, size{ size }
{}

DynamicArray::~DynamicArray()
{
	delete[] arr;
}

DynamicArray::DynamicArray() :DynamicArray(5) {}

DynamicArray::DynamicArray(const DynamicArray& other)
	:arr{new int[other.size]}, size{other.size} {
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = other.arr[i];
	}
	std::cout << "Dynamic Array copy constructed" << std::endl;
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
