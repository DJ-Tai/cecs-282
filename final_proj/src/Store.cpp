//============================================================================
// Name        : Store.cpp
// Author      : David Taitingfong
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
Store::Store(string n, string a, string pn, string fn)
{
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

void Store::print_receipt()
{
	Receipt* store_receipt = this->new_purchase;
	cout << "\n" << this->get_name() << "\n";
	cout << "\n";

	cout << setw(20) << left << "NAME";
	cout << setw(5) << right << "QTY";
	cout << setw(8) << right << "PRICE";
	cout << "\n";
	cout << setfill('-') << setw(34) << "-" << "\n" << setfill(' ');
	for (unsigned int i = 0; i < store_receipt->items.size(); i++)
	{
		cout << setw(20) << left << store_receipt->items.at(i)->get_name();
		cout << setw(5) << right << store_receipt->items.at(i)->get_qty();
		cout << setw(8) << right << store_receipt->items.at(i)->get_price();
		cout << "\n";
	}
}

Receipt* Store::access_receipt()
{
	return this->new_purchase;
}
