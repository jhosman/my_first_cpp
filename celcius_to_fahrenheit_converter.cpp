/*
  celcius_to_fahrenheit_converter.cpp
  
  This program comes from excercise 3.4 in the textbook. 
  It takes degrees celcius as input, and it outputs degrees
  fahrenheit
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double fahr, celcius;
    
    cout << "Enter the temperature in degrees celcius: ";
    cin >> celcius;
    fahr = (9.0 / 5.0) * celcius + 32.0;
    cout << "The temperature in fahrenheit is " << fahr << endl;
    
    return 0;
}
    
