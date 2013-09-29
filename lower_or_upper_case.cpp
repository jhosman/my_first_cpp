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
        
        cout << "Enter an upper or lowercase letter: ";
        cin >> letter;
        
        if (letter > 'a' && letter < 'z')
          cout << "Letter is lowercase.";
        
        if (letter > 'A' && letter < 'z')
          cout << "Letter is uppercase.";
        
        system("Pause");
        return 0;
    } 
