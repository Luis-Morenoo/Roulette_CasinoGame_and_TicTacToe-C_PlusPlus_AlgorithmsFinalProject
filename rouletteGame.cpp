#include "rouletteGame.h"

char rouletteGame::menuOptions()
{
    char choice;
    cout << "What bet type will you like to place ? " << endl;

    cout << "(S = number(single), B = black, R = red, O = odd, E = even, Q = exit the game): ";
    while (true) {
        cin >> choice;
        if (choice != 'S' && choice != 's' && choice != 'R' && choice != 'r' && choice != 'B' && choice != 'b' && choice != 'E' && choice != 'e' && choice != 'O' && choice != 'o' && choice != 'Q' && choice != 'q') {
            cout << "Invalid! ";
        }
        else {
            return choice;
        }
    }
}

int rouletteGame::singleNum()
{
    int num; 
    cout << "What number bet (0-36)? ";
    while (true) {
        cin >> num;
        if (num < 0 || num > 36) {
            cout << "invalid! " << endl;
        }
        else {
            return num;
        }
    }
}

int rouletteGame::rouletteWheel()
{
    int random;
    random = rand() % (37);
    cout << "The wheel goes around and around.... " << endl;
    return random;
}

char rouletteGame::getColor(int num)
{
    char color;
    if (num == 0) {
        color = 'g';
    }
    else if ((num >= 1 && num <= 10) || (num >= 19 && num <= 28)) {
        if (num % 2 == 0) {
            color = 'b';
        }
        else if (num % 2 != 0) {
            color = 'r';
        }
    }
    else if ((num >= 11 && num <= 18) || (num >= 29 && num <= 36)) {
        if (num % 2 == 0) {
            color = 'r';
        }
        else if (num % 2 != 0) {
            color = 'b';
        }
    }
    return color;
}

char rouletteGame::getEvenOdd(int num)
{
    char choice;
    if (num == 0) {
        choice = 'z';
    }
    else if (num % 2 == 0) {
        choice = 'e';
    }
    else if (num % 2 != 0) {
        choice = '0';
    }
    return choice;
}

void rouletteGame::printResult(char userType, int num)
{
    if (userType == 'r') {
        cout << "ball landed on Red [" << num << "]";
        cout << endl;
    }
    else if (userType == 'b') {
        cout << "ball landed on Black [" << num << "]";
        cout << endl;

    }
    else if (userType == 'g') {
        cout << "ball landed on Green [" << num << "]";
        cout << endl;

    }
    else if (userType == 'e') {
        cout << "ball landed on Even [] ";
        cout << endl;

    }
    else if (userType == 'o') {
        cout << "ball landed on Odd [] ";
        cout << endl;

    }
    else if (userType == 'z') {
        cout << "ball landed on Zero [] ";
        cout << endl;

    }
}
