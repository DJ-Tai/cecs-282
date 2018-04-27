//============================================================================
// Name        : Store.cpp
// Author      : David Taitingfong
// Date        : Apr 16, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#include "Store.h"

/**
 * Default constuctor
 */
Store::Store()
{
	this->name = "";
	this->address = "";
	this->phone_num = "";
	this->fax_num = "";
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
}

/**
 * Destructor
 */
Store::~Store()
{
	cout << "Deleting store" << "\n";
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

