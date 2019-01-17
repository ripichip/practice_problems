#pragma once
#include<iostream>
#include<vector>

using namespace std;

class equilibriumPoint
{
public:
	equilibriumPoint();
	~equilibriumPoint();
	int FindEquilibriumPoint(vector<int>v,int size,int sum);
	void generate();
private:
	vector<int>vec;
};

