//============================================================================
// Name        : Circle.h
// Author      : David Taitingfong
// Date        : Apr 27, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#ifndef SRC_CIRCLE_H_
#define SRC_CIRCLE_H_

#include <iostream>
#include <vector>
using namespace std;

class Circle
{
	public:
		Circle();
		Circle(double v_radius);
		virtual ~Circle();

		double radius() const;
		double get_area() const;

		void set_radius(double v_radius);

	private:
		double c_radius;
};

bool operator<(const Circle& left, const Circle& right);
bool operator<=(const Circle& left, const Circle& right);
bool operator==(const Circle& left, const Circle& right);
bool operator!=(const Circle& left, const Circle& right);
bool operator>(const Circle& left, const Circle& right);
bool operator>=(const Circle& left, const Circle& right);

ostream& operator<< (ostream& out, const Circle& value);

#endif /* SRC_CIRCLE_H_ */
