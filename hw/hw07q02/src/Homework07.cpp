//============================================================================
// Name        : Homework07.cpp
// Author      : David Taitingfong
// Date        : May 11, 2018
//============================================================================

#include <iostream>
#include <string>
#include <vector>

using namespace std;

template<typename T>
void removeDuplicate(vector<T>& v);

int main()
{
	vector<int>* user_vals = new vector<int>();
	int ctr = 0;
	int input;

	cout << "Enter 10 integers: ";
	while (ctr < 10)
	{
		cin >> input;
		user_vals->push_back(input);
		ctr += 1;
	}

	cout << "Your current integers are: \n";
	for (unsigned int i = 0; i < user_vals->size(); i++)
	{
		cout << user_vals->at(i) << " ";
	}

	removeDuplicate(*user_vals);

	cout << "\n";
	cout << "Your new integers without duplicates are: \n";
	for (unsigned int i = 0; i < user_vals->size(); i++)
	{
		cout << user_vals->at(i) << " ";
	}

	return 0;
}

template<typename T>
void removeDuplicate(vector<T>& v)
{
	bool dupe = true;
	unsigned int size = 0;

	vector<T>* new_v = new vector<T>();

	if (v.size() > 0)
	{
		new_v->push_back(v.at(0));	// Always push first value

		unsigned int i = 0;
		unsigned int j = 0;
		while (i < v.size())
		{
			j = 0;
			size = new_v->size();
			while (j < size)
			{
				if (v.at(i) == new_v->at(j))
				{
					dupe = true;
				}
				j++;
			}

			if (!dupe)
			{
				new_v->push_back(v.at(i));
			}

			i++;
			dupe = false;
		}

		v = *new_v;
	}
}

