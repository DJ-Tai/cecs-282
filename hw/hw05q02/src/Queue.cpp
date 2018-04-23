//============================================================================
// Name        : Queue.cpp
// Author      : david
// Date        : Apr 16, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#include "Queue.h"
#include <cassert>

Node::Node(string s)
{
	this->data = s;
	this->next = NULL;
}

Queue::Queue()
{
	this->first = NULL;
	this->last = NULL;
	this->num_in_q = 0;
}

Queue::~Queue()
{
	while (this->first != NULL)
	{
		Node* del = first;
		first = first->next;
		delete (del);
	}

	cout << "Queue has been deleted" << endl;
}

void Queue::push(string ele)
{
	Node* add = new Node(ele);
	if (this->first == NULL)
	{
		first = add;
		last = add;
		add->next = NULL;
	}
	else
	{
		last->next = add;
		last = add;
		last->next = NULL;
	}

	this->num_in_q += 1;
}

void Queue::pop()
{
	if (first != NULL)
	{
		Node* pop = first;
		first = first->next;
		delete (pop);

		this->num_in_q -= 1;
	}
	else
	{
		cout << "Queue is empty" << endl;
	}
}

int Queue::size()
{
	return this->num_in_q;
}

string Queue::front()
{
	assert(first != NULL);
	return first->data;
}

string Queue::back()
{
	assert(last != NULL);
	return last->data;
}

