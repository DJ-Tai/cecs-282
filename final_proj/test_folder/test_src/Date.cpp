//============================================================================
// Name        : Date.cpp
// Author      : david
// Date        : Apr 16, 2018
// Version     :
// Copyright   : 
// Description : Dates start at index 1
//============================================================================

#include "Date.h"
#include <cassert>

/**
 * Default constructor. Sets month to January, day to 1, and year to 1
 */
Date::Date()
{
	month = day = year = 1;
}

/**
 * Custom constructor
 *
 * @param m - Month as an integer
 * @param d - Day as an integer
 * @param y - Year as an integer
 */
Date::Date(int m, int d, int y)
{
	// Months start at 1, e.g., January = 1
	static int length[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	assert(m > 1 && m < 13);
	assert(d < length[m] && d > 0);
	assert(y > 1900);

	month = m;
	day = d;
	year = y;
}

/**
 * Destructor
 */
Date::~Date()
{
	// Empty
}

/**
 * Getter for Month
 */
int Date::get_month() const
{
	return this->month;
}

/**
 * Getter for Day
 */
int Date::get_day() const
{
	return this->day;
}

/**
 * Getter for Year
 */
int Date::get_year() const
{
	return this->year;
}

/**
 * @param m - Month to set, received as a January
 */
void Date::set_month(int m)
{
	if (m < 1 || m > 12)
	{
		cout << "Unable to set month to " << m << endl;
		cout << "Defaulting month to January" << endl;
		this->month = 1;
	}
	else
	{
		this->month = m;
	}
}

void Date::set_day(int d)
{
	static int length[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (d < 1 || d > length[this->month])
	{
		cout << "Unable to set day to " << d << endl;
		cout << "Defaulting day to the 1st" << endl;
		this->day = 1;
	}
	else
	{
		this->day = d;
	}
}

void Date::set_year(int y)
{
	if (y < 1900)
	{
		cout << "These printers probably weren't around in " << y << endl;
		cout << "Defaulting year to 1900" << endl;
		this->year = 1900;
	}
	else
	{
		this->year = y;
	}
}

/**
 * Displays the Date in Day/Month/Year format, e.g., 10 April 2018
 */
void Date::display()
{
	static char* name[] = {
			"",
			"January",
			"February",
			"March",
			"April",
			"May",
			"June",
			"July",
			"August",
			"September",
			"October",
			"November",
			"December"
	};

	cout << this->day << " " << name[this->month] << " " << this->year;
}

