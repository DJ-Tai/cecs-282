////============================================================================
//// Name        : Polynomial.cpp
//// Author      : David Taitingfong
//// Date        : Apr 20, 2018
////============================================================================
//
//#include "PolynomialB.h"
//
//#include <cassert>
//
///**
// * Default constructor
// *
// * @param b - Base of term
// * @param p - Power of term
// */
//Term::Term(int b, int p)
//{
//	this->base = b;
//	this->power = p;
//	this->next = NULL;
//}
//
///**
// * Destructor
// */
//Term::~Term()
//{
//	this->next = NULL;
//	cout << "deleting Term" << endl;
//}
//
///**
// * Default constructor
// */
//PolynomialB::PolynomialB()
//{
//	this->first = NULL;
//}
//
///**
// * Custom constructor
// *
// * @param new_term - Polynomial term
// */
//PolynomialB::PolynomialB(Term* new_term)
//{
//	this->first = new_term;
//}
//
///**
// * Destructor
// */
//PolynomialB::~PolynomialB()
//{
//	// TODO Auto-generated destructor stub
//}
//
///**
// * Adds a new single Polynomial term to the current Polynomial
// *
// * @param to_add - Polynomial being added
// */
//void PolynomialB::add(PolynomialB* to_add)
//{
//	if (first == NULL)
//	{
//		first = to_add->first;
//	}
//	else
//	{
//		Term* check = first;
//
//		if (to_add->first->power < check->power)
//		{
//			// Add after first & find correct position
//			while (to_add->first->power < check->next->power)
//			{
//				check = check->next;
//			}
//
//			// Check if a term of the same power exists
//			if (to_add->first->power == check->next->power)
//			{
//				check->next->base += to_add->first->base;
//			}
//			else
//			{
//				to_add->first->next = check->next;
//				check->next = to_add->first;
//			}
//		}
//		else if (to_add->first->power == check->power)
//		{
//			// Term being added has the same power
//			check->base += to_add->first->base;
//		}
//		else
//		{
//			// Add before first, i.e., it has the highest power
//			to_add->first->next = check;
//			this->first = to_add->first;
//		}
//	}
//}
//
///**
// * Multiplies 2 Polynomials
// */
//PolynomialB* PolynomialB::multiply(PolynomialB* p)
//{
//	PolynomialB* new_poly = new PolynomialB;
//	Term* check = first;
//	Term* p_check;
//	Term* product;
//
//	// This Polynomial
//	while (check->next->next != NULL)
//	{
//		p_check = p->first;
//
//		// p Polynomial
//		while (p_check->next->next != NULL)
//		{
//			// Create a new Term
//			product = new Term(check->base * p_check->base,
//					check->power + p_check->power);
//
//			// Add to the new Polynomial
//			new_poly->add(new PolynomialB(product));
//
//			// Go to next Term in p Polynomial
//			p_check = p_check->next;
//		}
//
//		check = check->next;
//	}
//
//	return new_poly;
//}
//
//void PolynomialB::print()
//{
//	Term* print = this->first;
//
//	cout << print->base << "x^" << print->power << " ";
//
//	while (print->next != NULL)
//	{
//		print = print->next;
//
//		if (print->base < 0)
//		{
//			cout << "- " << (print->base * -1);
//		}
//		else
//		{
//			cout << "+ " << print->base;
//		}
//
//		if (print->power != 0)
//		{
//			cout << "x^" << print->power << " ";
//		}
//	}
//
//}
