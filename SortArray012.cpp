#include "SortArray012.h"

SortArray012::SortArray012()
{
}


SortArray012::~SortArray012()
{
}

void SortArray012::sortarray()
{
	int testcases;
	int vecsize;
	cin >> testcases;
	while (testcases--)
	{
		cin >> vecsize;
		int num;
		for (int i = 0; i < vecsize; i++)
		{
			cin >> num;
			vec.push_back(num);
		}
	}
	int low = 0, mid = 0;
	int high = vecsize - 1;
	while (mid <= high)
	{
		switch (vec[mid])
		{
		case 0:
			swap(vec[low++], vec[mid++]);
			break;
		case 1:
			mid++;
			break;
		case 2:
			swap(vec[mid], vec[high--]);
			break;
		}

	}
	for (int i = 0; i < vecsize; i++)
		cout << vec[i] << " ";
}