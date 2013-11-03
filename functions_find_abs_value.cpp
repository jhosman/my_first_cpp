/*
  This is Exercise 6.1-3 from the textbook
*/

#include <iostream>
#include <cmath>
using namespace std;
void findAbs(int);  // List data types in the order each input will be received

int main () 
{
	int num;
	
	cout << "\nEnter a positive or negative number: ";
	cin >> num;
	findAbs(num);  // List parameters you want to pass to the function, in the order they'll be received
  
    return 0;

}

void findAbs(int x)  // List data type and param name for each parameter passed from main(), in the order they were passed
                     // These params don't have to keep the same name as in main(); they just have to keep the same order
{
	int absolute;  // Don't need to give data types for input params here, since they're given in function header
	
	absolute = abs(x);
	cout << "Tha absolute value of " << x << " is " << absolute << endl;
	
	return;
}
