//============================================================================
// Name        : 282_Lab01.cpp
// Author      : David Taitingfong
// Version     :
// Copyright   : Your copyright notice
// Description : Lab 1
//============================================================================

#include <iostream>
#include <iomanip> // Formatting
#include <cmath> // Math functions
#include <math.h>
using namespace std;

int main()
{
	double x1, x2, x3, y1, y2, y3; // Coordinates of the three corner points
	double sideA, sideB, sideC; // sqrt( pow((x2 - x1), 2) + pow((y2 - y1), 2) )
	double angleA, angleB, angleC; // Use Law of cosines
	double perimeter;
	double area; // Herom's Formula , sqrt( S (S-side12)(S - side23)(S - side31) ), S = (1/2)perimeter
	double s;

	cout << "Enter three points (space-separated): ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	// Calculate the lengths of each side
	sideA = sqrt( pow((x3-x2),2) + pow((y3-y2), 2) );
	sideB = sqrt( pow((x1-x3),2) + pow((y1-y3), 2) );
	sideC = sqrt( pow((x2-x1),2) + pow((y2-y1), 2) );
	cout << "The three side are " << fixed << setprecision(3) << sideC << " " << sideA << " " << sideB << endl;

	// Calculate the angles inside the triangle
	angleA = acos( (pow(sideB, 2) + pow(sideC, 2) - pow(sideA, 2)) / (2 * sideB * sideC) ) * 180.0 / M_PI;
	angleB = acos( (pow(sideC, 2) + pow(sideA, 2) - pow(sideB, 2)) / (2 * sideC * sideA) ) * 180.0 / M_PI;
	angleC = acos( (pow(sideA, 2) + pow(sideB, 2) - pow(sideC, 2)) / (2 * sideA * sideB) ) * 180.0 / M_PI;
	cout << "The three angles are " << setprecision(2) << angleA << " ";
	cout << setprecision(1) << angleB << " ";
	cout << setprecision(2) << angleC << endl;

	// Calculate the perimeter of the triangle
	perimeter = sideA + sideB + sideC;
	cout << "The perimeter is " << perimeter << endl;

	// Use Herom's Formula to calculate the area
	s = (perimeter / 2);
	area = sqrt(s*(s - sideC) * (s - sideA) * (s - sideB));
	cout << "The area is " << setprecision(3) << area << endl;

	return 0;
}
// fin

