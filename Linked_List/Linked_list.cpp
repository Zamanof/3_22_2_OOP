#include<iostream>
#include"LinkedList.h"

using namespace std;

int main() {
/*
	Dynamic data structure:
		 - List (Linked, Double Linked)
		 - Stack LIFO
		 - Queues FIFO
		 - Trees
		 - Graphs
		 - Hash tables
*/

	cout << "Linked list" << endl << endl;
	LinkedList<int> list;
	list.add(2);
	list.add(5);
	list.add(15);
	list.add(25);
	list.print();
	list.remove();
	list.print();

	Node<int>* node = list.find(5);
	if (node != 0) {
		node->value = 35;
	}
	list.print();

	list.addAfter(135, node);
	list.print();
	list.clear();
	list.print();
	list.addAfter(135, node);
	list.print();
	list.clear();
	list.print();
}
