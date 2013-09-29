/*
  car_registration_fee.cpp
  
  From Exercise 4.3-10
  
  This program takes the vehicle year and weight as input. It uses a chart from
  a RMV to calculate the registration fee based on the car's age and weight.
*/

#include <iostream>
#include <iomanip>
using namespace std;
    
int main ()
    {
        int year, weight;
        double fee;
        
        cout << "Please enter year of vehicle: ";
        cin >> year;
        cout << "Please enter weight of vehicle: ";
        cin >> weight;
        
        if (year < 1991) {
          if (weight < 2700) {
            weight = 1;
            fee = 26.50;
            }
          else if (weight <= 3800) {
            weight = 2;
            fee = 35.50;
            }
          else if (weight > 3800) {
            weight = 3;
            fee = 56.50;
            }
        }
        else if (year > 1990 && year < 2000) {
          if (weight < 2700) {
            weight = 4;
            fee = 35.00;
            }
          else if (weight <= 3800) {
            weight = 5;
            fee = 45.50;
            }
          else if (weight > 3800) {
            weight = 6;
            fee = 62.50;
            }
        }
        else if (year >= 2000) {
          if (weight < 3500) {
            weight = 7;
            fee = 49.50;
            }
          else if (weight >= 3500) {
            weight = 8;
            fee = 62.50;
            }
        }
        
        cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2) 
        << "The weight class is " << weight << ".\n" 
        << "The registration fee is $" << fee << endl;
        
        system("Pause");
        return 0;
    } 
