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
	double side1, side2, side3;

public:
	Triangle();
	Triangle(double side01, double side02, double side03);
	double getArea();
	double getPerimeter();
	double getSide1();
	double getSide2();
	double getSide3();
};

#endif /* SRC_TRIANGLE_H_ */
