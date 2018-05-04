//============================================================================
// Name        : Circle.cpp
// Author      : David Taitingfong
// Date        : Apr 27, 2018
// Version     : 1.0
// Copyright   : N/A
// Description : Circle class
//============================================================================

#include "Circle.h"
#include <string>
#include <cmath>

/**
 * Default constructor
 */
Circle::Circle()
{
	this->c_radius = 1.0;
}

/**
 * Custom constructor
 *
 * @param v_radius - Radius to be set
 */
Circle::Circle(double v_radius)
{
	this->c_radius = v_radius;
}

/**
 * Destructor
 */
Circle::~Circle()
{
}


/**
 * Sets a new radius for the Circle
 */
void Circle::set_radius(double v_radius)
{
	if (v_radius < 0.0)
	{
		cout << "Can't give a negative radius - setting to 1" << "\n";
		this->c_radius = 1.0;
	}
	else
	{
		this->c_radius = v_radius;
	}
}

/**
 * Get the Circle's radius
 *
 * @return - Radius as a double
 */
double Circle::radius() const
{
	return this->c_radius;
}

/**
 * Gets the area of the circle
 *
 * @return - Area as a double
 */
double Circle::get_area() const
{
	const double pi = 3.14159265358;
	double area = pi * (this->c_radius * this->c_radius);
	return area;
}




// --------------------- NON-MEMBER FUNCTIONS ------------------ //
/**
 * Overload less-than operator
 */
bool operator< (const Circle& left, const Circle& right)
{
	return left.radius() < right.radius();
}

/**
 * Overload the less-than-or-equal operator
 */
bool operator<= (const Circle& left, const Circle& right)
{
	return left.radius() <= right.radius();
}

/**
 * Overload the equals operator
 */
bool operator== (const Circle& left, const Circle& right)
{
	return left.radius() == right.radius();
}

/**
 * Overload the not-equal operator
 */
bool operator!= (const Circle& left, const Circle& right)
{
	return left.radius() != right.radius();
}

/**
 * Overload the greater-than operator
 */
bool operator> (const Circle& left, const Circle& right)
{
	return left.radius() > right.radius();
}

/**
 * Overload the greater-than-or-equal operator
 */
bool operator>= (const Circle& left, const Circle& right)
{
	return left.radius() >= right.radius();
}

ostream& operator<< (ostream& out, const Circle& value)
{
    out << value.radius();

    return out;
}
