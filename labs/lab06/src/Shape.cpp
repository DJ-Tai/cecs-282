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
 * Destructor
 */
Shape::~Shape()
{
	std::cout<<"Deleting shape\n";
}

/**
 * Gets the color of the shape
 *
 * @return - The color of the shape
 */
std::string Shape::getColor() const
{
	return this->color;
}

/**
 * Tells whether the shape is filled with a color or not
 *
 * @return - True if the shape is filled with a color
 */
std::string Shape::isFilled()
{
	if (this->filled) return "True";
	return "False";
}

/**
 * Gets the Shape's perimeter
 *
 * @return - 0 (perimeter defined in subclasses)
 */
double Shape::getPerimeter() const
{
	std::cout << "Perimeter is 0" << std::endl;
	return 0;
}

/**
 * Gets the Shape's area
 *
 * @return - 0 (area definition defined in subclasses)
 */
double Shape::getArea() const
{
	std::cout << "Area is 0" << std::endl;
	return 0;
}

/**
 * Sets the color of the Shape
 *
 * @param clr - Color to be set
 */
void Shape::setColor(std::string clr)
{
	this->color = clr;
}

/**
 * Change if the Shape is filled or not
 *
 * @param fill - True or false
 */
void Shape::setFilled(bool fill)
{
	this->filled = fill;
}
