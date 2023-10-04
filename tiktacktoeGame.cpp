#include "tiktacktoeGame.h"

void tiktacktoeGame::displayGrid(char grid[])
{
	cout << " ___   ___   ___ " << endl;
	cout << "| " << grid[0] << " |" << " " << "| " << grid[1] << " |" << " " << "| " << grid[2] << " |" << endl;
	cout << "|___| |___| |___| " << endl;
	cout << " ___   ___   ___ " << endl;
	cout << "| " << grid[3] << " |" << " " << "| " << grid[4] << " |" << " " << "| " << grid[5] << " |" << endl;
	cout << "|___| |___| |___| " << endl;
	cout << " ___   ___   ___ " << endl;
	cout << "| " << grid[6] << " |" << " " << "| " << grid[7] << " |" << " " << "| " << grid[8] << " |" << endl;
	cout << "|___| |___| |___| " << endl;
	
}


bool tiktacktoeGame::boxIsEmpty(int cell, char grid[])
{
	if (grid[cell] != ' ')
		return false;
	else
		return true;
}

void tiktacktoeGame::changePlayer(char& turn)
{
	if (turn == 'X')
		turn = 'O';
	else
		turn = 'X';
}

bool tiktacktoeGame::checkIfThree(char turn, char grid[])
{
	if (checkInARow(turn, grid) || checkInColumn(turn, grid) || cehckInDiagonal(turn, grid))
		return true;
	else
		return false;
}

bool tiktacktoeGame::checkInARow(char turn, char grid[])
{
	if ((grid[0] == turn && grid[1] == turn && grid[2] == turn) ||
		(grid[3] == turn && grid[4] == turn && grid[5] == turn) ||
		(grid[6] == turn && grid[7] == turn && grid[8] == turn))
		return true;
	else
		return false;
}

bool tiktacktoeGame::checkInColumn(char turn, char grid[])
{
	if ((grid[0] == turn && grid[3] == turn && grid[6] == turn) ||
		(grid[1] == turn && grid[4] == turn && grid[7] == turn) ||
		(grid[2] == turn && grid[5] == turn && grid[8] == turn))
		return true;
	else
		return false;
}

bool tiktacktoeGame::cehckInDiagonal(char turn, char grid[])
{
	if ((grid[0] == turn && grid[4] == turn && grid[8] == turn) ||
		(grid[2] == turn && grid[4] == turn && grid[6] == turn))
		return true;
	else
		return false;
}

void tiktacktoeGame::noDestroyBoard(Node* head)
{
	Node* tempPtr = head;  // Used to traverse list without destroying head
	cout << "\n List contains: " << endl;
	while (tempPtr != NULL) {
		displayGrid(tempPtr->grid);
		cout << "Move Numer: " << tempPtr->move << endl << endl;
		tempPtr = tempPtr->nextPointer;
	}
	cout << "\n\n";
}
