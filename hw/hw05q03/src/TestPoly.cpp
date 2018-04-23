//============================================================================
// Name        : TestPoly.cpp
// Author      : David Taitingfong
// Date        : Apr 20, 2018
//============================================================================

#include "Polynomial.h"

int main()
{
	Polynomial* p = new Polynomial(new Term(10,0));
	p->add(new Polynomial(new Term(10, 1)));
	p->print();
	cout << endl;

	p->add(new Polynomial(new Term(-5, 3)));
	p->print();
	cout << endl;

	p->add(new Polynomial(new Term(-2, 2)));
	p->print();
	cout << endl;



	return 0;
}

