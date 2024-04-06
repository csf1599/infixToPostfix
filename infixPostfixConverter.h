#ifndef ITP
#define ITP
#include <stack>
#include <iostream>
#include <string>
using namespace std;
class infixToPostfix {
private:
	stack<char> operators;
	int precendence(char);
public:
	string converter(string);
};

#endif