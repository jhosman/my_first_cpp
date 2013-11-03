/*
  This is Program 6.2 from the textbook
*/

#include <iostream>
using namespace std;
void findMax(int, int);  // The function prototype

int main () 
{
	int firstnum, secnum;
	
	cout << "\nEnter a number: ";
	cin >> firstnum;
	cout << "\nGreat! Please enter a second number: ";
	cin >> secnum;
	
	findMax(firstnum, secnum);  // Function is called here
   
    return 0;

}

// This whole section below is the function definition
void findMax(int x, int y)  // The function header
{
	int maxnum;
	
	if (x >= y)
	  maxnum = x;
	else 
	  maxnum = y;
	
	cout << "\nThe maximum of the two numbers is " << maxnum << endl;
	
	return;
}
