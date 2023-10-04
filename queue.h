#pragma once
#include <string>
#include <iostream>
using namespace std;

class queue
{
public:
	void enqueue(string ans);
	void dequeue();

protected:
	string queue[10];
	int n = 10;
	int front = -1;
	int back = -1;
	string ans;
};

