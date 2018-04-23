//============================================================================
// Name        : TestQueue.cpp
// Author      : David Taitingfong
// Date        : Apr 19, 2018
//============================================================================

#include "Queue.h"

int main()
{
	Queue* queue = new Queue();

	queue->push("first");
	cout << "Size: " << queue->size() << endl << queue->front() << endl << endl;

	queue->push("second");
	cout << "Size: " << queue->size() << endl << queue->front() << endl;
	cout << queue->back() << endl << endl;

	queue->push("third");
	cout << "Size: " << queue->size() << endl << queue->front() << endl;
	cout << queue->back() << endl << endl;

	cout << "Removing first" << endl;
	queue->pop();
	cout << "Size: " << queue->size() << endl << "front: " << queue->front() << endl << endl;

	delete(queue);

	return 0;
}

