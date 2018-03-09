//============================================================================
// Name        : hw03_q01_Tester.cpp
// Author      : David Taitingfong
// Date        : Feb 27, 2018
// Version     : 1.0
// Copyright   : N/A
// Description : Tester file for Homework 3, Question 1
//============================================================================

#include "Car.h"
#include <iostream>
#include <vector>

/**
 * Prompts that are repeated to the user
 */
void initial_prompt()
{
	std::cout << "Enter a selection by #" << std::endl;
	std::cout << "1. Add car" << std::endl;
	std::cout << "2. Add person" << std::endl;
	std::cout << "3. Finish" << std::endl;
}

/**
 * Main function
 */
int main()
{

	std::vector<Person*> people;	// All the pointers to People
	std::vector<Car*> cars;			// All the cars
	int user_reply;					// User's menu choice
	bool yes = true;				// boolean for While loop

	while (yes)
	{
		initial_prompt();
		std::cin >> user_reply;
		std::cin.ignore();

		if (std::cin.fail())
		{
			std::cout << "Invalid option" << std::endl << std::endl;
		}
		else
		{
			if (user_reply == 1)
			{
				/* Car being added */
				Car* my_car = new Car();
				std::string model;

				/* Owner of car */
				Person* owner = new Person();
				std::string owner_name;
				int owner_age;

				/* Driver of car */
				Person* driver = new Person();
				std::string driver_name;
				int driver_age;

				std::cout << "Model? ";
				std::getline(std::cin, model);

				std::cout << "Owner? ";
				std::getline(std::cin, owner_name);
				owner->setName(owner_name);

				std::cout << "Owner's age? ";
				std::cin >> owner_age;
				std::cin.ignore();
				owner->setAge(owner_age);
				people.push_back(owner);

				std::cout << "Driver? ";
				std::getline(std::cin, driver_name);
				driver->setName(driver_name);

				std::cout << "Driver's age? ";
				std::cin >> driver_age;
				driver->setAge(driver_age);
				people.push_back(driver);

				my_car->setModel(model);
				my_car->setOwner(owner);
				my_car->setDriver(driver);

				cars.push_back(my_car);

				std::cout << "\n\n";

			}
			else if (user_reply == 2)
			{
				/* Person to be added to the vector */
				Person* to_add = new Person();
				std::string add_name;
				int add_age;

				std::cout << "Name? ";
				std::getline(std::cin, add_name);

				std::cout << "Age? ";
				std::cin >> add_age;
				std::cin.ignore();

				to_add->setName(add_name);
				to_add->setAge(add_age);
				people.push_back(to_add);
			}
			else if (user_reply == 3)
			{
				for (unsigned int i = 0; i < people.size(); i++)
				{
					people[i]->setAge(people[i]->getAge() + 1);
				}

				for (unsigned int i = 0; i < cars.size(); i++)
				{
					std::cout << "Car: " << cars[i]->getModel() << "\n";
					std::cout << "Owner: " << cars[i]->getOwner()->getName();
					std::cout << ", age: " << cars[i]->getOwner()->getAge()
							<< "\n";
					std::cout << "Driver: " << cars[i]->getDriver()->getName();
					std::cout << ", age: " << cars[i]->getDriver()->getAge()
							<< "\n";
					std::cout << "\n";
				}

				yes = false;
			}
			else
			{
				std::cout << "Hmm...let's try that again" << std::endl;
			}
		}
		std::cin.clear();
		fflush(stdin);
	}

	return 0;
}

// FIN
