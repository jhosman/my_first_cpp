/*
  Program 5.4 from textbook.
  This program converts Celsius to Fahrenheit in a list, from 5 to 50 degrees Celsius.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const int MAXCELSIUS = 60;
	const int STARTVAL = -10;
	const int STEPSIZE = 10;
	int celsius;
	double fahren;
	
	cout << "DEGREES    DEGREES\n";
	cout << "CELCIUS   FAHRENHEIT\n";
	cout << "-------   ----------\n";
	
	celsius = STARTVAL;
	
	cout << setiosflags(ios::showpoint) << setiosflags(ios::fixed) 
	     << setprecision(2);
	     
    while (celsius <= MAXCELSIUS)
    {
    	fahren = (9.0/5.0) * celsius + 32.0;
    	cout << setw(4) << celsius
    	     << setw(13) << fahren << endl;
    	celsius = celsius + STEPSIZE;
    }
    
return 0;
}
