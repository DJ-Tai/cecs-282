//============================================================================
// Name        : Stack.h
// Author      : David Taitingfong
// Date        : Apr 16, 2018
//============================================================================

#ifndef SRC_STACK_H_
#define SRC_STACK_H_

#include <string>
#include <iostream>

using namespace std;

class Stack;

class Node
{
	public:
		Node(string s);
	private:
		string data;
		Node* below;
		friend class Stack;
};

class Stack
{
	public:
		Stack();
		~Stack();
		void push(string ele);
		void pop();
		int size();
		string top();
	private:
		Node* first;
		int num_in_stack;
};

#endif /* SRC_STACK_H_ */
