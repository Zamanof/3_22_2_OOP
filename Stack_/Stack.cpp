#include<iostream>

using namespace std;

template <class T>
class Stack {
private:
	T* stackPtr;
	const int maxsize;
	int current;
public:
	Stack(int size = 100);
	~Stack();
	void push(const T& value);
	void pop();
	T& top();
	bool empty() const;
	int size() const;
};


int main() {
	Stack <int> stack;

	for (size_t i = 0; i < 10; i++)
	{
		stack.push(i);
	}
	cout << boolalpha<<"stack.empty() " << stack.empty() << endl;
	cout << "stack.size() " << stack.size() << endl;

	while (!stack.empty())
	{
		cout << stack.top() << endl;
		stack.pop();
	}
	cout << boolalpha << "stack.empty() " << stack.empty() << endl;
	cout << "stack.size() " << stack.size() << endl;
}

template<class T>
Stack<T>::Stack(int size): maxsize(size) {
	stackPtr = new T[maxsize];
	current = -1;
}


template<class T>
Stack<T>::~Stack() {
	delete[] stackPtr;
}

template<class T>
void Stack<T>::push(const T& value) {
	if (current >= maxsize - 1) {
		cout << "Stack is full" << endl;
		return;
	}
	stackPtr[++current] = value;
}

template<class T>
void Stack<T>::pop() {
	if (current < 0) {
		cout << "Stack is empty" << endl;
		return;
	}
	current--;
}

template<class T>
T& Stack<T>::top() {
	if (current < 0) {
		cout << "Stack is empty" << endl;
		T t;
		return t;
	}
	return stackPtr[current];
}

template<class T>
bool Stack<T>::empty() const {
	return current < 0;
}

template<class T>
int Stack<T>::size() const {
	return current + 1;
}

