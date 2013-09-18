/*
  exercise2.3-11.cpp
  Correct this program so it calculates the correct average
*/

#include <iostream>
using namespace std;

int main()
{
    int num1 = 15;
    int num2 = 18;
    float total, average;
    
    total = num1 + num2;
    average = total / 2.0;
    cout << "The average of " << num1 << " and " << num2 << " is " << average << endl;
    
    system("Pause");
    return 0;
}
