
#include <string>
#include <iostream>
#include <stack>
#include "infixPostfixConverter.h"

using namespace std;

int main()
{
	string pee = "a+b-c";
	infixToPostfix test;
	cout << test.converter(pee);
}

