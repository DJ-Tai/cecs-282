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
using namespace std;

class Circle
{
	public:
		Circle();
		Circle(double v_radius);
		virtual ~Circle();
		double get_radius() const;
		void set_radius(double v_radius);
		double get_area() const;
		void print();

		// Relational Operator Overloads
		// (< , <= , == , != , > , >= )
		bool operator<(const Circle& right);
		bool operator<=(const Circle& right);
		bool operator==(const Circle& right);
		bool operator!=(const Circle& right);
		bool operator>(const Circle& right);
		bool operator>=(const Circle& right);

	private:
		double c_radius;
};

#endif /* SRC_CIRCLE_H_ */
