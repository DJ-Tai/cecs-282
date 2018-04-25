//============================================================================
// Name        : Polynomial.h
// Author      : david
// Date        : Apr 23, 2018
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
class Iterator;

class Term
{
	public:
		Term();
		Term(int b, int p);
		~Term();

	private:
		int base;
		int power;
		Term* next;

	friend class Polynomial;
};

class Polynomial	// List
{
	public:
		Polynomial();
		Polynomial(Term new_term);
		void add(Polynomial to_add);
		Polynomial multiply(Polynomial p);
		void print();

	private:
		Term* first;

	friend class Iterator;
};

class Iterator
{
	public:
		Iterator();
		Term get() const;
		void next();
		bool equals(Iterator b) const;

	private:
		Term* position;
		Polynomial* polynomial;

	friend class List;
};

#endif /* POLYNOMIAL_H_ */
