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
 * Displays the receipt
 */
void Receipt::display()
{
	// TODO
}

