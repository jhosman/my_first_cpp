// File Name: practice_exercise_1.cpp
// Written by: Jessica Hosman
// Description: This program outputs the text "Hello World!"
// Challenges: Remembering the correct include and using header; 
//             Remembering the direction the cout arrows point.
// Time Spent: 15 minutes
// Given Input: (3 sets)         Expected Output: (3 corresponding sets)
// --------------------          -------------------------
// 1) This program has no input
// 2)
// 3)
// Revision History
// Date:        Revised By:     Action:
// ------------------------------------------------------------------
// mm/dd/yy    (your initials)  (what you did to the code)

#include <iostream> // Preprocessor command that inserts the iostream file from the C++ standard library.
using namespace std; // Tells the compiler that the iostream file is located in the std namespace

// int tells the compiler that an integer data type will be returned by the function.
// Main function that drives the other functions. This function begins all C++ programs.
int main() 
{
 cout << "Hello World!"; // cout sends data to the standard output display device (usually the screen)
 
 system("Pause"); // Stops program from closing window, so I can view program output
 return 0;   
} // Curly brace closes out the function's statement
