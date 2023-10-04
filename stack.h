#pragma once
#include <iostream>
using namespace std;
const int sz = 50;

class stack
{
	int top;

public:
	int st[sz];

	stack();
	void push(int num);	
	void peek();
};

