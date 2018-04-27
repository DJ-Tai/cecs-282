//============================================================================
// Name        : Circle.cpp
// Author      : David Taitingfong
// Date        : Apr 27, 2018
// Version     :
// Copyright   : 
// Description :
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
	cout << "deleting circle" << "\n";
}

/**
 * Gets the radius of the circle
 */
double Circle::get_radius() const
{
	return this->c_radius;
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
 * Gets the area of the circle
 */
double Circle::get_area() const
{
	const double pi = 3.14159265358;
	double area = pi * (this->c_radius * this->c_radius);
	return area;
}

