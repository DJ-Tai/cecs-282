//============================================================================
// Name        : Stack.cpp
// Author      : David Taitingfong
// Date        : Apr 16, 2018
//============================================================================

#include "Stack.h"

#include <cassert>

/**
 * Default Node constructor
 *
 * @param s - String data
 */
Node::Node(string s)
{
	this->data = s;
	this->below = NULL;
}

/**
 * Default Stack constructor
 */
Stack::Stack()
{
	this->first = NULL;
	this->num_in_stack = 0;
}

/**
 * Destructor
 */
Stack::~Stack()
{
	Node* current = first;

	while (current != NULL)
	{
		Node* next = current->below;
		delete current;
		current = next;
	}

	first = NULL;
}

/**
 * Pushes an element to the Stack
 *
 * @param ele - Element to be added to the Stack
 */
void Stack::push(string ele)
{
	Node* new_node = new Node(ele);

	if (first == NULL) // Empty stack
	{
		new_node->below = NULL;
		first = new_node;
	}
	else
	{
		new_node->below = first;
		first = new_node;
	}

	this->num_in_stack += 1;
}

/**
 * Pops, and deletes, the top most element in the Stack
 */
void Stack::pop()
{
	if (first == NULL)
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		Node* rem = first;
		first = first->below;
		this->num_in_stack -= 1;
		delete(rem);
	}
}

/**
 * Gets the size of the Stack
 *
 * @return - Stack size as an integer
 */
int Stack::size()
{
	return this->num_in_stack;
}

/**
 * Gets the top most element of the Stack
 *
 * @return - Top Node
 */
string Stack::top()
{
	Node* top_node = first;
	return top_node->data;
}


