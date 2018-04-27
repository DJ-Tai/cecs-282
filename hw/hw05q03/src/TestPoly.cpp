//============================================================================
// Name        : TestPoly.cpp
// Author      : David Taitingfong
// Date        : Apr 20, 2018
//============================================================================

#include "Polynomial.h"

int main()
{
	Polynomial p (Term(-10, 0));
	p.add(Polynomial(Term(-1,1)));
	p.add(Polynomial(Term(9, 7)));
	p.add(Polynomial(Term(5, 10)));
	cout << "p: ";
	p.print();

	cout << "\n\n";
	Polynomial q = p.multiply(p);
	cout << "q: ";
	q.print();



	return 0;
}

