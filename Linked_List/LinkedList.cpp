#include "LinkedList.h"

template <class T>
void LinkedList<T>::add(const T& value)
{
	Node<T>* nodePtr = new Node<T>(value);
	nodePtr->next = head;
	head = nodePtr;
}

template <class T>
void LinkedList<T>::remove()
{
	if (head != nullptr)
	{
		Node<T>* nodePtr = head;
		head = head->next;
		delete nodePtr;
	}
}

template<class T>
Node<T>* LinkedList<T>::find(const T& value) const
{
	for (Node<T>* nodePtr = head;
		nodePtr != nullptr;
		nodePtr = nodePtr->next)
	{
		if (nodePtr->value == value) {
			return nodePtr;
		}
	}
		return nullptr;
}
template<class T>
Node<T>* LinkedList<T>::addAfter(const T& value, Node<T>* afterPtr)
{
	if (afterPtr == nullptr) return nullptr;

	Node<T>* nodePtr = new Node<T>(value);
	nodePtr->next = afterPtr->next;
	afterPtr->next = nodePtr;
	return afterPtr->next;
}

template<class T>
Node<T>* LinkedList<T>::removeAfter(Node<T>* afterPtr)
{
	if (afterPtr != nullptr && afterPtr->next != nullptr)
	{
		Node<T>* nodePtr = afterPtr->next;
		afterPtr->next = afterPtr->next->next;
		delete nodePtr;
	}

	return afterPtr;
}

template<class T>
void LinkedList<T>::clear() {
	while (head != nullptr) remove();
}

template<class T>
void LinkedList<T>::doForEach(void (*func)(Node<T>* nodePtr))
{
	for (Node<T>* nodePtr = head;
		nodePtr != nullptr;
		nodePtr = nodePtr->next)
	{
		func(nodePtr);
	}
}