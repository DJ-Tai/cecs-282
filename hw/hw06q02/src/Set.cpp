//============================================================================
// Name        : Set.cpp
// Author      : David Taitingfong
// Date        : May 2, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#include "Set.h"

/**
 * Default constructor
 */
Set::Set()
{
	elements = NULL;
	size = 0;
}

/**
 * Destructor
 */
Set::~Set()
{
	int* ele_ptr;

	ele_ptr = elements;
	delete(ele_ptr);
}

void Set::add(int n)
{
	// TODO: Add n to *elements
	/**
	 * if (!contains(n))
	 * 		add
	 * 		size += 1;
	 */
}

bool Set::contains(int n) const
{
	bool found = false;
	// TODO: finish
	/**
	 * while ptr < size && !found
	 * 		check for ele
	 * 		if ele == at(i)
	 * 			found = true
	 */

	return found;
}

int Set::get_size() const
{
	return size;
}

