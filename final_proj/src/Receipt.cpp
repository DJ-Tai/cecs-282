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
 *
 * NOTE: Items and Store get deleted off Stack
 */
Receipt::~Receipt()
{
	// Delete Date reference
	Date* del_date;
	del_date = this->purchased;
	delete(del_date);

	this->purchased = NULL;
	this->store = NULL;

	cout << "deleting receipt" << "\n";
}

/**
 * Sets the Date on the Receipt
 *
 * @param current - Date being set on Receipt
 */
void Receipt::set_date(Date current)
{
	Date* date = &current;

	this->purchased = date;
}

/**
 * Adds an item to the Receipt
 *
 * @param new_item - Item being added to the Receipt
 */
void Receipt::add_item(Item new_item)
{
	Item* adding;
	bool found = false;

	for (unsigned int i = 0; i < this->items.size(); i++)
	{
		adding = this->items.at(i);

		if (adding->get_name() == new_item.get_name())
		{
			int new_qty = adding->get_qty() + new_item.get_qty();
			adding->set_qty(new_qty);
			found = true;
		}

		if (found)	// Break out of for-loop
		{
			i = this->items.size();
		}
	}

	// Add the item if it wasn't on the Receipt
	if (!found)
	{
		items.push_back(&new_item);
	}

}
