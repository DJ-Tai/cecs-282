/*
 * LoanTester.cpp
 *
 *  Created on: Feb 9, 2018
 *      Author: David Taitingfong
 */
#include <iostream>
#include <iomanip>
#include "Loan.h"
using namespace std;

/**
 * Main function for testing the Loan class
 */
int main()
{
	Loan loan1; // Default loan
	Loan loan2(1.75, 4, 10000); // Loan with specified values

	cout << "Annual interest rate of Loan 1: " << loan1.getAnnualInterestRate() << endl;
	cout << "Number of years of Loan 1: " << loan1.getNumberOfYears() << endl;
	cout << "Loan amount of Loan 1: " << loan1.getLoanAmount() << endl;
	cout << endl;
	cout << "Annual interest rate of Loan 2: " << loan2.getAnnualInterestRate() << endl;
	cout << "Number of years of Loan 2: " << loan2.getNumberOfYears() << endl;
	cout << "Loan amount of Loan 2: " << loan2.getLoanAmount() << endl;

	loan2.setAnnualInterestRate(1.95);
	cout << "Loan 2 new rate: " << loan2.getAnnualInterestRate() << endl;
	loan2.setNumberOfYears(6);
	cout << "Loan 2 new number of years: " << loan2.getNumberOfYears() << endl;
	loan2.setLoanAmount(11050);
	cout << "Loan 2 new amount: " << loan2.getLoanAmount() << endl;

	cout << fixed << setprecision(2) << "Loan 2 monthly payment: " << loan2.getMonthlyPayment() << endl;
	cout << fixed << setprecision(2) << "Loan 2 total payment: " << loan2.getTotalPayment() << endl;

	return 0;
}



