#pragma once
#include <iostream>
using namespace std;

class Node {
public:
	int move;
	char grid[9];
	Node* nextPointer;
};

class tiktacktoeGame
{
public:
	void displayGrid(char grid[]);
	bool boxIsEmpty(int cell, char grid[]);
	void changePlayer(char& turn);
	bool checkIfThree(char turn, char grid[]);
	bool checkInARow(char turn, char grid[]);
	bool checkInColumn(char turn, char grid[]);
	bool cehckInDiagonal(char turn, char grid[]);
	void noDestroyBoard(Node* head);
};

