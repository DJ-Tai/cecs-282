//============================================================================
// Name        : HW4_Q3.cpp
// Author      : David Taitingfong
// Date        : Apr 10, 2018
//============================================================================

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> generate_substrings(string s)
{
	vector<string>* substrings;

	unsigned int ctr = 0;

	while (ctr < s.length())
	{
		substrings->push_back(to_string(s[ctr]));
		ctr++;
	}

	return *(substrings);
}

int main()
{
	vector<string> test = generate_substrings("rum");

	return 0;
}

