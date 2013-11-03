/*
  Exercise 6.1-6 in the textbook
*/

#include <iostream>
#include <cmath>
using namespace std;
void powfun(int, int);  // List data types in the order each input will be received

int main () 
{
	int num, power;
	
	cout << "\nEnter a number: ";
	cin >> num;
	cout << "\nRaise it to what power? ";
	cin >> power;
	powfun(num, power);  // List parameters you want to pass to the function, in the order they'll be received
  
    return 0;

}

void powfun(int number, int power)  // List data type and param name for each parameter passed from main(), in the order they were passed
                     // These params don't have to keep the same name as in main(); they just have to keep the same order
{
	int total;
	
	total = pow(number,power);
	cout << number << " multiplied to the power of " << power << " is " << total << endl;
	
	return;
}
