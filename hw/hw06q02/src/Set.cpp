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
}

bool Set::contains(int n) const
{
	// TODO: finish

	return true;
}

int Set::get_size() const
{
	// TODO: finish

	return 0;
}

