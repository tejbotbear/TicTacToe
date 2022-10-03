/*
Tej Hiremath
This program allows the user to play TicTacToe in the terminal window.
date
*/

#include<iostream>
using namespace std;
void Turn(char Board[4][4], int i, int j);

void printBoard(char Board[4][4], int i, int j) {
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      cout<<"\t"<<Board[i][j];
    }
    cout<<endl;
  }
  Turn(Board, i, j);
}

void Turn(char Board[4][4], int i, int j) {
  bool XTurn = true;
  bool EndGame = true;
  bool ValidTurn = false;
  bool Printed = false;
  char Column = ' ';
  char Row = ' ';
  do {
    if (XTurn == true) {
      cout << "It is the X players turn." << endl;
      do {
	cout << "Enter what column you would like your input to go in." << endl;
	cin >> Column;
	cout << Column << endl;
	if (Column != '1' && Column != '2' && Column != '3') {
	  cout << "Not a valid input." << endl;
	}
	else {
	  cout << "Enter what row you would like your input to go in. ('a', 'b', 'c')" << endl;
	  cin >> Row;
	  cout << Row << endl;
	  if (Row != 'a' && Row != 'b' && Row != 'c') {
	    cout << "Not a valid input." << endl;
	  }
	  else {
	    if (Column == '1') {
	     j = 1;
	    }
	    else if (Column == '2') {
	      j = 2;
	    }
	    else {
	      j = 3;
	    }
	    if (Row == 'a') {
	      i = 1;
	    }
	    else if (Row == 'b') {
	      i = 2;
	    }
	    else {
	      i = 3;
	    }
	    Board[i][j] = 'x';
	    printBoard(Board, i, j);
	    Printed = true;
	    XTurn = false;
	    ValidTurn = true; 
	  }cout << "Move is X" << Printed << XTurn << ValidTurn << endl;
	} 
      } while (!(ValidTurn == true && XTurn == false && Printed == true));
    }
    else { // O PLAYERS TURN
      cout << "It is the O players turn." << endl;
            do {
	cout << "Enter what column you would like your input to go in." << endl;
	cin >> Column;
	if (Column != '1' && Column != '2' && Column != '3') {
	  cout << "Not a valid input." << endl;
	}
	else {
	  cout << "Enter what row you would like your input to go in. ('a', 'b', 'c')" << endl;
	  cin >> Row;
	  if (Row != 'a' && Row != 'b' && Row != 'c') {
	    cout << "Not a valid input." << endl;
	  }
	  else {
	    if (Column == '1') {
	     j = 1;
	    }
	    else if (Column == '2') {
	      j = 2;
	    }
	    else {
	      j = 3;
	    }
	    if (Row == 'a') {
	      i = 1;
	    }
	    else if (Row == 'b') {
	      i = 2;
	    }
	    else {
	      j = 3;
	    }
	    printBoard(Board, i, j);
	    Board[i][j] = 'o';
	    Printed = true;
	    XTurn = true;
	    ValidTurn = true; 
	  }
	}
      } while (ValidTurn == true || XTurn == false || Printed == true);
    }
  } while (EndGame == false);
    Printed = false;
    printBoard(Board, i, j);
}

int main() {  

  int i = 0;
  int j = 0;

  char Board[4][4] = {
    { ' ', '1', '2', '3' },
    { 'a', ' ', ' ', ' ' },
    { 'b', ' ', ' ', ' ' },
    { 'c', ' ', ' ', ' ' }
     } ;
  printBoard(Board, i, j);
  Turn(Board, i, j);
}
