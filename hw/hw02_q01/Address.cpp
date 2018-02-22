//============================================================================
// Name        : Address.cpp
// Author      : David Taitingfong
// Description : Details the Address class
//============================================================================

#include "Address.h"
#include <iostream>
using namespace std;

/**
 * Custom constructor - has apartment number
 */
Address::Address(string house, string street, string apt, string city,
		string state, string postal)
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
Address::Address(string house, string street, string city, string state,
		string postal)
{
	this->houseNum = house;
	this->streetName = street;
	this->aptNum = "";
	this->city = city;
	this->state = state;
	this->postalCode = postal;
}


// ----- MEMBER FUNCTIONS ----- //

/**
 * Gets the house number of the Address object
 *
 * @return Address' house number
 */
string Address::getHouseNum(void) const
{
	return houseNum;
}

/**
 * Gets the street number of the Address object
 *
 * @return Address' street number
 */
string Address::getStreetName(void) const
{
	return streetName;
}

/**
 * Gets the apartment number of the Address object, if applicable
 *
 * @return Address' apartment number
 */
string Address::getAptNum(void) const
{
	return aptNum;
}

/**
 * Gets the city of the Address object
 *
 * @return Address' city
 */
string Address::getCity(void) const
{
	return city;
}

/**
 * Gets the state of the Address object
 *
 * @return The Address' state
 */
string Address::getState(void) const
{
	return state;
}

/**
 * Gets the postal code of the Address object
 *
 * @return The Address' postal code
 */
string Address::getPostalCode(void) const
{
	return postalCode;
}

/**
 * Displays the Address
 */
void Address::displayAddress() const
{
	cout << houseNum << " " << streetName << " ";
	if (aptNum != "")
	{
		cout << aptNum;
	}
	cout << endl;
	cout << city << ", " << state << " " << postalCode << endl;
}

