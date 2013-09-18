/*
  exercise2.3-10.cpp
  This program calculates the total of two numbers and their average.
*/

#include <iostream>
using namespace std;

int main()
{
    int num1=16, num2=18;
    int total, average;
    
    total = num1 + num2;
    average = total / 2.0;
    
    cout << "The total of " << num1 << " plus " << num2 << " is " << total << endl;
    cout << "The average of " << num1 << " and " << num2 << " is " << average << endl;
    
    system("Pause");
    return 0;
}
