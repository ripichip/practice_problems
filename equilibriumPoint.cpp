#include "equilibriumPoint.h"



equilibriumPoint::equilibriumPoint()
{
}


equilibriumPoint::~equilibriumPoint()
{
}

int equilibriumPoint::FindEquilibriumPoint(vector<int>v,int size,int sum)
{
	if (size == 1)
		return 1;
	int lower = 0, upper = sum-v[0];
	for (int i = 1; i<=size; i++)
	{
		//cout << "lower " << lower << " upper " << upper << endl;
		if (lower == upper)
			return i;
		else if (lower != upper)
		{
			lower += v[i-1];
			upper -= v[i];
		}
	}
	return -1;
}
void equilibriumPoint::generate()
{
	int testcases;
	cin >> testcases;
	while (testcases--)
	{
		int size;
		cin >> size;
		int tmp;
		int sum = 0;
		for (int i = 0; i < size; i++)
		{
			cin >> tmp;
			vec.push_back(tmp);
			sum += tmp;
		}
		cout << FindEquilibriumPoint(vec,size-1,sum) << endl;;
	}
}