//============================================================================
// Name        : Account.h
// Author      : david
// Date        : Apr 6, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#ifndef SRC_ACCOUNT_H_
#define SRC_ACCOUNT_H_

#include <iostream>
using namespace std;

class Account
{
private:
	// Instance variables
	double balance;
	double interest;
	void daily_interest();

public:
	// Constructor(s) & Destructor(s)
	Account();
	virtual ~Account();

	// Member functions
	virtual double getBalance() const;
	void deposit(double dAmt);
	void withdraw(double wAmt);
	void accrue_interest();

};

#endif /* SRC_ACCOUNT_H_ */
