/*
  Exercise 6.1-4 in the textbook
*/

#include <iostream>
using namespace std;
void mult(double, double);  // List data types in the order each input will be received

int main () 
{
	double num1, num2;
	
	cout << "\nEnter a decimal number: ";
	cin >> num1;
	cout << "\nEnter another decimal number: ";
	cin >> num2;
	mult(num1, num2);  // List parameters you want to pass to the function, in the order they'll be received
  
    return 0;

}

void mult(double firstnum, double secondnum)  // List data type and param name for each parameter passed from main(), in the order they were passed
                     // These params don't have to keep the same name as in main(); they just have to keep the same order
{
	double total;
	
	total = firstnum * secondnum;
	cout << "The total of " << firstnum << " times " << secondnum << " is " << total << endl;
	
	return;
}
