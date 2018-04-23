//============================================================================
// Name        : Polynomial.h
// Author      : david
// Date        : Apr 20, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#ifndef POLYNOMIAL_H_
#define POLYNOMIAL_H_


#include <iostream>
#include <string>
using namespace std;

class Polynomial;

/**
 *  3. Write a class Polynomial that stores a polynomial such as
	p(x)= 5x^10+9x^7-x-10
	as a linked list of terms. A term contains the coefficient and the power of x. For example, you would store p(x) as
	(5,10),(9,7),(-1,1),(-10,0)
	Supply member functions to add, multiply, and print polynomials. Supply a constructor that makes a polynomial from a single term. For example, the polynomial p can be constructed as
	Polynomial p (Term(-10, 0));
	p.add(Polynomial(Term(-1, 1)));
	p.add(Polynomial(Term(9, 7)));
	p.add(Polynomial(Term(5, 10)));
	Then compute p(x)×p(x).
	Polynomial q = p.multiply(p);
	q.print();
 *
 */
class Term
{
	public:
		Term(int b, int p);
		~Term();
	private:
		int base;
		int power;
		Term* next;
		friend class Polynomial;
};

class Polynomial
{
	public:
		Polynomial();
		Polynomial(Term* new_term);
		virtual ~Polynomial();
		void add(Polynomial* to_add);
		Polynomial* multiply(Polynomial* p);
		void print();
	private:
		Term* first;
};


#endif /* POLYNOMIAL_H_ */
