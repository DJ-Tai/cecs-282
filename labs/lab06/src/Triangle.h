//============================================================================
// Name        : Triangle.h
// Author      : David Taitingfong
// Date        : Mar 17, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#ifndef SRC_TRIANGLE_H_
#define SRC_TRIANGLE_H_

#include "Shape.h"

#include <iostream>

class Triangle : public Shape
{
private:
	// Instance variables
	double side1, side2, side3;

public:
	// Constructors & Destructor
	Triangle();
	Triangle(double side01, double side02, double side03);
	virtual ~Triangle();

	// Getters
	double getPerimeter() const;
	double getArea() const;
	double getSide1() const;
	double getSide2() const;
	double getSide3() const;
};

#endif /* SRC_TRIANGLE_H_ */
