//============================================================================
// Name        : Receipt.cpp
// Author      : David Taitingfong
//				 Eval Pascual
// Date        : Apr 16, 2018
// Version     : 1.0
// Copyright   : 
// Description :
//============================================================================

#include "Receipt.h"

/**
 * Default constructor
 */
Receipt::Receipt()
{
	store = NULL;
	purchased = NULL;
}

/**
 * Destructor
 */
Receipt::~Receipt()
{
	store = NULL;
	purchased = NULL;

	cout << "deleting receipt" << "\n";
}

/**
 * Adds an item to the Receipt
 *
 * @param new_item - Item being added to the Receipt
 */
void Receipt::add_item(Item new_item)
{
	items.push_back(&new_item);
}
