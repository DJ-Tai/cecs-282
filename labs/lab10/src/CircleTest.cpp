//============================================================================
// Name        : CircleTest.cpp
// Author      : David Taitingfong
// Date        : Apr 27, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#include "Circle.h"
#include <vector>

int main()
{
	vector<Circle> circles;
	Circle c1(5.0);
	Circle c2(10.0);
	circles.push_back(c2);
	circles.push_back(c1);

	cout << c1.get_radius() << "\n";
	cout << c2.get_radius() << "\n";



	return 0;
}

