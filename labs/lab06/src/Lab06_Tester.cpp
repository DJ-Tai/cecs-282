//============================================================================
// Name        : Lab06_Tester.cpp
// Author      : David Taitingfong
// Date        : Mar 22, 2018
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

	vector<double> sides;
	double input;
	string color;
	string reply;
	bool done = false;
	bool filled;

	int i;

	cout << "Let's make a Triangle" << endl;

	// Grab Triangle sides
	while (!done)
	{
		i = 0;
		while (i < 3)
		{
			cout << "Side " << i + 1 << ": ";
			cin >> input;
			cin.ignore();

			if (cin.fail())
			{
				cout << "Invalid value\n";
			}
			else
			{
				sides.push_back(input);
				i += 1;
			}

			cin.clear();
			fflush(stdin);
		}

		if (sides[0] + sides[1] < sides[2] || sides[1] + sides[2] < sides[0]
				|| sides[0] + sides[2] < sides[1])
		{
			cout
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
	cout << "Color: ";
	cin >> color;

	// Check if it's filled
	done = false;
	while (!done)
	{
		cout << "Is it filled? (Y/N): ";
		cin >> reply;
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
			cout << "Invalid option" << endl;
		}

		cin.clear();
		fflush(stdin);
	}
	triangle = new Triangle(sides[0], sides[1], sides[2]);
	triangle->setColor(color);
	triangle->setFilled(filled);

	cout << "\nYour Triangle:" << endl;
	cout << "Area: " << triangle->getArea() << endl;
	cout << "Perimeter: " << triangle->getPerimeter() << endl;
	cout << "Color: " << triangle->getColor() << endl;
	cout << "Filled: " << triangle->isFilled() << endl;

	cout << "\n";
	delete triangle;	// Release memory

	return 0;
}

