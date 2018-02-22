//============================================================================
// Name        : Address.h
// Author      : David Taitingfong
// Description : Defines the necessary functions and instance variables for Address class
//============================================================================

#ifndef ADDRESS_H_
#define ADDRESS_H_

#include <iostream>
using namespace std;

class Address
{
public:
	Address(string hNum1, string sName1, string apt, string city1, string state1, string postal1);
	Address(string hNum2, string sName2, string city2, string state2, string postal2);
	string getHouseNum() const;
	string getStreetName() const;
	string getAptNum() const;
	string getCity() const;
	string getState() const;
	string getPostalCode() const;
	void displayAddress() const;

private:
	string houseNum;
	string streetName;
	string aptNum;
	string city;
	string state;
	string postalCode;
};

#endif /* ADDRESS_H_ */
