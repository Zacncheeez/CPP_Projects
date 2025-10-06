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

int main() {
  cout << "Lets play TicTacToe" << endl;

  char arr[3][3] = {
    {'.', '.', '.'},
    {'.', '.', '.'},
    {'.', '.', '.'}
  };
  
  char i, j;
  
  for(;;) {
    
  int rowChoice;
  int columnChoice;
  
  cout << "What row? ";
  cin >> rowChoice;

  cout << "What column? ";
  cin >> columnChoice;
  
  cout << "X or O: ";
  cin >> arr[rowChoice][columnChoice];
 
  


  
    cout << "\nThe 2-D Array is:\n";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << "\t" << arr[i][j];
        }
        cout << endl;
    }
  }  
  

  return 0;
}
