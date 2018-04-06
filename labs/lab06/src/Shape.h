//============================================================================
// Name        : Shape.h
// Author      : david
// Date        : Mar 17, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#ifndef SRC_SHAPE_H_
#define SRC_SHAPE_H_

#include <iostream>

class Shape
{
private:
	// Instance variables
	std::string color;
	bool filled;

public:
	// Constructors & Destructor
	Shape();
	Shape(std::string new_color, bool is_filled);
	virtual ~Shape();

	// Getters
	std::string getColor() const;
	std::string isFilled();
	virtual double getPerimeter() const;
	virtual double getArea() const;

	// Setters
	void setColor(std::string clr);
	void setFilled(bool fill);
};

#endif /* SRC_SHAPE_H_ */
