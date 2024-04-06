
#include <string>
#include <iostream>
#include <stack>
#include "infixPostfixConverter.h"

using namespace std;

int main()
{
	string pee = "wa+(b+c)+a";
	infixToPostfix test;
	cout << test.converter(pee);
}

