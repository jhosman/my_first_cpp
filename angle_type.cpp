/*
  angle_type.cpp
  
  From Exercise 4.3-1 in textbook.
  This program takes an angle as input and tells the user what type of angle it is.
*/

#include <iostream>
using namespace std;
    
int main ()
    {
        double angle;
        
        cout << "Enter an angle: ";
        cin >> angle; 
        
        if (angle < 90)
          cout << "It's an acute angle!";
        else if (angle > 90)
          cout << "It's an obtuse angle!";
        else if (angle == 90)
          cout << "It's a right angle!";
        
        return 0;
    } 
