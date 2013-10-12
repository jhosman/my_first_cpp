/*
  exercise3.2-5.cpp
  This program calculates the slope of a line connecting 2 points with
  the coordinates (3,7) and (8,12).
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x1, x2, y1, y2, slope;
    
    x1 = 3;
    x2 = 7;
    y1 = 8;
    y2 =12;
    
    slope = (y2 - y1) / (x2 - x1);
    
    cout << "The value of the slope is" << setw(6) 
         << setiosflags(ios::fixed) 
         << setprecision(2) 
         << slope << endl;
    
    return 0;
}
    
