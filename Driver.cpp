#include "rouletteGame.h"
#include "stack.h"
#include "queue.h"
#include "arrayList.h"
#include "tiktacktoeGame.h"

#include <string>
#include <iomanip>
#include <iostream>;
#include <string>;
#include <vector>
using namespace std;

int main() {
  
    rouletteGame singlePlayer, playerone, playertwo;
    stack single, one, two;
    queue a;
    arrayList single1, player1, player2;
    tiktacktoeGame b;

    cout << setw(50) << "Welcome to tamiu Casino " << endl;
    cout << setw(50) << "Where we put your entertainment first! " << endl;
    cout << endl;

    //roullete initializing
    int choice, k, v, c, score = 0, score2 = 0;
    string ans;
    int num = 0, cash = 0, turns;
    ///////////////////////

    //tiktacktoe initializing
    char gameBoard[9], userTurn = 'X';
    int move =0, box = 0;

    for (int i = 0; i < 9; i++)
        gameBoard[i] = ' ';

    Node* head = NULL;   // head of linked list 
    Node* tempPtr;
    //////////////////////////////

    
    cout << "Enter 1 for one player or 2 for multiplayer: " << endl;//decides for multiplayer
    cin >> c;

    cout << "Enter Players Information: " << endl;//uses a queue to store players information


    for (int i = 0; i < c; i++) {
        cin.ignore();

        getline(cin, ans);
        a.enqueue(ans); //queue

    }
    

    cout << "1) Play Casino roulette wheel " << endl;
    cout << "2) Play Casino TiktackToe ( *Bonus* only *Multiplayer* ) " << endl;
    cout << "3) exit " << endl;

    do {
        cout << "Enter your choice: " << endl;
        cin >> choice;

        switch (choice) {
        case 1:


            srand(6);
            int unum, snum;
            char color;

            if (c == 2) {
                cout << "Enter the amount of turns per player: " << endl;//used to find how many turns each player goes if multiplayer
                cin >> turns;

                cout << "Player 1 goes first " << endl;

                for (int i = 0; i < turns; i++) { // player 1 goes first
                    while (true) {
                        char choice = playerone.menuOptions();
                        if (choice == 'S' || choice == 's') {// used when input is single number
                            //decison for single number bet
                            unum = playerone.singleNum();
                            //spins the wheel
                            snum = playerone.rouletteWheel();
                            cout << " landed on " << snum << endl;
                            if (unum == snum) {
                                cout << " You WONN!! " << endl;
                                //keeps player score
                                score++;
                                player1.addMoney(10);// adds money to player 1 if won
                            }
                            else {
                                cout << " You lost " << endl;
                            }
                            break;
                        }
                        else if (choice == 'R' || choice == 'r' || choice == 'B' || choice == 'b') { //used when input is red or black
                            //spins the wheel
                            snum = playerone.rouletteWheel();
                            //user color input
                            color = playerone.getColor(snum);
                            //used to see if player won
                            playerone.printResult(color, snum);
                            if ((choice == 'R' || choice == 'r') && color == 'r') {
                                cout << "You WON! " << endl;
                                //keeps player score
                                score++;
                                player1.addMoney(10);// adds money to player 1 if won

                            }
                            else if ((choice == 'B' || choice == 'b') && color == 'b') {
                                cout << "You WON! " << endl;
                                //keeps player score
                                score++;
                                player1.addMoney(10);// adds money to player 1 if won

                            }
                            else {
                                cout << "You LOST! " << endl;
                            }
                            break;
                        }
                        else if (choice == 'E' || choice == 'e') {
                            //spins the wheel
                            snum = playerone.rouletteWheel();
                            char evenOrOdd = playerone.getEvenOdd(snum);
                            //used to see if player won
                            playerone.printResult(evenOrOdd, snum);
                            if ((choice == 'E' || choice == 'e') && evenOrOdd == 'e') {
                                cout << "You Won!" << endl;
                                //keeps player score
                                score++;
                                player1.addMoney(10);// adds money to player 1 if won

                            }
                            else {
                                cout << "You Lost!" << endl;
                            }
                            break;
                        }
                        else if (choice == 'O' || choice == 'o') {
                            //spins the wheel
                            snum = playerone.rouletteWheel();
                            char evenOrOdd = playerone.getEvenOdd(snum);
                            //used to see if player won
                            playerone.printResult(evenOrOdd, snum);
                            if ((choice == 'O' || choice == 'o') && evenOrOdd == 'o') {
                                cout << "You Won!" << endl;
                                //keeps player score
                                score++;
                                player1.addMoney(10);// adds money to player 1 if won

                            }
                            else {
                                cout << "You Lost!" << endl;
                            }
                            break;
                        }
                        else if (choice == 'Q' || choice == 'q') {
                            break;
                        }
                    }

                }
                one.push(score); //stack
                cout << endl;
                one.peek();
                player1.sum();// for money
                cout << endl;

                cout << "Player 2 goes next " << endl;

                for (int i = 0; i < turns; i++) {
                    while (true) {
                        char choice = playerone.menuOptions();
                        if (choice == 'S' || choice == 's') {
                            //decison for single number bet
                            unum = playerone.singleNum();
                            //spins the wheel
                            snum = playerone.rouletteWheel();
                            cout << "and landed on " << snum;
                            if (unum == snum) {
                                cout << " You Won! " << endl;
                                //keeps player score
                                score2++;
                                player2.addMoney(10);// adds money to player 2 if won

                            }
                            else {
                                cout << " You LOST! " << endl;
                            }
                            break;
                        }
                        else if (choice == 'R' || choice == 'r' || choice == 'B' || choice == 'b') {
                            //spins the wheel
                            snum = playerone.rouletteWheel();
                            //user color input
                            color = playerone.getColor(snum);
                            //used to see if player won
                            playerone.printResult(color, snum);
                            if ((choice == 'R' || choice == 'r') && color == 'r') {
                                cout << "You WON! " << endl;
                                //keeps player score
                                score2++;
                                player2.addMoney(10);// adds money to player 2 if won

                            }
                            else if ((choice == 'B' || choice == 'b') && color == 'b') {
                                cout << "You WON! " << endl;
                                //keeps player score
                                score2++;
                                player2.addMoney(10);// adds money to player 2 if won

                            }
                            else {
                                cout << "You LOST! " << endl;
                            }
                            break;
                        }
                        else if (choice == 'E' || choice == 'e') {
                            //spins the wheel
                            snum = playerone.rouletteWheel();
                            char evenOrOdd = playerone.getEvenOdd(snum);
                            //used to see if player won
                            playerone.printResult(evenOrOdd, snum);
                            if ((choice == 'E' || choice == 'e') && evenOrOdd == 'e') {
                                cout << "You Won!" << endl;
                                //keeps player score
                                score2++;
                                player2.addMoney(10);// adds money to player 2 if won

                            }
                            else {
                                cout << "You Lost!" << endl;
                            }
                            break;
                        }
                        else if (choice == 'O' || choice == 'o') {
                            //spins the wheel
                            snum = playerone.rouletteWheel();
                            char evenOrOdd = playerone.getEvenOdd(snum);
                            //used to see if player won
                            playerone.printResult(evenOrOdd, snum);
                            if ((choice == 'O' || choice == 'o') && evenOrOdd == 'o') {
                                cout << "You Won!" << endl;
                                //keeps player score
                                score2++;
                                player2.addMoney(10);// adds money to player 2 if won

                            }
                            else {
                                cout << "You Lost!" << endl;
                            }
                            break;
                        }
                        else if (choice == 'Q' || choice == 'q') {
                            break;
                        }
                    }

                }
                two.push(score2); //stack
                cout << endl;
                two.peek();
                player2.sum();// for money
                cout << endl;

            }
            else {
                while (true) {
                    char choice = singlePlayer.menuOptions();
                    if (choice == 'S' || choice == 's') {
                        //decison for single number bet
                        unum = singlePlayer.singleNum();
                        //spins the wheel
                        snum = singlePlayer.rouletteWheel();
                        cout << "and landed on " << snum;
                        if (unum == snum) {
                            cout << " You Won! " << endl;
                            //keeps player score
                            score++;
                            single1.addMoney(10);// adds money to player if won
                        }
                        else {
                            cout << " You LOST! " << endl;
                        }

                    }
                    else if (choice == 'R' || choice == 'r' || choice == 'B' || choice == 'b') {
                        //spins the wheel
                        snum = singlePlayer.rouletteWheel();
                        //user color input
                        color = singlePlayer.getColor(snum);
                        //used to see if player won
                        singlePlayer.printResult(color, snum);
                        if ((choice == 'R' || choice == 'r') && color == 'r') {
                            cout << "You WON! " << endl;
                            //keeps player score
                            score++;
                            single1.addMoney(10);// adds money to player if won

                        }
                        else if ((choice == 'B' || choice == 'b') && color == 'b') {
                            cout << "You WON! " << endl;
                            //keeps player score
                            score++;
                            single1.addMoney(10);// adds money to player if won

                        }
                        else {
                            cout << "You LOST! " << endl;
                        }

                    }
                    else if (choice == 'E' || choice == 'e') {
                        //spins the wheel
                        snum = singlePlayer.rouletteWheel();
                        char evenOrOdd = singlePlayer.getEvenOdd(snum);
                        //used to see if player won
                        singlePlayer.printResult(evenOrOdd, snum);
                        if ((choice == 'E' || choice == 'e') && evenOrOdd == 'e') {
                            cout << "You Won!" << endl;
                            //keeps player score
                            score++;
                            single1.addMoney(10);// adds money to player if won

                        }
                        else {
                            cout << "You Lost!" << endl;
                        }

                    }
                    else if (choice == 'O' || choice == 'o') {
                        //spins the wheel
                        snum = singlePlayer.rouletteWheel();
                        char evenOrOdd = singlePlayer.getEvenOdd(snum);
                        //used to see if player won
                        singlePlayer.printResult(evenOrOdd, snum);
                        if ((choice == 'O' || choice == 'o') && evenOrOdd == 'o') {
                            cout << "You Won!" << endl;
                            //keeps player score
                            score++;
                            single1.addMoney(10);// adds money to player if won

                        }
                        else {
                            cout << "You Lost!" << endl;
                        }

                    }
                    else if (choice == 'Q' || choice == 'q') {
                        break;
                    }
                }
                single.push(score); //stack
                cout << endl;
                single.peek();
                single1.sum();// for money
                cout << endl;
            }

        case 2:
            //displays board
            b.displayGrid(gameBoard);
            while (move < 9) {
                b.noDestroyBoard(head);
                cout << "-----------------------------" << endl;
                cout << "Select Box to move: " << move << endl;
                cout << "Turn: " << userTurn << " make your move to a box: ";
                cin >> box;

                //checks if range is inbetween 1-9
                if (box >= 1 && box <= 9) {
                    if (b.boxIsEmpty(box - 1, gameBoard)) { //checking if empty
                        //stored to an array
                        gameBoard[box - 1] = userTurn;
                        //checking if there are three in a row or column or diagonal

                        if (b.checkIfThree(userTurn, gameBoard)) {
                            b.displayGrid(gameBoard);
                            cout << "Player " << userTurn << " You win!!";
                            cin >> box;
                            return 1;
                        }

                        //creating a new Node
                        tempPtr = new Node;
                        // Insert at head 
                        tempPtr->move = move; //copying move
                        //copying the elements of the board to the board in the node
                        for (int i = 0; i < 9; i++) {
                            tempPtr->grid[i] = gameBoard[i];
                        }
                        tempPtr->nextPointer = head; //the pointer to first node
                        head = tempPtr; //points to new node
                        move++;
                        //changing to next player
                        b.changePlayer(userTurn);

                    }
                    else {// checks if box is full
                        cout << "Sorry box " << box << " is in use. " << endl;
                    }
                }
                else {
                    cout << "Sorry box" << box << " is out of range. " << endl;
                }
            }
            cout << "Game finished in tie.";
            cin >> box;
            return 1;
            break;


        default:
            break;
        }
    }while (choice != 3);
  
       
    return 0;
}
