/*
  Displays a 4x4 box of question marks.
*/

#include <iostream>
using namespace std;

int main()
{
	int x, y;
	
	for (x = 0; x < 4; x++) {   // Outputs 4 rows of question marks
		for (y = 0; y < 4; y++) {  // Singular row of 4 question marks
			cout << "?";
		}
		cout << "\n";   // line break between each row
	}
	
	return 0;
}	
