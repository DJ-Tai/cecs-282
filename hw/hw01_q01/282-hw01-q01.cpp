//============================================================================
// Name        : 282-hw01-q01.cpp
// Author      : David Taitingfong
// Description : Solution for Homework 1, question 1
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int time1 = 0;
	int time2 = 0;
	int hours = 0;
	int mins = 0;

	cout << "Please enter the first time: ";
	cin >> time1;

	cout << "Please enter the second time: ";
	cin >> time2;

	// Since we are reading military time we can find the hours by taking
	// the first two digits, and the minutes by taking the last two digits.
	hours = time2 / 100 - time1 / 100;
	mins = abs(time2 % 100 - time1 % 100);

	// Check for PM to AM
	if (hours < 0)
	{
		hours += 24;
	}

	// Grammar check for plural hours and minutes
	if (hours == 1)
	{
		if (mins == 1)
			cout << hours << " hour " << mins << " minute" << endl;
		else
			cout << hours << " hour " << mins << " minutes" << endl;
	}
	else
	{
		if (mins == 1)
			cout << hours << " hours " << mins << " minute" << endl;
		else
			cout << hours << " hours " << mins << " minutes" << endl;
	}

	return 0;
}
