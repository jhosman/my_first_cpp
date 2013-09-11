/*
 * storage_size.cpp
 *
 * The output of this program is dependant on the compiler
 * and how much storage it provides for each data type given.
 *
 *  Created on: Sep 9, 2013
 *      Author: jhosman
 */

#include <iostream>
using namespace std;

int main()
{
	cout << "\nData Type  Bytes";
	cout << "\n---------  -----";
	cout << "\nint           " << sizeof(int);
	cout << "\nchar          " << sizeof(char);
	cout << "\nbool          " << sizeof(bool);
	cout << "\nfloat         " << sizeof(float);
	cout << "\ndouble        " << sizeof(double);
	cout << "\nlong double   " << sizeof(long double);
	cout << '\n';

    system("Pause");
	return 0;
}
