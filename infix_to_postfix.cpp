
#include <string>
#include <iostream>
#include <stack>
#include "infixPostfixConverter.h"

using namespace std;

int main()
{
	string pee = "waaaa aaa 111";
	infixToPostfix test;
	cout << test.converter(pee);
}

