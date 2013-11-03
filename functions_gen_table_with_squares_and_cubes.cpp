/*
  Exercise 6.1-7 from the textbook
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void numTable();  // List data types in the order each input will be received

int main () 
{
	
	numTable();  // List parameters you want to pass to the function, in the order they'll be received
  
    return 0;

}

void numTable()  // List data type and param name for each parameter passed from main(), in the order they were passed
                     // These params don't have to keep the same name as in main(); they just have to keep the same order
{
	const int MAXNUMS = 10;
	int num;
	cout << endl;
	cout << "NUMBER   SQUARE   CUBE\n"
		 << "------   ------   ----\n";
	
	for (num = 1; num <= MAXNUMS; num++)
		cout << setw(3) << num << "       "
		     << setw(3) << num * num << "     "
		     << setw(4) << num * num * num << endl;
	
	return;
}
