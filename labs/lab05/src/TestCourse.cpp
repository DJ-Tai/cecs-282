//============================================================================
// Name        : TestCourse.cpp
// Author      : David Taitingfong
// Date        : Feb 23, 2018
// Version     : 1.0
// Copyright   : N/A
// Description :
//============================================================================

#include "Course.h"
#include <iostream>

/* Declare functions to be implemented */
void print_course_info(Course* course, std::string* students, int size);
void add_students(Course* course, std::string adding[], int num);

/**
 * Prints all info related to the Course object
 *
 * @param course -
 * @param students -
 */
void print_course_info(Course* course, std::string* students, int size)
{
	std::cout << "Course 1: " << course->getCourseName() << std::endl;
	std::cout << "Enrolled: " << course->getNumberOfStudents() << std::endl;
	std::cout << "Students: " << std::endl;

	if (course->getNumberOfStudents() == 0)
	{
		std::cout << "No students currently enrolled" << std::endl;
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			if (students[i] != "")
			{
				std::cout << students[i] << std::endl;
			}
		}
	}

	std::cout << std::endl;
}


/**
 * Adds students to the class roster if there is enough space
 *
 * @param course -
 * @param adding[] -
 */
void add_students(Course* course, std::string adding[], int num)
{
	for (int i = 0; i < num; i++)
	{
		if (adding[i] != "") course->addStudent(adding[i]);
	}
}

/**
 * Removes students from the class roster
 */
void remove_students(Course* course, std::string remove[], int num)
{
	for (int i = 0; i < num; i++)
	{
		if (remove[i] != "") course->dropStudent(remove[i]);
	}
}

/**
 * Main function
 */
int main()
{
	// Create Course object(s)
	int c_size = 10;
	Course* course01 = new Course("CECS 282", c_size);
	Course* course02 = new Course("CECS 328", c_size);

	// Create string pointers to each courses' students*
	std::string* enrolled_01 = course01->getStudents();
	std::string* enrolled_02 = course02->getStudents();

	// Students to add/drop
	std::string* to_add = new std::string[5];
	std::string* to_drop = new std::string[5];
	to_add[0] = "Tony Stark";
	to_add[1] = "Miles Morales";
	to_add[2] = "Riri Williams";
	to_add[3] = "Gwen Stacy";

	to_drop[0] = "Miles Morales";
	to_drop[1] = "Bruce Banner";
	to_drop[2] = "Tony Stark";
	to_drop[3] = "Monica Rambeau";

	// Before adding students to courses
	print_course_info(course01, enrolled_01, c_size);
	print_course_info(course02, enrolled_02, c_size);

	// Add students
	std::cout << "ADDING STUDENTS..." << std::endl;
	add_students(course01, to_add, 5);
	add_students(course02, to_drop, 5);

	print_course_info(course01, enrolled_01, c_size);
	print_course_info(course02, enrolled_02, c_size);

	// Drop students
	std::cout << "DROPPING TONY AND MILES FROM 282, EVERYONE FROM 328" << std::endl;
	remove_students(course01, to_drop, 5); // Drops Tony Stark, Miles Morales
	remove_students(course02, to_drop, 5);

	std::cout << std::endl;

	print_course_info(course01, enrolled_01, c_size);
	print_course_info(course02, enrolled_02, c_size);

	return 0;
}

// FIN

