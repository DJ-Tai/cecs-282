/*
 * Loan.h
 *
 *  Created on: Feb 9, 2018
 *      Author: David Taitingfong
 */

#ifndef LOAN_H_
#define LOAN_H_

class Loan
{
private:
	double annualInterestRate;
	int numberOfYears;
	double loanAmount;

public:
	// Constructors
	Loan();
	Loan(double rate, int years, double amount);

	// Member functions
	double getAnnualInterestRate() const;
	int getNumberOfYears() const;
	double getLoanAmount() const;
	void setAnnualInterestRate(double rate);
	void setNumberOfYears(int years);
	void setLoanAmount(double amount);
	double getMonthlyPayment();
	double getTotalPayment();
};

#endif /* LOAN_H_ */
