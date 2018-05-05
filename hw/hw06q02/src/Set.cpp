//============================================================================
// Name        : Set.cpp
// Author      : david
// Date        : May 4, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#include "Set.h"
#include <iostream>

using namespace std;

/**
 * Default constructor
 */
Set::Set()
{
	elements = new int;
	size = 0;
}

/**
 * Copy constructor
 *
 * @param right - Set being copied
 */
Set::Set(const Set& right)
{
	elements = new int[right.size];

	elements = right.elements;
	size = right.size;
}

/**
 * Destructor
 */
Set::~Set()
{
	delete[] elements;
	elements = NULL;
}

/**
 * Adds an integer to the Set
 *
 * @param n - Integer being added
 */
void Set::add(int n)
{
	if (this->size == 0)
	{
		// Array is empty
		elements = new int[1];
		elements[0] = n;
		size = 1;
	}
	else
	{
		if ( !this->contains(n) )
		{
			int new_size = size + 1;
			int* new_eles = new int[new_size];

			for (int i = 0; i < size + 1; ++i)
			{
				if (i == size) new_eles[i] = n;
				else new_eles[i] = elements[i];
			}

//			delete[] elements;
//			elements = NULL;
//			*elements = *new_eles;

			elements = new_eles;
			size = new_size;
		}

	}
}

/**
 * Checks if the Set contains a given integer
 *
 * @param n - Integer being searched for
 * @return - 1 if true, 0 if false
 */
bool Set::contains(int n) const
{
	bool found = false;
	int i = 0;

	while (i < size && !found)
	{
		if (elements[i] == n)
			found = true;
		i += 1;
	}

	return found;
}

/**
 * Gets the size of the Set
 *
 * @return - Set size as an integer
 */
int Set::get_size() const
{
	return size;
}

int* Set::get_elements() const
{
	return elements;
}

/**
 * SHALLOW COPY, i.e., references should stick
 */
Set& Set::operator=(const Set& right)
{
	if (this != &right)
	{
		elements = new int(*right.elements);
		size = right.size;
	}

	return *this;
}

/**
 * Custom ostream
 */
ostream& operator<<(ostream& out, const Set& value)
{
	int* eles = value.get_elements();

	out << "(";

	for (int i = 0; i < value.get_size(); i++)
	{
		out << eles[i];
		if (i != value.get_size() - 1)
		{
			out << ", ";
		}
	}

	out << ")";

	return out;
}

