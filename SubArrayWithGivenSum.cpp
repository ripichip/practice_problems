#include "SubArrayWithGivenSum.h"

SubArrayWithGivenSum::SubArrayWithGivenSum()
{
}


SubArrayWithGivenSum::~SubArrayWithGivenSum()
{
}

void SubArrayWithGivenSum::FindSubArrayWithGivenSum()
{
	int testcases;
	int vecsize;
	cin >> testcases;
	while (testcases--)
	{
		int arrsum, tmp;
		cin >> vecsize >> arrsum;
		for (int i = 0; i < vecsize; i++)
		{
			cin >> tmp;
			vec.push_back(tmp);
		}
		int pos1 = 0, pos2 = 0, sum = 0;
		for (int i = 0; i<vecsize; i++)
		{
			sum += vec[i];
			if (sum>arrsum)
			{
				while (sum>arrsum && pos1 <= i)
					sum -= vec[pos1++];
			}
			if (sum == arrsum)
			{
				pos1 += 1;
				pos2 = i + 1;
				break;
			}
		}
		if (sum == arrsum)
			cout << pos1 << " " << pos2 << endl;
		else
			cout << "-1" << endl;
	}
}
