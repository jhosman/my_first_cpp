/*
  practice_exercise_3.1.cpp

  This program asks the user to enter their age and then displays their
  entry in both octal and hex years.
  
   
*/

#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "How old are you?" << endl;
    cin >> age;
    cout << showbase << oct << "You are " << age << " octal years old.\n";
    cout << showbase << hex << "You are " << age << " hex years old.\n";

    system("Pause");
    return 0;
}
