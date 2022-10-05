/*
Tej Hiremath
This program allows the user to play TicTacToe in the terminal window.
date
*/

#include<iostream>
using namespace std;
void Turn(char Board[4][4], int i, int j, int XWins, int OWins, bool XWom, bool OWon, bool EndGame);

void checkWin(char Board[4][4], int i, int j, int XWins, int OWins, bool XWon, bool OWon, bool EndGame) {
  if (Board[1][1] == 'x' && Board[2][1] == 'x' && Board[3][1] == 'x') { //left column all X
    XWins = XWins + 1;
    cout << "X wins!! X has won " << XWins << " times! Play again? (y/n)" << endl;
    XWon = true;
  }
  else if (Board[1][2] == 'x' && Board[2][2] == 'x' && Board[3][2] == 'x') { // middle column all X
    XWins = XWins + 1;
    cout << "X wins! X has won " << XWins << " times! Play again? (y/n)" << endl;
    XWon = true;
  }
  else if (Board[1][3] == 'x' && Board[2][3] == 'x' && Board[3][3] == 'x') { // right column all X
    XWins = XWins + 1;
    cout << "X wins! X has won " << XWins << " times! Play again? (y/n)" << endl;
    XWon = true;
  }
  else if (Board[1][1] == 'x' && Board[1][2] == 'x' && Board[1][3] == 'x') { // top row all X
    XWins = XWins + 1;
    cout << "X wins! X has won " << XWins << " times! Play again? (y/n)" << endl;
    XWon = true;
  }
  else if (Board[2][1] == 'x' && Board[2][2] == 'x' && Board[2][3] == 'x') { // middle row all X
    XWins = XWins + 1;
    cout << "X wins! X has won " << XWins << " times! Play again? (y/n)" << endl;
    XWon = true;
  }
  else if (Board[3][1] == 'x' && Board[3][2] == 'x' && Board[3][3] == 'x') { // bottom row all X
    XWins = XWins + 1;
    cout << "X wins! X has won " << XWins << " times! Play again? (y/n)" << endl;
    XWon = true;
  }
  else if (Board[1][1] == 'x' && Board[2][2] == 'x' && Board[3][3] == 'x') { // top left to bottom right all X
    XWins = XWins + 1;
    cout << "X wins! X has won " << XWins << " times! Play again? (y/n)" << endl;
    XWon = true;
  }
  else if (Board[1][3] == 'x' && Board[2][2] == 'x' && Board[3][1] == 'x') { // bottom left to top right all X
    XWins = XWins + 1;
    cout << "X wins! X has won " << XWins << " times! Play again? (y/n)" << endl;
    XWon = true;
  }
  else if (Board[1][1] == 'o' && Board[2][1] == 'o' && Board[3][1] == 'o') { //left column all O
    OWins = OWins + 1;
    cout << "O wins! O has won " << OWins << " times! Play again? (y/n)" << endl;
    OWon = true;
  }
  else if (Board[1][2] == 'o' && Board[2][2] == 'o' && Board[3][2] == 'o') { // middle column all O
    OWins = OWins + 1;
    cout << "O wins! O has won " << OWins << " times! Play again? (y/n)" << endl;
    OWon = true;
  }
  else if (Board[1][3] == 'o' && Board[2][3] == 'o' && Board[3][3] == 'o') { // right column all O
    OWins = OWins + 1;
    cout << "O wins! O has won " << OWins << " times! Play again? (y/n)" << endl;
    OWon = true;
  }
  else if (Board[1][1] == 'o' && Board[1][2] == 'o' && Board[1][3] == 'o') { // top row all O
    OWins = OWins + 1;
    cout << "O wins! O has won " << OWins << " times! Play again? (y/n)" << endl;
    OWon = true;
  }
  else if (Board[2][1] == 'o' && Board[2][2] == 'o' && Board[2][3] == 'o') { // middle row all O
    OWins = OWins + 1;
    cout << "O wins! O has won " << OWins << " times! Play again? (y/n)" << endl;
    OWon = true;
  }
  else if (Board[3][1] == 'o' && Board[3][2] == 'o' && Board[3][3] == 'o') { // bottom row all O
    OWins = OWins + 1;
    cout << "O wins O has won " << OWins << " times! Play again? (y/n)" << endl;
    OWon = true;
  }
  else if (Board[1][1] == 'o' && Board[2][2] == 'o' && Board[3][3] == 'o') { // top left to bottom right all O
    OWins = OWins + 1;
    cout << "O wins O has won " << OWins << " times! Play again? (y/n)" << endl;
    OWon = true;
  }
  else if (Board[1][3] == 'o' && Board[2][2] == 'o' && Board[3][1] == 'o') { // bottom left to top right all O
    OWins = OWins + 1;
    cout << "O wins O has won " << OWins << " times! Play again? (y/n)" << endl;
    OWon = true;
  }
}

void printBoard(char Board[4][4], int i, int j) {
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      cout<<"\t"<<Board[i][j];
    }
    cout<<endl;
  }
  //Turn(Board, i, j);
}

void Turn(char Board[4][4], int i, int j, int XWins, int OWins, bool XWon, bool OWon, bool EndGame) {
  bool XTurn = true;
  EndGame = false;
  bool ValidTurn = false;
  bool Printed = false;
  char Column = ' ';
  char Row = ' ';
  do {
    if (XTurn == true) {
      do {
	cout << "(X TURN) Enter what column you would like your input to go in. ('1', '2', '3')" << endl;
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
	      i = 3;
	    }
	    if (Board[i][j] == 'x' || Board[i][j] == 'o') {
	      cout << "It seems that this spot on the board is already occupied. Please choose another spot." << endl;
	      ValidTurn = false; 
	    }
	    else {
	      Board[i][j] = 'x';
	      XTurn = false;
	      printBoard(Board, i, j);
	      checkWin(Board, i, j, XWins, OWins, XWon, OWon, EndGame);
	      Printed = true;
	      ValidTurn = true;
	    }
	  }
	} 
      } while (!(ValidTurn == true && XTurn == false && Printed == true));
    }
    else { // O PLAYERS TURN
       do {
	cout << "(O TURN) Enter what column you would like your input to go in. ('1', '2', '3')" << endl;
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
	      i = 3;
	    }
	    if (Board[i][j] == 'x' || Board[i][j] == 'o') {
	      cout << "It seems that this spot on the board is already occupied. Please choose another spot." << endl;
	      ValidTurn = false; 
	    }
	    else {
	      Board[i][j] = 'o';
	      XTurn = true;
	      printBoard(Board, i, j);
	      checkWin(Board, i, j, XWins, OWins, XWon, OWon, EndGame);
	      Printed = true;
	      ValidTurn = true;
	    }
	  }
	} 
       } while (!(ValidTurn == true && XTurn == true && Printed == true));
    }
  } while (EndGame == false);
    Printed = false;
    printBoard(Board, i, j);
}

void int ReDo() {
  int i = 0;
  int j = 0;
  bool XWon = false;
  bool OWon = false;
  bool EndGame = false;
  char Board[4][4] = {
    { ' ', '1', '2', '3' },
    { 'a', ' ', ' ', ' ' },
    { 'b', ' ', ' ', ' ' },
    { 'c', ' ', ' ', ' ' }
     } ;
  printBoard(Board, i, j);
  Turn(Board, i, j, XWins, OWins, XWon, OWon, EndGame);
}

int main() {  
  int XWins = 0;
  int OWins = 0;
  int Ties = 0;
  ReDo();
}
