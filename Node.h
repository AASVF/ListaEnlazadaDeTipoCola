template<typename T>

class Node {
private:
	T value;
	Node<T> *next;

public:
	Node(T value) {
		this->value = value;
		next = nullptr;
	}

	T getValue() const {
		return value;
	}

	Node<T>* getNext() const {
		return next;
	}

	void setNext(Node<T>* next){
		this->next = next;
	}
};
