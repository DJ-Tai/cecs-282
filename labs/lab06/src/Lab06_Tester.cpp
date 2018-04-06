//============================================================================
// Name        : Lab06_Tester.cpp
// Author      : David Taitingfong
// Date        : Mar 22, 2018
// Description :
//============================================================================

#include "Triangle.h"

#include <iostream>
#include <vector>

int main()
{
	//	1. Prompt user to enter:
	//		a. 3 sides
	//		b. a color
	//		c. boolean to indicate whether the triangle is filled
	//	2. Create the Triangle object
	//	3. Display the area, perimeter, color, and whether it's filled or not

	Shape* triangle = NULL;
//	Triangle* triangle = NULL;

	std::vector<double> sides;
	double input;
	std::string color;
	std::string reply;
	bool done = false;
	bool filled;

	int i;

	std::cout << "Let's make a Triangle" << std::endl;

	// Grab Triangle sides
	while (!done)
	{
		i = 0;
		while (i < 3)
		{
			std::cout << "Side " << i + 1 << ": ";
			std::cin >> input;
			std::cin.ignore();

			if (std::cin.fail())
			{
				std::cout << "Invalid value\n";
			}
			else
			{
				sides.push_back(input);
				i += 1;
			}

			std::cin.clear();
			fflush(stdin);
		}

		if (sides[0] + sides[1] < sides[2] || sides[1] + sides[2] < sides[0]
				|| sides[0] + sides[2] < sides[1])
		{
			std::cout
					<< "Those values can't make a Triangle! Try again please\n\n";
			// Clear inputs and reset i
			sides.clear();
		}
		else
		{
			done = true;
		}
	}

	// Grab color
	std::cout << "Color: ";
	std::cin >> color;

	// Check if it's filled
	done = false;
	while (!done)
	{
		std::cout << "Is it filled? (Y/N): ";
		std::cin >> reply;
		if (reply[0] == 'Y' || reply[0] == 'y')
		{
			filled = true;
			done = true;
		}
		else if (reply[0] == 'N' || reply[0] == 'n')
		{
			filled = false;
			done = true;
		}
		else
		{
			std::cout << "Invalid option" << std::endl;
		}

		std::cin.clear();
		fflush(stdin);
	}
	triangle = new Triangle(sides[0], sides[1], sides[2]);
	triangle->setColor(color);
	triangle->setFilled(filled);

	std::cout << "\nYour Triangle:" << std::endl;
	std::cout << "Area: " << triangle->getArea() << std::endl;
	std::cout << "Perimeter: " << triangle->getPerimeter() << std::endl;
	std::cout << "Color: " << triangle->getColor() << std::endl;
	std::cout << "Filled: " << triangle->isFilled() << std::endl;

	std::cout << "\n";
	delete triangle;	// Release memory

	return 0;
}

