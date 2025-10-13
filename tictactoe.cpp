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
    
    //checks for a tie
    if (arr[1][1] != '.' && arr[1][2] != '.' && arr[1][3] != '.' && arr[2][1] != '.' && arr[2][2] != '.' && arr[2][3] != '.' && arr[3][1] != '.' && arr[3][1] != '.' && arr[3][3] != '.') {
      cout << endl;
      cout << "TIE GAME";
      return true;
        }

    return false;
  }

int main() {

  for(;;) {

  cout << "Lets play TicTacToe" << endl;
    //creates board
  char arr[4][4] = {
    {'0', '1', '2', '3'},
    {'1', '.', '.', '.'},
    {'2', '.', '.', '.'},
    {'3', '.', '.', '.'}
  };

  char i, j;
  
  for(;;) {
    //prints out current board
  cout << "\nThe Board is:\n";
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cout << "\t" << arr[i][j];
        }
        cout << endl;
    }

    //player move
  int rowChoice;
  int columnChoice;
  char currentPlayer;

  cout << "What column? ";
  cin >> columnChoice;

  cout << "What row? ";
  cin >> rowChoice;

  cout << "X or O: ";
  cin >> currentPlayer;


//ends game, prints final board, and displays winner
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
    //asks user to play again
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



