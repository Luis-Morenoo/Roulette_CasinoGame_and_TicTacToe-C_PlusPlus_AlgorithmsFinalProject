#include "stack.h"

stack::stack()
{
	top = -1;
}

void stack::push(int num)
{
	if (top == sz - 1) {
		return;
	}
	st[++top] = num;
}

void stack::peek()
{
	if (top < 0) {
		cout << "Stack is empty" << endl;
	}
	else {
		int x = st[top];
		
		 cout << "Amount of Wins: " << x << endl;
		
	}
}
