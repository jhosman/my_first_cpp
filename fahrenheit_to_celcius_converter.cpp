/*
  fahrenheit_to_celcius_converter.cpp
  
  This program comes from excercise 3.5 in the textbook. 
  It takes degrees fahrenheit as input, and it outputs degrees
  celcius 
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double fahren, celcius;
    
    const double FACTOR = (5.0 / 9.0);
    
    cout << "Enter a temperature in Fahrenheit: ";
    cin >> fahren;
    celcius = FACTOR * (fahren - 32.0);
    cout << "The equivalent in celcius is: " << celcius << endl;
    
    return 0;
}
    
