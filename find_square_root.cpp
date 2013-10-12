/*
  find_square_root.cpp
  
  This program is from exercise 3.4 in the textbook.
  It takes a number as input and outputs its square root.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double number, squareRoot;
    
    cout << "Enter a number to calculate its square root: ";
    cin >> number;
    squareRoot = sqrt(number);
    cout << "The square root of " << number << "is " << squareRoot << endl;
    
    return 0;
}
    
