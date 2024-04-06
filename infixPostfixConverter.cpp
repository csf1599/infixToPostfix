#include "infixPostfixConverter.h"

int infixToPostfix::precendence(char op) {
	if (op == '-' || op == '+') {
		return 1;
	}
	else if (op == '/' || op == '*') {
		return 2;
	}
	return 0;
}

string infixToPostfix::converter(string infix) {
	string postfix;
	for (int i = 0; i < infix.length(); i++) {
		char cInfo = infix[i];
		cout << cInfo;
	}
	return postfix;
}
