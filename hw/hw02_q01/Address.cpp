/*
 * Address.cpp
 *
 *  Created on: Feb 9, 2018
 *      Author: david
 */

#include "Address.h"
#include <iostream>
using namespace std;

/**
 * Custom constructor - has apartment number
 */
Address::Address (string house, string street, string apt, string city, string state, string postal)
{
	this->houseNum = house;
	this->streetName = street;
	this->aptNum = apt;
	this->city = city;
	this->state = state;
	this->postalCode = postal;
}

/**
 * Default constructor - No apartment number
 */
Address::Address(string house, string street, string city, string state, string postal)
{
	this->houseNum = house;
	this->streetName = street;
	this->aptNum = "";
	this->city = city;
	this->state = state;
	this->postalCode = postal;
}

// Member Functions
/**
 *
 */
string Address::getHouseNum(void) const { return houseNum; }

/**
 *
 */
string Address::getStreetName(void) const { return streetName; }

/**
 *
 */
string Address::getAptNum(void) const { return aptNum; }

/**
 *
 */
string Address::getCity(void) const { return city; }

/**
 *
 */
string Address::getState(void) const { return state; }

/**
 *
 */
string Address::getPostalCode(void) const { return postalCode; }

/**
 *
 */
void Address::displayAddress() const
{
	cout << houseNum << " " << streetName << " ";
	if (aptNum != "") { cout << aptNum; }
	cout << endl;
	cout << city << ", " << state << " " << postalCode << endl;
}

