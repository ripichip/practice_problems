#pragma once
//vector implementation of a stack
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class paranthesis_checker
{
public:
	paranthesis_checker();
	~paranthesis_checker();
	void checker();
private:
	vector<char>stack;
};

