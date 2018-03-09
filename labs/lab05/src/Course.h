//============================================================================
// Name        : Course.h
// Author      : David Taitingfong
// Date        : Feb 18, 2018
// Version     : 1.0
// Copyright   : N/A
// Description :
//============================================================================

#ifndef COURSE_H_
#define COURSE_H_

#include <iostream>

class Course
{
private:
	std::string courseName; /** Name of the course */
	std::string* students;  /** Points to the array of students in the course */
	int numberOfStudents;   /** Number of students in course; default = 0 */
	int capacity;           /** Max number of students allowed in course */

public:
	// Constructors
	Course();
	Course(std::string course, int capacity);

	// Destructor
	virtual ~Course();

	std::string getCourseName() const;
	void addStudent(std::string &name);
	void dropStudent(std::string &name);
	std::string* getStudents() const;
	int getNumberOfStudents() const;
};

#endif /* COURSE_H_ */
