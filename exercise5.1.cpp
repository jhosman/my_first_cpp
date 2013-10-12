/*
	Exercise 5.1 from textbook.
	This program outputs a sequential list of numbers between 
	2 to 10 in increments of 2.
*/

#include <iostream>
using namespace std;

int main()
{
	int count;
	
	count = 2;
	while (count <= 10)
	{
		cout << count << " ";
		count += 2;
	}
	
	return 0;
}
