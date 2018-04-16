//============================================================================
// Name        : Lab08.cpp
// Author      : David Taitingfong
// Date        : Apr 11, 2018
//============================================================================

#include <string>
#include <iostream>
#include <cassert>

using namespace std;

// Prototype
class List;
class Iterator;

// CLASS DEFINITIONS
class Node
{
public:
	Node(string s);
private:
	string data;
	Node* previous;
	Node* next;
	friend class List;
	friend class Iterator;
};

class List
{
public:
	List();
	void push_back(string data);
	void insert(Iterator iter, string s);
	Iterator erase(Iterator iter);
	Iterator begin();
	Iterator end();
private:
	Node* first;
	friend class Iterator;
};

class Iterator
{
public:
	Iterator();
	string get() const;
	void next();
	void previous();
	bool equals(Iterator b) const;
private:
	Node* position;
	List* container;
	friend class List;
};

/**
 * Default Node constructor
 *
 * @param s - String data
 */
Node::Node(string s)
{
	this->data = s;
	this->previous = NULL;
	this->next = NULL;
}

/**
 * Default list constructor
 */
List::List()
{
	this->first = NULL;
//	first->next = NULL;
//	first->previous = NULL;
}

/**
 * Adds Node to end of the List
 *
 * @param s - String data
 */
void List::push_back(string data)
{
	Node* new_node = new Node(data);

	if (first == NULL)	// List is empty
	{
		first = new_node;			// Set new_node to first
		first->next = first;		// Next points to itself
		first->previous = first;
	}
	else
	{
		new_node->previous = first->previous;	// last <- new_node
		first->previous->next = new_node;		// last -> new_node
		new_node->next = first;					// new_node -> first
		first->previous = new_node;
	}
}

/**
 * Inserts a Node in the List
 *
 * @param iter - Iterator at a given position
 * @param s - String data
 */
void List::insert(Iterator iter, string s)
{
	if (iter.position == NULL)
	{
		push_back(s);
		return;
	}

	Node* after = iter.position;
	Node* before = after->previous;
	Node* new_node = new Node(s);
	new_node->previous = before;
	new_node->next = after;
	after->previous = new_node;

	if (before == NULL) // Insert at beginning
	{
		first = new_node;
	}
	else
	{
		before->next = new_node;
	}
}

/**
 * Removes Node from the List
 *
 * @param iter - Iterator at the location to remove Node
 * @return - Iterator object
 */
Iterator List::erase(Iterator iter)
{
	assert(iter.position != NULL);
	Node* remove = iter.position;
	Node* before = remove->previous;
	Node* after = remove->next;

	if (remove == first)
	{
		first = after;
	}
	else
	{
		before->next = after;
	}

	if (remove == first->previous)
	{
		first->previous = before;
	}
	else
	{
		after->previous = before;
	}

	delete remove;
	Iterator r;
	r.position = after;	// Move iterator forward one
	r.container = this;
	return r;
}

/**
 * Moves the Iterator to the beginning of the List
 *
 * @return - Iterator object
 */
Iterator List::begin()
{
	Iterator iter;
	iter.position = first;
	iter.container = this;
	return iter;
}

/**
 * Moves the Iterator to the "end" of the List (circular list = no real end)
 */
Iterator List::end()
{
	Iterator iter;
	iter.position = first->previous;
//	iter.position = NULL;
	iter.container = this;
	return iter;
}

/**
 * Default Iterator constructor
 */
Iterator::Iterator()
{
	this->position = NULL;
	this->container = NULL;
}

/**
 * Get the Node's data as a String
 *
 * @return - Data of the Node at the Iterator's position
 */
string Iterator::get() const
{
	assert(this->position != NULL);
	return this->position->data;
}

/**
 * Moves the Iterator to the next position
 */
void Iterator::next()
{
	assert(position != NULL);
	position = position->next;
}

/**
 * Moves the Iterator to the previous position
 */
void Iterator::previous()
{
	assert(this->position != container->first);

	if (position == NULL)	// End was reached
	{
		position = container->first->previous;
	}
	else
	{
		position = position->previous;
	}
}

/**
 * Compares Iterator positions
 *
 * @return - True if this Iterator equals the compared Iterator
 */
bool Iterator::equals(Iterator b) const
{
	return position == b.position;
}

// MAIN FUNCTION
int main()
{
	List* staff = new List();
	Iterator pos;


	staff->push_back("Bruce");
	staff->push_back("Richard");
	staff->push_back("Jason");
	staff->push_back("Damien");

	cout << "Original list" << endl;
	for (pos = staff->begin(); !pos.equals(staff->end()); pos.next())
	{
		cout << pos.get() << "\n";
	}
	cout << pos.get() << endl << endl;	// Get value AT the end

	// Add a value in 4th place
	pos = staff->begin();
	pos.next();
	pos.next();
	pos.next();
	staff->insert(pos, "Tim");

	cout << "List after insert" << endl;
	for (pos = staff->begin(); !pos.equals(staff->end()); pos.next())
	{
		cout << pos.get() << "\n";
	}
	cout << pos.get() << endl << endl;

	// Remove the value in second place
	pos = staff->begin();
	pos.next();
	staff->erase(pos);

	cout << "List after remove" << endl;
	for (pos = staff->begin(); !pos.equals(staff->end()); pos.next())
	{
		cout << pos.get() << "\n";
	}
	cout << pos.get() << endl << endl;

	return 0;
}
