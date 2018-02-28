//============================================================================
// Name        : Car.cpp
// Author      : David Taitingfong
// Date        : Feb 27, 2018
// Version     : 1.0
// Copyright   : N/A
// Description : Car class/source file
//============================================================================

#include "Car.h"

/**
 * Default constructor
 */
Car::Car()
{
	model = "New Model";
	owner = new Person();
	driver = new Person();
}

/**
 * Custom constructor
 *
 * @param c_model - Name of Car model
 * @param c_owner - Name of Car owner
 * @param c_driver - Name of Car driver
 */
Car::Car(std::string c_model, Person* c_owner, Person* c_driver)
{
	model = c_model;
	owner = c_owner;
	driver = c_driver;
}

/**
 * Sets the model of the Car
 *
 * @param model_name - New name of Car model
 */
void Car::setModel(std::string model_name)
{
	this->model = model_name;
}

/**
 * Sets the owner of the Car
 *
 * @param owner_name - New name of Car's owner
 */
void Car::setOwner(Person* owner_name)
{
	this->owner = owner_name;
}

/**
 * Sets the driver of the Car
 *
 * @param driver_name - New name of Car's driver
 */
void Car::setDriver(Person* driver_name)
{
	this->driver = driver_name;
}

/**
 * Gets the model of the Car
 *
 * @return - Model of the Car as a string
 */
std::string Car::getModel()
{
	return this->model;
}

/**
 * Gets the Car's owner
 *
 * @return - Owner of the car as a Person pointer
 */
Person* Car::getOwner()
{
	return this->owner;
}

/**
 * Gets the Car's driver
 *
 * @return - Driver of the car as a Person pointer
 */
Person* Car::getDriver()
{
	return this->driver;
}
