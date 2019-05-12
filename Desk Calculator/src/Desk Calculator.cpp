//============================================================================
// Name        : Desk.cpp
// Author      : Suhas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int rval=0;
	int lval=0;
	char op=' ';
	int res=0;
	cout << "Expression: ";
	cin >> rval >> op >> lval;
	switch(op)
	{
	case '+' : res = rval + lval;
				break;
	case '-' : res = rval - lval;
				break;
	case '*' : res = rval * lval;
				break;
	case '/' : res = rval / lval;
				break;
	case '%' : res = rval % lval;
				break;
	case '^' : res = pow(rval, lval);
				break;
	}
	cout<<res;
	return 0;
}
