#include <iostream>
#include "stdio.h"
#include "Stack.h"
using namespace std;

int main()
{

	Stack stack;
	char* text{ new char[21] {"Hello world"} };
	cout << "push: ";
	stack.push(text);
	stack.push((char*)"!");
	stack.display();
	cout << "pop: ";
	stack.pop(1);
	stack.display();
	cout << "\ncurrent size: " << stack.get_currentSize() << endl;
	cout << "\nis stack empty? " << (stack.is_empty() ? "yes" : "no") << endl;
	cout << "\nlast element: " << stack[stack.get_currentSize() - 1] << endl;

	delete[] text;
}
