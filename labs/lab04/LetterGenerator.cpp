/*
 * LetterGenerator.cpp
 *
 *  Created on: Feb 13, 2018
 *      Author: david
 */

#include <iostream>
#include <ctime>
using namespace std;

/**
 * Creates an array of 100 lowercase letters generated randomly
 *
 * @param chars[] - Empty char array
 */
void createArray(char chars[])
{
	// ASCII decimal [97, 122] = char [a, z]
	srand((unsigned) time(0));
	int value;
	int low = 97;
	int high = 122;
	int range = (high - low) + 1;

	for (int i = 0; i < 100; i++)
	{
		value = low + int(range * rand() / (RAND_MAX + 1.0));
		chars[i] = char(value);
	}
}

/**
 * Displays the contents of the char array
 *
 * @param chars[] - char array whose contents are to be displayed
 */
void displayArray(const char chars[])
{
	for (int i = 0; i < 100; i++)
	{
		cout << chars[i]; // Print letter

		// If 20 letters have been printed, force a new line. Otherwise add a space.
		if ((i + 1) % 20 == 0)
		{
			cout << endl;
		}
		else
		{
			cout << " ";
		}
	}
}

/**
 * Iterates through chars[] and counts the number of appearances of each letter
 * which is then put into counts[]
 *
 * @param chars[] - char array with randomly generated letters
 * @param counts[] - int array where each index is associated with a letter from the alphabet
 */
void countLetters(const char chars[], int counts[])
{
	for (int i = 0; i < 100; i++)
	{
		counts[int(chars[i]) - 97] += 1;
	}
}

/**
 * Displays the number of occurrences of each letter found within a char array
 *
 * @param counts[] - Number of occurrences of a letter from the alphabet
 */
void displayCounts(const int counts[])
{
	int letter = 97; // ASCII 'a' starts at decimal 97

	for (int i = 0; i < 26; i++)
	{
		cout << counts[i] << " " << char(letter++) << " ";

		if ((i + 1) % 10 == 0)
		{
			cout << endl;
		}
	}
}

/**
 * Main function
 */
int main()
{
	char letters[100]; // Will hold 100 random lowercase letters
	int letterCount[26]; // For occurrences of each letter in letters[]

	// Initialize letterCount[]
	for (int i = 0; i < 26; i++)
	{
		letterCount[i] = 0;
	}

	createArray(letters);

	cout << "The lowercase letters are:" << endl;
	displayArray(letters);
	cout << endl;

	cout << "The occurrences of each letter are:" << endl;
	countLetters(letters, letterCount);
	displayCounts(letterCount);

	return 0;
}

