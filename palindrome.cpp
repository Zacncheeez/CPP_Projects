/*
9/26/25
Zach Tobin

This code is designed to test wether a line of text is a palindrome or not. The code
strips the text of punctuation, spaces, and capitals, and if the text is exactly the
same written backwords as forwards it prints that it is a palindrome.

Citations:
1.  Google AI. Used to turn upper case text into lower case.

*/


#include <iostream>
#include <algorithm> // Required for std::reverse
#include <cstring>   // Required for strlen
#include <cctype>

using namespace std;


int main() {
    cout << "What is the text?: " << endl;
    char myText[80];
    cin.getline(myText, 80);
    
    char cleanText[80];
    int j = 0;
    int count = 0;
    
    for (int i = 0; i < strlen(myText); i++) {
        // From Google AI. Converts each character to lowercase, remove spaces, and remove punctuation.
        char ch = static_cast<char>(tolower(static_cast<unsigned char>(myText[i])));
        
        if (isspace(static_cast<unsigned char>(ch)) || ispunct(static_cast<unsigned char>(ch))) {
            count++;
            continue; // Skip spaces and punctuation
        }

        cleanText[j++] = ch; // Add to cleanText if valid
    }
    
    cleanText[j] = '\0';

    char reversed[80];
    strcpy(reversed, cleanText);
    reverse(reversed, reversed + strlen(reversed));

    
    cout << "Original array: " << cleanText << endl;
    cout << "Reversed array: " << reversed << endl;

    if (strcmp(cleanText, reversed) == 0) {
      cout << "Text is a palindrome!" << endl;
    }
    else {
      cout << "Text is not a palindrome!" << endl;
    }
    
    return 0;
}
