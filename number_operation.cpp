/*
  file name: practice_exercise_4.3.cpp

  This is Practice Exercise 4-3 from Blackboard.
  This program takes user input of two numbers and an operation.
  It completes the selected operation on the two numbers and
  outputs the result.
*/

#include <iostream>
using namespace std;

int main() {
    double num1, num2, total;
    char operation;

    cout << "Please enter two numbers: \n";
    cin >> num1 >> num2;
    cout << "Please enter the symbol of the requested operation: \n";
    cout << "\"+\" (addition)\n";
    cout << "\"-\" (subtraction)\n";
    cout << "\"*\" (multiplication)\n";
    cout << "\"/\" (division)\n";
    cin >> operation;

    switch (operation) {
           case '+':
                total = num1 + num2;
                cout << num1 << " plus " << num2 << " equals " << total << endl;
                break;
           case '-':
                total = num1 - num2;
                cout << num1 << " minus " << num2 << " equals " << total << endl;
                break;
           case '*':
                total = num1 * num2;
                cout << num1 << " times " << num2 << " equals " << total << endl;
                break;
           case '/':
                total = num1 / num2;
                cout << num1 << " divided by " << num2 << " equals " << total << endl;
                break;
           default:
                cout << "Invalid entry. Please try again.";
           }

    return 0;
}
