//============================================================================
// Name        : Store.cpp
// Author      : David Taitingfong
//				 Evan Pascual
// Date        : Apr 16, 2018
// Version     : 1.0
// Copyright   : 
// Description :
//============================================================================

#include "Store.h"
#include "Date.h"

#include <iomanip>

/**
 * Default constuctor
 */
Store::Store()
{
	this->state_tax = 8.0;
	this->name = "";
	this->address = "";
	this->phone_num = "";
	this->fax_num = "";
	this->new_purchase = NULL;
}

/**
 * Custom constructor
 *
 * @param n - Store name
 * @param a - Store address
 * @param pn - Store phone number
 * @param fn - Store fax number
 */
Store::Store(double st, string n, string a, string pn, string fn)
{
	this->state_tax = st;
	this->name = n;
	this->address = a;
	this->phone_num = pn;
	this->fax_num = fn;
	this->new_purchase = NULL;
}

/**
 * Destructor
 */
Store::~Store()
{
	cout << "deleting store" << "\n";
}

string Store::get_name() const
{
	return this->name;
}

string Store::get_address() const
{
	return this->address;
}

string Store::get_phone() const
{
	return this->phone_num;
}

string Store::get_fax() const
{
	return this->fax_num;
}

/**
 * Starts a new purchase. Overrides the current active purchase if there is one.
 */
void Store::start_purchase()
{
	Receipt* new_receipt;

	if (this->new_purchase != NULL)
	{
		// Delete current receipt when starting a new purchase
		new_receipt = this->new_purchase;
		delete(new_receipt);
	}

	new_receipt = new Receipt();
	new_receipt->store = this;
	new_receipt->purchased = new Date(4, 29, 2018);

	this->new_purchase = new_receipt;
}

/**
 * Prints the Receipt for the current purchase
 */
void Store::print_receipt()
{
	Receipt* store_receipt = this->new_purchase;
	cout << "\n" << this->get_name() << "\n";
	cout << "\n";

	// Receipt headers
	cout << setw(30) << left << "ITEM";
	cout << setw(5) << right << "QTY";
	cout << setw(10) << right << "PRICE";
	cout << "\n";
	cout << setfill('-') << setw(45) << "-" << "\n" << setfill(' ');

	// List items out
	for (unsigned int i = 0; i < store_receipt->items.size(); i++)
	{
		int item_count = store_receipt->items.at(i)->get_qty();
		double single_price = 0.0;
		double qty_price = 0.0;

		// Item name
		cout << setw(30) << left << store_receipt->items.at(i)->get_name();

		// Item quantity
		cout << setw(5) << right << item_count;

		// Item price
		single_price = store_receipt->items.at(i)->get_price();
		qty_price = item_count * single_price;
		cout << setw(10) << right << qty_price;
		if (item_count > 1)
		{
			cout << "\n" << setw(30) << "@ " << single_price << " ea";
		}

		cout << "\n";
	}
}

Receipt* Store::access_receipt()
{
	return this->new_purchase;
}
