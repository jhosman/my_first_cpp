/*
  even_or_odd.cpp
  
  This program solves Exercise 4.2-7 in the textbook.
  It takes a number input by the user and tells the user
  if the number is even or odd.
*/

#include <iostream>
using namespace std;
    
int main ()
    {
        int num1;
        
        cout << "Enter a number: ";
        cin >> num1;
        
        if (num1 % 2 > 0)
          cout << "The number " << num1 << " is odd.";
        else 
          cout << "The number " << num1 << " is even.";
        
        return 0;
    } 
