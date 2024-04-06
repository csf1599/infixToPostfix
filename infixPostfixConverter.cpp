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