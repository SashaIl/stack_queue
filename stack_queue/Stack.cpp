#include "Stack.h"


Stack::~Stack() {
	delete[] stack_ptr;
}

void Stack::push(char* value) {
	if (current + strlen(value) >= max_size - 1) {
		std::cout << "eror";
		exit(NULL);
	}
	
	strcat(stack_ptr, value);
	current += strlen(value);
}

void Stack::pop(int len) {
	if (current <= 0) {
		std::cout << "eror";
		exit(NULL);
	}
	current -= len;
}

bool Stack::is_empty() {
	return current <= 0;
}

void Stack::remove_stack() {
	delete[] stack_ptr;
	stack_ptr = nullptr;
}

int Stack::get_currentSize() {
	return current;
}

void Stack::display() const {
	for (int i = 0; i < current; i++) {
		std::cout << stack_ptr[i];
	}
	std::cout << "\n\n";
}



