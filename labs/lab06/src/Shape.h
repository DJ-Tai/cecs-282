//============================================================================
// Name        : Shape.h
// Author      : David Taitingfong
// Date        : Mar 17, 2018
//============================================================================

#ifndef SRC_SHAPE_H_
#define SRC_SHAPE_H_

#include <iostream>

using namespace std;

class Shape
{
private:
	// Instance variables
	string color;
	bool filled;

public:
	// Constructors & Destructor
	Shape();
	Shape(string new_color, bool is_filled);
	virtual ~Shape();

	// Getters
	string getColor() const;
	string isFilled();
	virtual double getPerimeter() const;
	virtual double getArea() const;

	// Setters
	void setColor(string clr);
	void setFilled(bool fill);
};

#endif /* SRC_SHAPE_H_ */
