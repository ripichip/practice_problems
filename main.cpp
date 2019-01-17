/*
	Name: Alex Shershnov
	Objetive: Implementation of various simple problems in order to practice coding
*/
#include <iostream>
#include "SortArray012.h"
#include "SubArrayWithGivenSum.h"
#include "equilibriumPoint.h"
#include "reversearray.h"
#include "paranthesis_checker.h"
int main()
{
	paranthesis_checker pcheck;
	pcheck.checker();
	reversearray rev;
	rev.reversestring();
	equilibriumPoint eqpt;
	eqpt.generate();
	SortArray012 sortarray;
	sortarray.sortarray();
	SubArrayWithGivenSum subarraywithgivensum;
	subarraywithgivensum.FindSubArrayWithGivenSum();
	return 0;
}