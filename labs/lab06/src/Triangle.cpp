//============================================================================
// Name        : Triangle.cpp
// Author      : David Taitingfong
// Date        : Mar 17, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#include "Triangle.h"
#include <math.h>

/**
 * Default constructor
 */
Triangle::Triangle()
{
	side1 = 1.0;
	side2 = 1.0;
	side3 = 1.0;
}

/**
 * Custom constructor
 *
 * @param s1 - Side 1 of the Triangle
 * @param s2 - Side 2 of the Triangle
 * @param s3 - Side 3 of the Triangle
 */
Triangle::Triangle(double s1, double s2, double s3)
{
	side1 = s1;
	side2 = s2;
	side3 = s3;
}

/**
 * Gets the Triangle's perimeter
 *
 * @return - The Triangle's perimeter
 */
double Triangle::getPerimeter() const
{
	return (double)(this->side1 + this->side2 + this->side3);
}

/**
 * Gets the Triangle's area using Heron's formula
 *
 * @return - The Triangle's area
 */
double Triangle::getArea() const
{
	double s = (0.5) * this->getPerimeter();
	double area = s * (s - this->side1) * (s - this->side2) * (s - this->side3);
	area = sqrt(area);

	return area;
}

/**
 * Destructor
 */
Triangle::~Triangle()
{
	cout<<"Deleting triangle\n";
}

/**
 * Gets the first side of the Triangle
 *
 * @return - Side 1 of the Triangle
 */
double Triangle::getSide1() const
{
	return this->side1;
}

/**
 * Gets the second side of the Triangle
 *
 * @return - Side 2 of the Triangle
 */
double Triangle::getSide2() const
{
	return this->side2;
}

/**
 * Gets the third side of the Triangle
 *
 * @return - Side 3 of the Triangle
 */
double Triangle::getSide3() const
{
	return this->side3;
}

