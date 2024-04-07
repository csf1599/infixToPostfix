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
//algorithm pseudocode
//Initialize pfx to an empty expression and also initialize the stack.
//Get the next symbol, sym, from infx.
//If sym is an operand, append sym to pfx.
//If sym is(, push sym into the stack.
//	If sym is), pop and append all of the symbols from the stack until the most recent left parentheses.Pop and discard the left parentheses.
//	If sym is an operator:
//Pop and append all of the operators from the stack to pfx that are above the most recent left parentheses and have precedence greater than or equal to sym.
//Push sym onto the stack.
//After processing infx, some operators might be left in the stack.Pop and append to pfx everything from the stack.
string infixToPostfix::converter(string infix) {
	string postfix;
	for (int i = 0; i < infix.length(); i++) {
		char sym = infix[i];
		if (isalpha(sym)) {
			postfix += sym;
		}
		else if (sym == '(') {
			operators.push(sym);
		}
		else if (sym == ')') {
			while (operators.top() != '(' && !operators.empty()) {
				postfix += operators.top();
				operators.pop();
			}
			operators.pop();
		}
		else
			while (!operators.empty()) {
				postfix += operators.top();
				operators.pop();
			}
		operators.push(sym);
	}
	while (!operators.empty()) {
		postfix += operators.top();
		operators.pop();
	}
	return postfix;
}
