//============================================================================
// Name        : Person.h
// Author      : David Taitingfong
// Date        : Feb 27, 2018
// Version     : 1.0
// Copyright   : N/A
// Description : Person header file
//============================================================================

#ifndef SRC_PERSON_H_
#define SRC_PERSON_H_

#include <iostream>

class Person
{
private:
	std::string name;
	Person* best_friend;
	int popular_ctr;

public:
	Person();
	Person(std::string p_name);
	void set_best_friend(Person* bff);
	std::string get_name();
	Person* get_best_friend();
	int get_ctr();
};

#endif /* SRC_PERSON_H_ */
