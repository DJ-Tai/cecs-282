//============================================================================
// Name        : CircleTest.cpp
// Author      : David Taitingfong
// Date        : Apr 27, 2018
// Version     : 1.0
// Copyright   : 
// Description :
//============================================================================

#include "Circle.h"

void sort(vector<Circle>& circles, int from, int to);
void merge(vector<Circle>& a, int from, int mid, int to);

int main()
{
	vector<Circle> my_circles;
	Circle c1(5.0);
	Circle c2(10.0);
	Circle c3(2.5);
	Circle c4(20.0);
	Circle c5(5.0);
	my_circles.push_back(c1);
	my_circles.push_back(c2);
	my_circles.push_back(c3);
	my_circles.push_back(c4);
	my_circles.push_back(c5);

	for (unsigned int i = 0; i < my_circles.size(); i++)
	{
		cout << "Circle " << i + 1 << ": " << my_circles[i] << "\n";
	}

	cout << endl;

	cout << "c1 < c2?: " << (c1 < c2) << "\n";
	cout << "c1 <= c5?: " << (c1 <= c5) << "\n";
	cout << "c1 == c5?: " << (c1 == c5) << "\n";
	cout << "c1 != c4?: " << (c1 != c4) << "\n";
	cout << "c1 > c2?: " << (c1 > c2) << "\n";
	cout << "c4 >= c5?: " << (c4 >= c5) << "\n\n";

	sort(my_circles, 0, my_circles.size() - 1);
	cout << "Sorted Circles\n";
	for (unsigned int i = 0; i < my_circles.size(); i++)
	{
		cout << "Circle " << i + 1 << ": " << my_circles[i] << "\n";
	}

	return 0;
}

/**
 * MergeSort Part 1
 */
void sort(vector<Circle>& circles, int from, int to)
{
	if (from == to)
		return;
	int mid = (from + to) / 2;

	sort(circles, from, mid);
	sort(circles, mid + 1, to);
	merge(circles, from, mid, to);

}

/**
 * MergeSort Part 2
 */
void merge(vector<Circle>& a, int from, int mid, int to)
{
	int n = to - from + 1; // Size of the range to be merged
	// Merge both halves into a temporary vector b
	vector<Circle> b(n);

	int i1 = from;
	// Next element to consider in the first half
	int i2 = mid + 1;
	// Next element to consider in the second half
	int j = 0; // Next open position in b

	// As long as neither i1 nor i2 is past the end, move the smaller
	// element into b

	while (i1 <= mid && i2 <= to)
	{
		if (a[i1] < a[i2])
		{
			b[j] = a[i1];
			i1++;
		}
		else
		{
			b[j] = a[i2];
			i2++;
		}
		j++;
	}

	// Note that only one of the two while loops below is executed

	// Copy any remaining entries of the first half
	while (i1 <= mid)
	{
		b[j] = a[i1];
		i1++;
		j++;
	}
	// Copy any remaining entries of the second half
	while (i2 <= to)
	{
		b[j] = a[i2];
		i2++;
		j++;
	}

	// Copy back from the temporary vector
	for (j = 0; j < n; j++)
		a[from + j] = b[j];
}
