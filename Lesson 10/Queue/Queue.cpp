#include<iostream>

using namespace std;

template<typename T>
class Queue {
private:
	T* queuePtr;
	const int maxSize;
	int first;
	int next;
	bool over;
public:
	Queue(int size = 100);
	~Queue();
	void enqueue(const T& value);
	void dequeue();
	T& front()const;
	T& back() const;
	bool empty() const;
	bool full() const;
	int size() const;

};

template<class T>
void printSize(const Queue<T>& queue) {
	cout << "queue.size() " << queue.size() << endl;
	cout << boolalpha << "queue.empty() " << queue.empty() << endl;
	cout << boolalpha << "queue.full() " << queue.full() << endl;
}

int main() {
	Queue<int> queue(10);
	for (int i = 0; i <= 5; i++)
	{
		queue.enqueue(i);
		cout << queue.back() <<" " << endl;
	}
	cout << endl;
	printSize(queue);
	for (int i = 6; i < 10; i++)
	{
		queue.enqueue(i);
		cout << queue.back() << " " << endl;
	}
	cout << endl;
	printSize(queue);
	for (int i = 0; i <= 5; i++)
	{
		cout << queue.front() << " " << endl;
		queue.dequeue();
	}
	cout << endl;
	printSize(queue);
	for (int i = 6; i < 10; i++)
	{
		cout << queue.front() << " " << endl;
		queue.dequeue();
	}

}

template<class T>
Queue<T>::Queue(int size) : maxSize(size) {
	queuePtr = new T[maxSize];
	first = 0;
	next = 0;
	over = false;
}
template<class T>
Queue<T>::~Queue() {
	delete[] queuePtr;
}
template<class T>
void Queue<T>::enqueue(const T& value) {
	if (full()) {
		cout << "Queue is full" << endl;
		return;
	}
	queuePtr[next++] = value;
	if (next == maxSize) {
		over = true;
		next = 0;
	}
}

template<class T>
void Queue<T>::dequeue() {
	if (empty()) {
		cout << "Queue is empty" << endl;
		return;
	}
	first++;
	if (first == maxSize) {
		over = true;
		first = 0;
	}
}
template<class T>
T& Queue<T>::front() const {
	if (empty()) {
		cout << "Queue is empty";
		T t;
		return t;
	}
	return queuePtr[first];
}

template<class T>
T& Queue<T>::back() const {
	if (empty()) {
		cout << "Queue is empty";
		T t;
		return t;
	}
	if (next == 0 && over) {

		return queuePtr[maxSize - 1];
	}
	return queuePtr[next - 1];
}

template<class T>
bool Queue<T>::empty() const {
	return size() == 0;
}

template<class T>
bool Queue<T>::full() const {
	return size() == maxSize;
}

template<class T>
int Queue<T>::size() const {
	if (next > first) {
		return next - first;
	}
	else if (first > next) { 
		return maxSize - (first - next); 
	}
	else if (over) { 
		return maxSize;
	}
	else { 
		return 0; 
	}
	
}