//============================================================================
// Name        : Date.h
// Author      : david
// Date        : Apr 16, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#ifndef SRC_DATE_H_
#define SRC_DATE_H_

#include <iostream>
#include <string>
using namespace std;

class Date
{
	public:
		Date();
		Date(int m, int d, int y);
		~Date();
		int get_month() const;
		int get_day() const;
		int get_year() const;
		void set_month(int m), set_day(int d), set_year(int y);
		void display();
	private:
		int month;
		int day;
		int year;
};

#endif /* SRC_DATE_H_ */
