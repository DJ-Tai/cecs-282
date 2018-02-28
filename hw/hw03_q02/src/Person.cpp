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
	best_friend = NULL;
	popular_ctr = 0;
}

/**
 * Custom constructor
 * @p_name - Name of person
 */
Person::Person(std::string p_name)
{
	name = p_name;
	best_friend = NULL;
	popular_ctr = 0;
}

/**
 * Sets the best friend
 *
 * @param bff - Best friend of Person
 */
void Person::set_best_friend(Person* bff)
{
	this->best_friend = bff;
	bff->popular_ctr += 1;
}

/**
 * Get the Person's name
 *
 * @return - Person's name as a string
 */
std::string Person::get_name()
{
	return this->name;
}

/**
 * Gets the Person's best friend
 *
 * @return - A Person pointer
 */
Person* Person::get_best_friend()
{
	return this->best_friend;
}

/**
 * Gets the Person's popularity counter
 *
 * @return - An integer representing how many people have this person
 * as a best friend
 */
int Person::get_ctr()
{
	return this->popular_ctr;
}
