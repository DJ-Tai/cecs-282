/*
 * Loan.cpp
 *
 *  Created on: Feb 9, 2018
 *      Author: David Taitingfong
 */

#include "Loan.h"

/**
 * Default constructor
 */
Loan::Loan()
{
	annualInterestRate = 2.5;
	numberOfYears = 1;
	loanAmount = 1000.0;
}

/**
 * Custom constructor
 */
Loan::Loan(double rate, int years, double amount)
{
	annualInterestRate = rate;
	numberOfYears = years;
	loanAmount = amount;
}

/**
 * Retrieves the annual interest rate of the loan
 *
 * @return - annual interest rate of loan
 */
double Loan::getAnnualInterestRate() const
{
	return annualInterestRate;
}

/**
 * Retrieves the number of years applied to the loan
 *
 * @return - Number of years applied to loan
 */
int Loan::getNumberOfYears() const
{
	return numberOfYears;
}

/**
 * Retrieves the amount of the loan
 *
 * @return - Loan amount
 */
double Loan::getLoanAmount() const
{
	return loanAmount;
}

/**
 * Sets a new interest rate for the loan
 *
 * @param rate - New rate for the loan
 * @return - void
 */
void Loan::setAnnualInterestRate(double rate)
{
	annualInterestRate = rate;
}

/**
 * Sets a new length of years for the loan
 *
 * @param years - New amount of years to be applied to loan
 * @return - void
 */
void Loan::setNumberOfYears(int years)
{
	numberOfYears = years;
}

/**
 * Sets a new amount for the loan
 *
 * @param amount - New amount to be set for the loan
 * @return - void
 */
void Loan::setLoanAmount(double amount)
{
	loanAmount = amount;
}

/**
 * Calculates the monthly payment for the loan
 *
 * @return - Monthly payment for the loan
 */
double Loan::getMonthlyPayment()
{
	return (getTotalPayment() / (12 * numberOfYears));
}

/**
 * Calculates the total payment for the loan after factoring in total years
 * and annual interest rate.
 *
 * @return - Total payment of loan
 */
double Loan::getTotalPayment()
{
	double totalPayment = loanAmount;

	for (int i = 0; i < numberOfYears; i++)
	{
		totalPayment += ((annualInterestRate/100) * totalPayment);
	}

	return totalPayment;
}

