/*
  file name: practice_exercise_4.1.cpp

  This is Practice Exercise 4-1 from Blackboard.
  This program takes user input of one of four menu choices and responds
  with an appropriate question.
*/

#include <iostream>
using namespace std;

int main() {
    int entree;

    cout << "Please select the number of the entree you'd like to order: \n";
    cout << "1. Lentil soup\n";
    cout << "2. Kale salad with goat cheese, walnuts, and avocado\n";
    cout << "3. Mushroom lasagne with heirloom tomatoes\n";
    cout << "4. Corn tortilla tacos with beans and rice\n";
    cin >> entree;

    if (entree == 1)
      cout << "Would you like carrots in your lentil soup?" << endl;
    else if (entree == 2)
      cout << "Would you like viniagrette dressing?" << endl;
    else if (entree == 3)
      cout << "Would you like mozzerella or cheddar cheese?" << endl;
    else if (entree == 4)
      cout << "Would you like black or pinto beans?" << endl;
    else
      cout << "Invalid entry. Please try again." << endl;

    return 0;
}
