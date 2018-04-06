//============================================================================
// Name        : Lab07.cpp
// Author      : david
// Date        : Apr 6, 2018
// Version     :
// Copyright   : 
// Description :
//============================================================================
#include <iostream>

using namespace std;

/**
 * Determines whether a given string is a palindrome. Ignores non-letter characters
 */
bool isPalindrome(string s, int low, int high)
{
	// Convert char to lowercase
	s[low] = tolower(s[low]);
	s[high] = tolower(s[high]);

	// Get char values for ASCII comparison
	char sl = s[low];
	char sh = s[high];

	// Don't work with numbers
	if (isdigit(s[low]) || isdigit(s[high]))
	{
		cout << "I can't work with numbers" << endl;
		return false;
	}
	// Single letter or middle reached
	else if (high <= low)
	{
		return true;
	}
	// If first char is non-letter
	else if (sl < 97 || sl > 122)
	{
		return isPalindrome(s, low + 1, high);
	}
	// If last char is non-letter
	else if (sh < 97 || sh > 122)
	{
		return isPalindrome(s, low, high - 1);
	}
	else if (s[low] != s[high])
	{
		return false;
	}
	else
	{
		return isPalindrome(s, low + 1, high - 1);
	}

}

int main()
{
	string userInput;
	bool palindrome;

	// Prompt user
	cout << "Enter a string: ";
	cin >> userInput;

	palindrome = isPalindrome(userInput, 0, userInput.size() - 1);

	if (palindrome)
	{
		cout << "That's a palindrome!" << endl;
	}
	else
	{
		cout << "Your string is not a palindrome" << endl;
	}

	return 0;
}

