/*
Tej Hiremath
This program allows the user to play TicTacToe in the terminal window.
date
*/
#include <stdlib.h>
#include <iostream>
using namespace std;
void Turn(char Board[4][4], int i, int j, int& X, int& O, int& T, bool& END);
void ReDo(int& X, int& O, int& T);

void checkWin(char Board[4][4], int i, int j, int& X, int& O, int& T, bool& END) {

  char PlayAgain = ' ';
  if (Board[1][1] == 'x' && Board[2][1] == 'x' && Board[3][1] == 'x') { //left column all X
    X = X + 1;
    cout << "X wins! X has won " << X  << " times."<< endl;
    cout << "O has won " << O << " times." << endl;
    cout << "A tie has occoured " << T << " times." << endl;
    cout << "Play again? (y/n)" << endl;
    cin >> PlayAgain;
    if (PlayAgain == 'y') {
      ReDo(X, O, T);
    }
    else {
      END = true;
      exit(0);
    }
  }
  else if (Board[1][2] == 'x' && Board[2][2] == 'x' && Board[3][2] == 'x') { // middle column all X
    X = X + 1;
    cout << "X wins! X has won " << X << " times."<< endl;
    cout << "O has won " << O << " times." << endl;
    cout << "A tie has occoured " << T << " times." << endl;
    cout << "Play again? (y/n)" << endl;
    cin >> PlayAgain;
    if (PlayAgain == 'y') {
      ReDo(X, O, T);
    }
    else {
      END = true;
      exit(0);
    }
  }
  else if (Board[1][3] == 'x' && Board[2][3] == 'x' && Board[3][3] == 'x') { // right column all X
    X = X + 1;
    cout << "X wins! X has won " << X << " times." << endl;
    cout << "O has won " << O << " times." << endl;
    cout << "A tie has occoured " << T << " times." << endl;
    cout << "Play again? (y/n)" << endl;
    cin >> PlayAgain;
    if (PlayAgain == 'y') {
      ReDo(X, O, T);
    }
    else {
      END = true;
      exit(0);
    }
  }
  else if (Board[1][1] == 'x' && Board[1][2] == 'x' && Board[1][3] == 'x') { // top row all X
    X = X + 1;
    cout << "X wins! X has won " << X << " times." endl;
    cout << "O has won " << O << " times." << endl;
    cout << "A tie has occoured " << T << " times." << endl;
    cout << "Play again? (y/n)" << endl;
    cin >> PlayAgain;
    if (PlayAgain == 'y') {
      ReDo(X, O, T);
     }
    else {
      END = true;
      exit(0);
    }
  }
  else if (Board[2][1] == 'x' && Board[2][2] == 'x' && Board[2][3] == 'x') { // middle row all X
    X = X + 1;
    cout << "X wins! X has won " << X << " times." << endl;
    cout << "O has won " << O << " times." << endl;
    cout << "A tie has occoured " << T << " times." << endl;
    cout << "Play again? (y/n)" << endl;
    cin >> PlayAgain;
    if (PlayAgain == 'y') {
      ReDo(X, O, T);
    }
    else {
      END = true;
      exit(0);
    }
  }
  else if (Board[3][1] == 'x' && Board[3][2] == 'x' && Board[3][3] == 'x') { // bottom row all X
    X = X + 1;
    cout << "X wins! X has won " << X << " times." << endl;
    cout << "O has won " << O << " times." << endl;
    cout << "A tie has occoured " << T << " times." << endl;
    cout << "Play again? (y/n)" << endl;
    cin >> PlayAgain;
    if (PlayAgain == 'y') {
      ReDo(X, O, T);
    }
    else {
      END = true;
      exit(0);
    }
  }
  else if (Board[1][1] == 'x' && Board[2][2] == 'x' && Board[3][3] == 'x') { // top left to bottom right all X
    X = X + 1;
    cout << "X wins! X has won " << X << " times." <<endl;
    cout << "O has won " << O << " times." << endl;
    cout << "A tie has occoured " << T << " times." << endl;
    cout << "Play again? (y/n)" << endl;
    cin >> PlayAgain;
    if (PlayAgain == 'y') {
      ReDo(X, O, T);
    }
    else {
      END = true;
      exit(0);
    }
  }
  else if (Board[1][3] == 'x' && Board[2][2] == 'x' && Board[3][1] == 'x') { // bottom left to top right all X
    X = X + 1;
    cout << "X wins! X has won " << X << " times." << endl;
    cout << "O has won " << O << " times." << endl;
    cout << "A tie has occoured " << T << " times." << endl;
    cout << "Play again? (y/n)" << endl;
    cin >> PlayAgain;
    if (PlayAgain == 'y') {
      ReDo(X, O, T);
    }
    else {
      END = true;
      exit(0);
    }
  }
  else if (Board[1][1] == 'o' && Board[2][1] == 'o' && Board[3][1] == 'o') { //left column all O
    O = O + 1;
    cout << "O wins! O has won " << O << " times." << endl;
    cout << "X has won " << X << " times." << endl;
    cout << "A tie has occoured " << T << " times." << endl;
    cout << "Play again? (y/n)" << endl;
    cin >> PlayAgain;
    if (PlayAgain == 'y') {
      ReDo(X, O, T);
    }
    else {
      END = true;
      exit(0);
    }
  }
  else if (Board[1][2] == 'o' && Board[2][2] == 'o' && Board[3][2] == 'o') { // middle column all O
    O = O + 1;
    cout << "O wins! O has won " << O << " times." << endl;
    cout << "X has won " << X << " times." << endl;
    cout << "A tie has occoured " << T << " times." << endl;
    cout << "Play again? (y/n)" << endl;
    cin >> PlayAgain;
    if (PlayAgain == 'y') {
      ReDo(X, O, T);
    }
    else {
      END = true;
      exit(0);
    }
  }
  else if (Board[1][3] == 'o' && Board[2][3] == 'o' && Board[3][3] == 'o') { // right column all O
    O = O + 1;
    cout << "O wins! O has won " << O << " times." << endl;
    cout << "X has won " << X << " times." << endl;
    cout << "A tie has occoured " << T << " times." << endl;
    cout << "Play again? (y/n)" << endl;
    if (PlayAgain == 'y') {
      ReDo(X, O, T);
    }
    else {
      END = true;
      exit(0);
    }
  }
  else if (Board[1][1] == 'o' && Board[1][2] == 'o' && Board[1][3] == 'o') { // top row all O
    O = O + 1;
    cout << "O wins! O has won " << O << " times." << endl;
    cout << "X has won " << X << " times." << endl;
    cout << "A tie has occoured " << T << " times." << endl;
    cout << "Play again? (y/n)" << endl;
    cin >> PlayAgain;
    if (PlayAgain == 'y') {
      ReDo(X, O, T);
    }
    else {
      END = true;
      exit(0);
    }
  }
  else if (Board[2][1] == 'o' && Board[2][2] == 'o' && Board[2][3] == 'o') { // middle row all O
    O = O + 1;
    cout << "O wins! O has won " << O << " times." << endl;
    cout << "X has won " << X << " times." << endl;
    cout << "A tie has occoured " << T << " times." << endl;
    cout << "Play again? (y/n)" << endl;
    cin >> PlayAgain;
    if (PlayAgain == 'y') {
      ReDo(X, O, T);
    }
    else {
      END = true;
      exit(0);
    }
  }
  else if (Board[3][1] == 'o' && Board[3][2] == 'o' && Board[3][3] == 'o') { // bottom row all O
    O = O + 1;
    cout << "O wins! O has won " << O << " times." << endl;
    cout << "X has won " << X << " times." << endl;
    cout << "A tie has occoured " << T << " times." << endl;
    cout << "Play again? (y/n)" << endl;
    cin >> PlayAgain;
    if (PlayAgain == 'y') {
      ReDo(X, O, T);
    }
    else {
      END = true;
      exit(0);
    }
  }
  else if (Board[1][1] == 'o' && Board[2][2] == 'o' && Board[3][3] == 'o') { // top left to bottom right all O
    O = O + 1;
    cout << "O wins! O has won " << O << " times." << endl;
    cout << "X has won " << X << " times." << endl;
    cout << "A tie has occoured " << T << " times." << endl;
    cout << "Play again? (y/n)" << endl;
    cin >> PlayAgain;
    if (PlayAgain == 'y') {
      ReDo(X, O, T);
    }
    else {
      END = true;
      exit(0);
    }
  }
  else if (Board[1][3] == 'o' && Board[2][2] == 'o' && Board[3][1] == 'o') { // bottom left to top right all O
    O = O + 1;
    cout << "O wins! O has won " << O << " times." << endl;
    cout << "X has won " << X << " times." << endl;
    cout << "A tie has occoured " << T << " times." << endl;
    cout << "Play again? (y/n)" << endl;
    cin >> PlayAgain;
    if (PlayAgain == 'y') {
      ReDo(X, O, T);
    }
    else {
      END = true;
      exit(0);
    }
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

void Turn(char Board[4][4], int i, int j, int& X, int& O, int& T, bool& END) {
  bool XTurn = true;
  bool ValidTurn = false;
  bool Printed = false;
  char Column = ' ';
  char Row = ' ';
  //EndGame = false;

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
	      checkWin(Board, i, j, X, O, T, END);
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
	      Printed = true;
	      ValidTurn = true;
	      checkWin(Board, i, j, X, O, T, END);
	    }
	  }
	} 
      } while (!(ValidTurn == true && XTurn == true && Printed == true));
    }
  } while (END == false);
    Printed = false;
    printBoard(Board, i, j);
}

int main() {  
  int XWins = 0;
  int& X = XWins;
  int OWins = 0;
  int& O = OWins;
  int Ties = 0;
  int& T = Ties;
  ReDo(X, O, T);
}

void ReDo(int& X, int& O, int& T) {
  int i = 0;
  int j = 0;
  bool EndGame = false;
  bool& END = EndGame;
  char Board[4][4] = {
    { ' ', '1', '2', '3' },
    { 'a', ' ', ' ', ' ' },
    { 'b', ' ', ' ', ' ' },
    { 'c', ' ', ' ', ' ' }
     } ;
  printBoard(Board, i, j);
  Turn(Board, i, j, X, O, T, END);
}
