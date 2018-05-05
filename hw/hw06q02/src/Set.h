//============================================================================
// Name        : Set.h
// Author      : David Taitingfong
// Date        : May 4, 2018
//============================================================================

#ifndef SET_H_
#define SET_H_

#include <iostream>
using namespace std;

class Set
{
public:
	Set();
	Set(const Set& right);
	virtual ~Set();

	void add(int n);
	bool contains(int n) const;

	int get_size() const;
	int* get_elements() const;

	Set& operator= (const Set& right);

private:
	int* elements;
	int size;

};

ostream& operator<< (ostream& out, const Set& value);

#endif /* SET_H_ */
