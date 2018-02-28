//============================================================================
// Name        : hw03_q02_Tester.cpp
// Author      : David Taitingfong
// Date        : Feb 27, 2018
// Version     : 1.0
// Copyright   : N/A
// Description : Tester file for Homework 3, Question 2
//============================================================================

#include "Person.h"

#include <iostream>
#include <vector>


int main()
{
	/* Vector of Person objects */
	std::vector<Person*> people;

	/* List of people to add to people<> */
	int ra_length = 4;

	/* string array of current people's names */
	std::string people_names[] = { "David", "Lorie", "Koa", "Nala" };

	/* Best friend...forever */
	std::string bff;

	for (int i = 0; i < ra_length; i++)
	{
		people.push_back(new Person(people_names[i]));
	}

	// Get best friend for each person in people<>
	for (unsigned int i = 0; i < people.size(); i++)
	{
		bool found = false;

		std::cout << "Who is " << people[i]->get_name() << "'s best friend? ";
		std::getline(std::cin, bff);

		// Check if the best friend is on the list
		for (unsigned int j = 0; j < people.size(); j++)
		{
			if (people[j]->get_name() == bff)
			{
				people[i]->set_best_friend(people[j]);
				found = true;
				j = people.size(); // Ensures no more checks are made
			}
		}

		if (!found)
		{
			// Best friend was not found. So we create them, set them, and add them
			// to the list of people

			Person* adding = new Person(bff);
			people[i]->set_best_friend(adding);
			people.push_back(adding);
		}

	}

	// Print all Person's in people<>
	for (unsigned int k = 0; k < people.size(); k++)
	{
		std::cout << (k + 1) << ". " << people[k]->get_name() << "\n";
		std::cout << "Popularity Counter: " << people[k]->get_ctr() << "\n";
		std::cout << "Best friend: " << people[k]->get_best_friend()->get_name() << "\n";
		std::cout << "BF Popularity Counter: " << people[k]->get_best_friend()->get_ctr() << "\n";
		std::cout << "\n";
	}

	return 0;
}

// FIN
