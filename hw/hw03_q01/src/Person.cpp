//============================================================================
// Name        : Person.cpp
// Author      : David Taitingfong
// Date        : Feb 27, 2018
// Version     : 1.0
// Copyright   : N/A
// Description : Person class/source file
//============================================================================

#include "Person.h"

/**
 * Default constructor
 */
Person::Person()
{
	name = "No name";
	age = 0;
}

/**
 * Custom constructor
 *
 * @param user_name - Person's name
 * @param user_age - Person's age
 */
Person::Person(std::string user_name, int user_age)
{
	name = user_name;
	age = user_age;
}

/**
 * Set's the name of the Person
 *
 * @param new_name - Name to be set for the Person
 */
void Person::setName(std::string new_name)
{
	this->name = new_name;
}

/**
 * Set's the age of the Person
 *
 * @param new_age - Age to be set for the Person
 */
void Person::setAge(int new_age)
{
	this->age = new_age;
}

/**
 * Gets the Person's name
 *
 * @return - Person's name
 */
std::string Person::getName()
{
	return this->name;
}

/**
 * Gets the Person's age
 *
 * @return - Person's age
 */
int Person::getAge()
{
	return this->age;
}
