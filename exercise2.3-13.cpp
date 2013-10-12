/*
  exercise2.3-13.cpp
  This program calculates the total and average of a set of numbers.
*/

#include <iostream>
using namespace std;

int main()
{
    float firstnum, secnum, thirdnum, total, average;
    
    firstnum = 105.62;
    secnum = 89.352;
    thirdnum = 98.67;
    
    total = firstnum + secnum + thirdnum;
    average = total / 3.0;
    cout << "The total is " << total << endl;
    cout << "The average is " << average << endl;
    
    return 0;
}
    
