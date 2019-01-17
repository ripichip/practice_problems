#include "reversearray.h"
#include <iostream>
#include <string>
using namespace std;
//incomplete
reversearray::reversearray()
{
}


reversearray::~reversearray()
{
}

void reversearray::reversestring()
{
	string input;
	getline(cin, input);
	char var = ' ';
	for (int i = input.length()-1; (i/2) > 0 ; i--)
	{
		var = input[i];
		input[i] = input[input.length() - (i + 1)];
		input[input.length() - (i+1)] = var;
	}
	cout << input << endl;
}