//============================================================================
// Name        : Set.h
// Author      : david
// Date        : May 2, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================

#ifndef SET_H_
#define SET_H_

#include <iostream>

class Set
{
	public:
		Set();
		virtual ~Set();
		void add(int n);
		bool contains(int n) const;
		int get_size() const;

		// Add "big three" memory management functions

	private:
		int* elements;
		int size;

};

#endif /* SET_H_ */
