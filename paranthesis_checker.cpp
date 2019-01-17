#include "paranthesis_checker.h"

paranthesis_checker::paranthesis_checker()
{
}


paranthesis_checker::~paranthesis_checker()
{
}

void paranthesis_checker::checker()
{
	int testcases;
	cin >> testcases;
	while (testcases--)
	{
		string exp;
		cin >> exp;
		for (int i = 0; i < exp.length(); i++)
		{
			if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			{
				stack.push_back(exp[i]);
				//cout << "expression read that will be thrown in the back of the stack" << exp[i] << endl;
				//cout << "back of the stack: "<<stack.back() << endl;
			}
			else if (stack.empty() || ((exp[i] == ')' && stack.back() != '(') || (exp[i] == '}' && stack.back() != '{') || (exp[i] == ']' && stack.back() != '[')))
			{
				cout << "not balanced" << endl;
				break;
			}
			else
				stack.pop_back();
		}
		if (stack.empty())
			cout << "balanced" << endl;
	}
}
