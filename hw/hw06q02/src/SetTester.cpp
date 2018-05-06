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
	Set set_c(set_a);

	cout << "A: " << set_a << "\n";
	cout << "B: " << set_b << "\n";
	cout << "C: " << set_c << "\n";

	set_a.add(20);
	set_b.add(30);
	cout << "A: " << set_a << "\n";
	cout << "B: " << set_b << "\n";
	cout << "C: " << set_c << "\n";

	Set* set_d = new Set();
	set_d->add(200);
	Set* set_e = set_d;
	cout << "D: " << set_d << "\n";
	cout << "E: " << set_e << "\n";

	set_d->add(300);
	cout << "D: " << set_d << "\n";
	cout << "E: " << set_e << "\n";

	return 0;
}

