#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <stdio.h>
class Stack
{

	char* stack_ptr;
	const int max_size;
	int current;
public:
	Stack(int size = 201) : max_size{size} {
		stack_ptr = new char[size];
		stack_ptr[0] = '\0';
		current = 0;
	}
	~Stack();

	char operator[](int index) {
		return stack_ptr[index];
	}
	int get_currentSize();
	void push(char*);
	void pop(int);
	bool is_empty();
	void remove_stack();
	void display() const;
};

