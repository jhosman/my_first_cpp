/*
  sum_of_nums_1_to_100.cpp
  This program calculates the sum of the numbers from 1 to 100.
*/

#include <iostream>
using namespace std;

int main()
{
    int sum, n, a, d;
    
    n = 100;
    a = 1;
    d = 1;
    
    sum = (n / 2) * (2 * a + (n - 1) * d);
    cout << "The numbers 1 through 100 added together equal " << sum;
    
    system("Pause");
    return 0;
}
    
