#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class rouletteGame
{
public:
	char menuOptions();
	int singleNum();
	int rouletteWheel();
	char getColor(int num);
	char getEvenOdd(int num);
	void printResult(char userType, int num);





};

