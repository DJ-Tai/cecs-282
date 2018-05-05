//============================================================================
// Name        : SetTester.cpp
// Author      : david
// Date        : May 4, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#include "Set.h"
using namespace std;

int main()
{
	Set set_a;

	cout << "A: " << set_a << "\n";

	set_a.add(5);
	set_a.add(10);
	set_a.add(15);

	Set set_b = set_a;

	cout << "A: " << set_a << "\n";
	cout << "B: " << set_b << "\n";

	set_a.add(20);
	cout << "A: " << set_a << "\n";
	cout << "B: " << set_b << "\n";

	Set* set_d = new Set();
	set_d->add(200);

	Set* set_e = set_d;

	cout << "D: " << set_d->get_elements()[0] << "\n";
	cout << "E: " << set_e->get_elements()[0] << "\n";

	set_d->add(300);
	cout << "D: " << set_d->get_elements()[1] << "\n";
	cout << "E: " << set_e->get_elements()[1] << "\n";

	return 0;
}

