/*
Zach Tobin
10/2/25

This code represents a 2 Player game of TicTacToe

  
Citations:
1. Digital Ocean - Helped me learn how to make a 2D array with undefined values.
   https://www.digitalocean.com/community/tutorials/two-dimensional-array-in-c-plus-plus
*/


#include <iostream>
#include <algorithm>
#include <cstring>
#include <cctype>

using namespace std;


  bool checkWinner(char arr[4][4], char player) {
    //check rows
    for (int i = 1; i <= 3; i++) {
        if (arr[i][1] == player && arr[i][2] == player && arr[i][3] == player)
            return true;
    }   
    //check columns
    for (int j = 1; j <= 3; j++) {
        if (arr[1][j] == player && arr[2][j] == player && arr[3][j] == player)
            return true;
    }
    //check diagnals
    if (arr[1][1] == player && arr[2][2] == player && arr[3][3] == player) {
        return true;
    }
    if (arr[3][1] == player && arr[2][2] == player && arr[1][3] == player) {
        return true;
    }

    if (arr[1][1] != '.' && arr[1][2] != '.' && arr[1][3] != '.'
	&& arr[2][1] != '.' && arr[2][2] != '.' && arr[2][3] != '.'
	&& arr[3][1] != '.' && arr[3][1] != '.' && arr[3][3] != '.') {
      cout << endl;
      cout << "Tie game" << endl;
      return true;
        }
    
    return false;
  }

int main() {
  
  for(;;) {
  
  cout << "Lets play TicTacToe" << endl;

  char arr[4][4] = {
    {'0', '1', '2', '3'},
    {'1', '.', '.', '.'},
    {'2', '.', '.', '.'},
    {'3', '.', '.', '.'}
  };
  
  char i, j;
  
  
  for(;;) {

  cout << "\nThe Board is:\n";
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cout << "\t" << arr[i][j];
        }
        cout << endl;
    }
    
    
  int rowChoice;
  int columnChoice;
  char currentPlayer;

  cout << "What column? ";
  cin >> columnChoice;
  
  cout << "What row? ";
  cin >> rowChoice;

  cout << "X or O: ";
  cin >> currentPlayer; 
	    
  
    arr[rowChoice][columnChoice] = currentPlayer;
    if (checkWinner(arr, currentPlayer)) {
        cout << "\nThe Board is:\n";
            for (i = 0; i < 4; i++) {
                for (j = 0; j < 4; j++) {
                    cout << "\t" << arr[i][j];
                }
        cout << endl;
    }
        cout << "Player " << currentPlayer << " wins!" << endl;
        break;
     
  }
  }
  
    char again;
        cout << "Want to play again? (y/n)" << endl;
        cin >> again;

        if (again == 'y') {
          continue;
        }

        else {
	  cout << "OK";
          break;
        }

  }  
  
  cout << "Thanks for playing!";
  return 0;
}
