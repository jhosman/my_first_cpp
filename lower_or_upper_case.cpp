/*
  lower_or_upper_case.cpp
  
  This is the solution to Exercise 4.2-14 in the textbook.
  It takes user input of a single upper or lower case letter
  and reports back the case of the letter.
*/

#include <iostream>
using namespace std;
    
int main ()
    {
        char letter;
        int place;
        
        
        cout << "Enter an upper or lowercase letter: ";
        cin >> letter;
        
        if (letter > 'a' && letter < 'z') {
          place = (letter - 'a') + 1;
          cout << "Letter is lowercase. It is the " 
          << place << " letter of the alphabet.";
        }
        
        if (letter > 'A' && letter < 'z') {
          place = (letter - 'A') + 1;
          cout << "Letter is uppercase. It is the "
          << place << " letter of the alphabet.";
          }
        
        return 0;
    } 
