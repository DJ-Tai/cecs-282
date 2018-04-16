//============================================================================
// Name        : HW4_Q2.cpp
// Author      : David Taitingfong
// Date        : Apr 6, 2018
//============================================================================

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

int babyNameRank(int year, string gender, string name)
{
	/* 0-Name, 1-Gender, 2-Rank */
	vector<string> terms;

	string filename =
			"C:\\Users\\david\\GitHub\\cecs-282\\hw\\hw04_q02\\names\\yob"
					+ to_string(year) + ".txt";

	ifstream file;
	file.open(filename);

	int rank = 0;
	bool done = false;

	do
	{
		string line;
		getline(file, line);

		if (line == "")	// End reached
		{
			done = true;
		}
		else
		{
			stringstream ss(line);

			// Get name, gender, and number
			while (ss.good())
			{
				string term;
				getline(ss, term, ',');
				terms.push_back(term);
			}

			if (terms[1] == gender)
				rank += 1;

			if (terms[0] == name && terms[1] == gender)
			{
				return rank;
				done = true;
			}

			terms.clear();
		}

	} while (!done);

	return 0;
}

int main()
{
	string year, gender, name;
	int rank;

	cout << "Enter the year: ";
	cin >> year;
	cout << "Enter the gender: ";
	cin >> gender;
	cout << "Enter the name: ";
	cin >> name;

	rank = babyNameRank(stoi(year), gender, name);
	if (rank != 0)
	{
		cout << name << " is ranked #" << rank << " in the year " << year
				<< endl;
	}
	else
	{
		cout << "The name " << name << " is not ranked in the year " << year
				<< endl;
	}

	return 0;
}

