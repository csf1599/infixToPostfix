
#include <string>
#include <iostream>
#include <stack>
#include "infixPostfixConverter.h"

using namespace std;

int main()
{
	string infix = "a + b - c";
	infixToPostfix test;
	cout << "infix expression : " << infix << endl;
	cout << "postfix expression : ";
	cout << test.converter(infix);
	cout << endl;
	infix = "(a + b) * c";
	cout << "infix expression : " << infix << endl;
	cout << "postfix expression : ";
	cout << test.converter(infix);
	cout << endl;
	infix = "( a + b ) * ( c - d )";
	cout << "infix expression : " << infix << endl;
	cout << "postfix expression : ";
	cout << test.converter(infix);
	cout << endl;
	infix = "a + ((b + c) * (e - f) - g) / (h - i)";
	cout << "infix expression : " << infix << endl;
	cout << "postfix expression : ";
	cout << test.converter(infix);
	cout << endl;
	infix = "a + b * (c + d) - e / f * g + h";
	cout << "infix expression : " << infix << endl;
	cout << "postfix expression : ";
	cout << test.converter(infix);
	cout << endl;
}



