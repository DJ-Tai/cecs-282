//============================================================================
// Name        : Queue.h
// Author      : david
// Date        : Apr 16, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#ifndef SRC_QUEUE_H_
#define SRC_QUEUE_H_

#include <string>
#include <iostream>

using namespace std;

class Queue;

class Node
{
	public:
		Node(string s);
	private:
		string data;
		Node* next;
		friend class Queue;
};

class Queue
{
	public:
		Queue();
		~Queue();
		void push(string ele);
		void pop();
		int size();
		string front();
		string back();
	private:
		Node* first;
		Node* last;
		int num_in_q;

};

#endif /* SRC_QUEUE_H_ */
