#include <iostream>
#include <cstdlib>
using namespace std;



int main() {
  cout << "Welcome to guessing game! Guess a number from 1-100" << endl;

  //int num1 = readInt("What is your guess?: ");
  //cout << num1 << endl;

  int answer = 50; 
  int guess;
    
  cout << "What is your guess?: " << endl;
  cin >> guess;	  
  cout << "Your guess is: " << guess << endl;
	  
  if (answer < guess) {
    cout << "Guess is too high" << endl;
  }

  else if (answer > guess) {
    cout << "Guess is too low" << endl;
  }
  else {
    cout << "You win! Congratulations!" << endl;
  }


	  
  return 0;
}
