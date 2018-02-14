//============================================================================
// Name        : 282_Lab02.cpp
// Author      : David Taitingfong
// Description : Lab 2 (Control Flow & Function)
//============================================================================

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/**
 * Returns true if the integer is a Prime number; false otherwise
 */
bool isPrime(int n)
{
	if (n < 2) { return false; } // Prime numbers start at 2
	else
	{
		for (int i = 2; i <= sqrt(n); i++) // Only need to verify values up to, and including sqrt(n)
		{
			if(n % i == 0) { return false; } // False if i|n (i divides n) with a remainder = 0
		}
	}

	return true; // Must be a prime!
}

/**
 * Main function
 */
int main()
{
	int values = 2; // Since Primes don't start past 2
	int primes = 0; // For while loop

	cout << "The first 100 prime numbers are" << endl;
	while (primes < 100)
	{
		if (isPrime(values))
		{
			// Prime found!
			primes++;

			// Ensures there are only 10 integers to a line
			if (primes % 10 == 0)
			{
				cout << setw(5) << values << endl; // If this is the 10th prime, force a new line after printing
			}
			else
			{
				cout << setw(5) << values;
			}
		}
		values++;
	}

	return 0;
}
// fin
