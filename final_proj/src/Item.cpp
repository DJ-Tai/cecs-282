//============================================================================
// Name        : Item.cpp
// Author      : david
// Date        : Apr 16, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#include "Item.h"

/**
 * Default constructor
 */
Item::Item()
{
	this->name = "";
	this->qty = 0;
	this->price = 0.0;
}

/**
 * Custom constructor with parameter checks
 *
 * @param n - Item name
 * @param q - Item quantity
 * @param p - Item price
 */
Item::Item(string n, int q, double p)
{
	this->name = n;

	if (q < 0) this->qty = 0;	// Prevent negative quantities
	else this->qty = q;

	if (p < 0) this->price = 0.0;	// Prevent negative prices
	else this->price = p;
}

Item::~Item()
{
	// TODO: Is setting primitives to NULL okay?
	cout << "deleting item" << "\n";
}

string Item::get_name() const
{
	return this->name;
}

int Item::get_qty() const
{
	return this->qty;
}

double Item::get_price() const
{
	return this->price;
}
