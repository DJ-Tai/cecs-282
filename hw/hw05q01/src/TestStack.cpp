//============================================================================
// Name        : TestStack.cpp
// Author      : David Taitingfong
// Date        : Apr 16, 2018
//============================================================================

#include "Stack.h"

int main()
{
	Stack* test_stack = new Stack();

	test_stack->push("Bruce");
	cout << "Added " << test_stack->top() << endl;
	test_stack->push("Richard");
	cout << "Added " << test_stack->top() << endl;
	test_stack->push("Jason");
	cout << "Added " << test_stack->top() << endl;

	// Get size
	cout << "Size of Stack: " << test_stack->size() << endl << endl;

	// Pop top
	cout << "Current top: " << test_stack->top() << endl;
	test_stack->pop();
	cout << "POP." << endl << "New top: " << test_stack->top() << endl;

	return 0;
}


