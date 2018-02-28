//============================================================================
// Name        : Car.h
// Author      : David Taitingfong
// Date        : Feb 27, 2018
// Version     : 1.0
// Copyright   : N/A
// Description : Car header file
//============================================================================

#ifndef SRC_CAR_H_
#define SRC_CAR_H_

#include "Person.h"
#include <iostream>

class Car
{
private:
	std::string model;
	Person* owner;
	Person* driver;

public:
	Car();
	Car(std::string car_model, Person* car_owner, Person* car_driver);
	void setModel(std::string model_name);
	void setOwner(Person* owner_name);
	void setDriver(Person* driver_name);
	std::string getModel();
	Person* getOwner();
	Person* getDriver();
};

#endif /* SRC_CAR_H_ */
