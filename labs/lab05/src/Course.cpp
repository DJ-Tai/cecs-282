//============================================================================
// Name        : Course.cpp
// Author      : David Taitingfong
// Date        : Feb 18, 2018
// Version     : 1.0
// Copyright   : N/A
// Description :
//============================================================================

#include "Course.h"
#include <iostream>

/**
 * Default constructor
 */
Course::Course()
{
	courseName = "New Course";
	students = new std::string[20];
	numberOfStudents = 0;
	capacity = 20;
}

/**
 * Custom constructor
 */
Course::Course(std::string course, int cap)
{
	courseName = course;
	students = new std::string[cap];
	numberOfStudents = 0;

	if (cap < 1)
		capacity = 20;
	else
		capacity = cap;

}

Course::~Course()
{
	// TODO Auto-generated destructor stub
}

/**
 * Gets the name of the course
 *
 * @return course name
 */
std::string Course::getCourseName() const
{
	return this->courseName;
}

/**
 * Adds students to the class roster if there's available space
 *
 * @param name - Name of the student to be added
 */
void Course::addStudent(std::string &name)
{
	std::string student = name;

	if (numberOfStudents == capacity)
	{
		std::cout << "Cannot add student " << name << std::endl;
	}
	else
	{
		students[numberOfStudents] = student;
		numberOfStudents += 1;
	}
}

/**
 * Drops a student from the class roster
 *
 * @param &name - Name of student to be dropped
 */
void Course::dropStudent(std::string &name)
{
	std::string student = name;

	if (student != "")
	{
		for (int i = 0; i < this->capacity; i++)
		{
			if (students[i] == student)
			{
				// Drop student
				students[i] = "";
				numberOfStudents -= 1;
				i = this->capacity;
			}
		}
	}
}

/**
 * Retrieves the class list for the course
 *
 * @return - Pointer to the array of students
 */
std::string* Course::getStudents() const
{
	return this->students;
}

/**
 * Retrieves the current number of students in the course
 *
 * @return - Number of students currently in the course
 */
int Course::getNumberOfStudents() const
{
	return this->numberOfStudents;
}

