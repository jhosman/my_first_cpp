/*
  exercise2.3-8.cpp
  This program stores dimensions and calculates a perimeter.
*/

#include <iostream>
using namespace std;

int main()
{
    int length=16, width=18;
    int perimeter = 2 * (length + width);
    
    cout << "The perimeter of a " 
         << length << " by " << width << " room is " 
         << perimeter 
         << "." << endl;
    
    system("Pause");
    return 0;
} 
