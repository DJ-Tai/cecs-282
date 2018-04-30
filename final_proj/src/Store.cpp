//============================================================================
// Name        : Store.cpp
// Author      : David Taitingfong
// Date        : Apr 16, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#include "Store.h"
#include "Date.h"

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
