#include"DynamicArray.h"
#include<iostream>

DynamicArray::DynamicArray(int size)
	:arr{ new int[size] {} }, size{size}
{}

DynamicArray::~DynamicArray()
{
	delete[] arr;
}

DynamicArray::DynamicArray() :DynamicArray(5) {}

DynamicArray::DynamicArray(const DynamicArray& other)
	:arr(other.arr), size{ other.size } {}

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