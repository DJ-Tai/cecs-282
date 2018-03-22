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
	std::string color;
	bool filled;

public:
	Shape();
	Shape(std::string new_color, bool is_filled);

	std::string getColor();
	bool isFilled();
	void setColor(std::string clr);
	void setFilled(bool fill);
};

#endif /* SRC_SHAPE_H_ */
