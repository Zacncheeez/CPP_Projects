/*
This code is Guessing Game. The code asks the user to guess a number 1-100 and it will tell the user if they are too high or too low. The user will have theirguesses counted and asked if they want to play again.

*/



#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;



int main() {

  for (;;)
    {
  cout << "Welcome to guessing game! Guess a number from 1-100" << endl;

  //int num1 = readInt("What is your guess?: ");
  //cout << num1 << endl;

  
  int guessCount = 1;
  
  srand(time(NULL));
  int answer = rand()% 100; 
  int guess;

  for (;;) {
  
    std::cout << "What is your guess?: " << endl;
    std::cin >> guess;	  
    std::cout << "Your guess is: " << guess << endl;
 
	  
    if (answer < guess) {
      cout << "Guess is too high" << endl;
      guessCount = guessCount += 1;
    }

    else if (answer > guess) {
      cout << "Guess is too low" << endl;
      guessCount = guessCount += 1;
    }
    else if (answer = guess) {
      cout << "You win! Congratulations!" << endl;
      cout << "Guesses: "<< guessCount << endl;
      break;
    }
  }

  char again;
  cout << "Want to play again? (y/n)" << endl;
  cin >> again;
  
  if (again = 'y') {
    continue;
  }

  else {
    break;
  }

  return 0;
  
    }

}
