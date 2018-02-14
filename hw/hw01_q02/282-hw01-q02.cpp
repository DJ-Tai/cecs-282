//============================================================================
// Name        : 282-hw01-q02.cpp
// Author      : David Taitingfong
// Description : Solution for Homework 1, question 2
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	// Sets of Roman Numerals
	string thousands[] = {"", "M", "MM", "MMM"};
	string hundreds[]  = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
	string tens[]      = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
	string ones[]      = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

	int num; // User inputted value
	string romanNum = ""; // String to be returned to user

	cout << "FIND YOUR NUMBER IN ROMAN NUMERALS" << endl;
	cout << "----------------------------------" << endl;
	cout << "Please enter a number (0 - 3999): ";
	cin >> num;

	// Range check
	if (num > 0 && num < 4000)
	{
		romanNum += thousands[num / 1000];
		romanNum += hundreds[(num % 1000)/100];
		romanNum += tens[(num % 100) / 10];
		romanNum += ones[(num % 10)];

		cout << "Your number, " << num << ", as a Roman Numeral: " << romanNum << endl;
	}
	else
	{
		cout << "Your number is not within the specified range." << endl;
	}

	return 0;
}
// fin

