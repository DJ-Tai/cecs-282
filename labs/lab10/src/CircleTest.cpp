//============================================================================
// Name        : CircleTest.cpp
// Author      : David Taitingfong
// Date        : Apr 27, 2018
// Version     : 1.0
// Copyright   : 
// Description :
//============================================================================

#include "Circle.h"

int main()
{
	Circle c1(5.0);
	Circle c2(10.0);
	Circle c3(2.5);
	Circle c4(20.0);
	Circle c5(5.0);

	cout << "c1: ";
	c1.print();
	cout << "c2: ";
	c2.print();
	cout << "c3: ";
	c3.print();
	cout << "c4: ";
	c4.print();
	cout << "c5: ";
	c5.print();

	cout << "c1 < c2?: " << (c1 < c2) << "\n";
	cout << "c1 <= c5?: " << (c1 <=c5) << "\n";
	cout << "c1 == c5?: " << (c1 == c5) << "\n";
	cout << "c1 != c4?: " << (c1 != c4) << "\n";
	cout << "c1 > c2?: " << (c1 > c2) << "\n";
	cout << "c4 >= c5?: " << (c4 >= c5) << "\n\n";

	return 0;
}

