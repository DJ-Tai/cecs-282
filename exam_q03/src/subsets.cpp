//============================================================================
// Name        : subsets.cpp
// Author      : David Taitingfong
// Date        : May 11, 2018
//============================================================================

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> generate_subsets(string s);
vector<string> get_subsets(string s);

vector<string> subsets;

int main()
{
	string my_string = "rusty";
	cout << "word: " << my_string.substr(0, my_string.length()) << endl;

	subsets = get_subsets(my_string);

	for (unsigned int i = 0; i < subsets.size(); i++)
	{
		cout << subsets[i] << "\n";
	}

	return 0;
}

vector<string> get_subsets(string s)
{
	string left;
	string right;
	int k = 1;

	if (s.length() > 1)
	{
		for (unsigned int i = s.length() - 1; i > 0; i--)
		{
			k = 1;

			for (unsigned int j = i; j <= s.length(); j++)
			{
				if (j + k <= s.length())
				{
					left = s.substr(0, i);
					right = s.substr(j, k);

					subsets.push_back(left + right);
				}
			}

			if (left.length() == 1)
			{
				subsets.push_back(left);
			}

			k += 1;

		}
		string rem = s.substr(1, s.length() - 1);
		subsets = get_subsets(rem);
	}
	else if (s.length() == 1)
	{
		subsets.push_back(s);
	}

	if (k == 1)
	{
		subsets.push_back("_");
	}

	return subsets;
}

vector<string> generate_subsets(string s)
{
	if (s.length() < 1)
	{
		subsets.push_back("_");
		return subsets;
	}
	else
	{
		for (unsigned int j = 0; j < s.length(); j++)
		{
			string left;
			string right;

			left = s.substr(0, s.length() - j);

			if ((s.length() - j + 1) > s.length())
			{
				right = s.substr(s.length() - j, j);
			}
			else
			{
				right = s.substr(s.length() - j + 1, j);
			}
			subsets.push_back(left + right);
		}

		generate_subsets(s.substr(1, s.length()));
	}

	return subsets;
}

