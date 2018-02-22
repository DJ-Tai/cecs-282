//============================================================================
// Name        : 282_hw02_q02.cpp
// Author      : David Taitingfong
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

/**
 * Outputs all permutations of a sequence up to a specified value
 * O(n^2) - That's bad
 *
 * @param prefix -
 * @param to_permute -
 */
void permutation_helper(vector<int> prefix, vector<int> to_permute)
{
	// If there's nothing left to permute, print the values of prefix
	if (to_permute.size() == 0)
	{
		for (unsigned int i = 0; i < prefix.size(); i++)
		{
			cout << prefix[i] << " ";
		}
		cout << endl;
	}
	else
	{
		for (unsigned int i = 0; i < to_permute.size(); i++)
		{
			vector<int> prefix2 = prefix;
			vector<int> to_permute2 = to_permute;

			prefix2.push_back(to_permute[i]);
			to_permute2.erase(to_permute2.begin() + i);

			permutation_helper(prefix2, to_permute2); // Recursion magic
		}
	}

}

int main()
{
	int user_input = 0;
	bool rcvd = false;

	// Prompt user for value
	cout << "Permutation Finder" << endl;
	while (!rcvd)
	{
		cout << "Enter a number: ";
		cin >> user_input;

		if (cin.fail())
		{
			cout << "That is not a number" << endl << endl;
		}
		else if (user_input < 1)
		{
			cout << "That number won't suffice..." << endl << endl;
		}
		else
		{
			vector<int> pre;
			vector<int> permute;

			for (int i = 1; i <= user_input; i++)
			{
				pre.push_back(i);

				for (int j = 1; j <= user_input; j++)
				{
					if (j != i)
					{
						permute.push_back(j);
					}
				}
				permutation_helper(pre, permute);
				pre.pop_back();
				permute.clear();
			}
			rcvd = true;

		}

		// Clear user input
		cin.clear();
		fflush(stdin);
	}
	// end while-loop

	return 0;
}
