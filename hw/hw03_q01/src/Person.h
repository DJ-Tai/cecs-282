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
	int age;

public:
	Person();
	Person(std::string user_name, int user_age);
	void setName(std::string new_name);
	void setAge(int new_age);
	std::string getName();
	int getAge();
};

#endif /* SRC_PERSON_H_ */
