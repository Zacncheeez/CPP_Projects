#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;



int main() {
  cout << "Welcome to guessing game! Guess a number from 1-100" << endl;

  //int num1 = readInt("What is your guess?: ");
  //cout << num1 << endl;

  
  int guessCount = 0;
  
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
  

  return 0;
}
