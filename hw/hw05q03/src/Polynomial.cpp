//============================================================================
// Name        : Polynomial.cpp
// Author      : david
// Date        : Apr 23, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#include "Polynomial.h"
#include <cassert>

Term::Term()
{
	base = 0;
	power = 0;
	next = NULL;
}

/**
 * Custom constructor
 */
Term::Term(int b, int p)
{
	base = b;
	power = p;
	next = NULL;
}

/**
 * Destructor
 */
Term::~Term()
{
	this->next = NULL;
}

Polynomial::Polynomial()
{
	first = NULL;
}

/**
 * Custom constructor
 */
Polynomial::Polynomial(Term new_term)
{
	first = new Term(new_term);
}

void Polynomial::add(Polynomial to_add)
{
	Term* new_term = to_add.first;

	if (first == NULL)	// Polynomial is blank
	{
		first = new_term;
		first->next = NULL;
	}
	else
	{
		Term* check = first;

		if (new_term->power < check->power)
		{
			// Add after first & find correct position
			while (check->next != NULL && new_term->power < check->next->power)
			{
				check = check->next;	// Move the pointer
			}

			if (new_term->power == check->power)
			{
				// Terms are of the same power
				check->base += new_term->base;
			}
			else if (check->next != NULL && new_term->power == check->next->power)
			{
				// The next term is of the same power
				check->next->base += new_term->base;
			}
			else
			{
				// The previous term is a higher power, but the next one is a lower power
				new_term->next = check->next;
				check->next = new_term;
			}
		}
		else if (new_term->power == check->power)
		{
			// Term being added has the same power
			check->base += new_term->base;
		}
		else
		{
			// Add before first, i.e., it has the highest power so far
			new_term->next = check;
			this->first = new_term;
		}
	}
}

Polynomial Polynomial::multiply(Polynomial p)
{
	Polynomial poly_prod;

	Term* check = this->first;
	Term* p_check;
//	Term term_prod;

	while (check != NULL)
	{
		p_check = p.first;

		// p Polynomial
		while (p_check != NULL)
		{
			// Create a new Term
			Term term_prod(check->base * p_check->base, check->power + p_check->power);

			// Add to the Polynomial
			poly_prod.add(Polynomial(term_prod));

			p_check = p_check->next;
		}

		check = check->next;
	}

	return poly_prod;
}

/**
 * Math format for displaying a Polynomial
 */
void Polynomial::print()
{
	Term* print = first;

	cout << print->base << "x^" << print->power << " ";

	while (print->next != NULL)
	{
		print = print->next;

		if (print->base < 0)
		{
			cout << "- " << (print->base * -1);
		}
		else
		{
			cout << "+ " << print->base;
		}

		if (print->power != 0)
		{
			cout << "x^" << print->power << " ";
		}
	}
}
