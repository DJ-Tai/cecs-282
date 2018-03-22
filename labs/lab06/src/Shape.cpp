//============================================================================
// Name        : Shape.cpp
// Author      : David Taitingfong
// Date        : Mar 17, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#include "Shape.h"


/**
 * Default constructor
 */
Shape::Shape()
{
	color = "none";
	filled = false;
}

/**
 * Custom constructor
 *
 * @param new_color - color of shape
 * @param is_filled - whether the shape is filled or not
 */
Shape::Shape(std::string new_color, bool is_filled)
{
	color = new_color;
	filled = is_filled;
}

/**
 * Gets the color of the shape
 *
 * @return - The color of the shape
 */
std::string Shape::getColor()
{
	return this->color;
}

/**
 * Tells whether the shape is filled with a color or not
 *
 * @return - True, if the shape is filled with a color
 */
bool Shape::isFilled()
{
	return this->filled;
}

void Shape::setColor(std::string clr)
{
	this->color = clr;
}

void Shape::setFilled(bool fill)
{
	this->filled = fill;
}
