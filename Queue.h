#include <stdexcept>
#include "Node.h"

template<typename T>
class Queue {
private:
	Node<T> *top;
	Node<T> *tail;

public:
	Queue() {
		top = nullptr;
		tail = nullptr;
	}

	~Queue() {
		while (!isEmpty()) {
			pop();
		}
	}

	void push(T value) {
		Node<T> *newNode = new Node<T>(value);
		if (isEmpty()) {
			top = newNode;
			tail = newNode;
		} else {
			tail->setNext(newNode);
			tail = newNode;
		}
	}

	T pop() {
		if (isEmpty()) {
			throw std::runtime_error("La cola esta vacia. No se puede hacer pop.");
		}
		Node<T> *aux = top;
		T value = aux->getValue();
		top = top->getNext();
		tail = (top == nullptr) ? nullptr : tail;
		delete aux;
		return value;
	}

	T peek() const {
		if (isEmpty()) {
			throw std::runtime_error("La cola esta vacia. No se puede hacer peek.");
		}
		return top->getValue();
	}

	bool isEmpty() const {
		return top == nullptr;
	}
};

