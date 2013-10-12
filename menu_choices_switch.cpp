/*
  file name: practice_exercise_4.2.cpp

  This is Practice Exercise 4-2 from Blackboard.
  This program functions the same as 4.1, but it uses a switch statement.
  It takes user input of one of four menu choices and responds
  with an appropriate question.
*/

#include <iostream>
using namespace std;

int main() {
    int entree;

    cout << "Please select the number of the entree you'd like to order: \n";
    cout << "1. Lentil soup\n";
    cout << "2. Kale salad with goat cheese, walnuts, and avocado\n";
    cout << "3. Mushroom lasagne with home grown tomatoes\n";
    cout << "4. Corn tortilla tacos with beans and rice\n";
    cin >> entree;

    switch (entree) {
           case 1:
                cout << "Would you like carrots in your lentil soup?" << endl;
                break;
           case 2:
                cout << "Would you like viniagrette dressing?" << endl;
                break;
           case 3:
                cout << "Would you like mozzerella or cheddar cheese?" << endl;
                break;
           case 4:
                cout << "Would you like black or pinto beans?" << endl;
                break;
           default:
                cout << "Invalid entry. Please try again." << endl;
                break;
                }

    return 0;
}
