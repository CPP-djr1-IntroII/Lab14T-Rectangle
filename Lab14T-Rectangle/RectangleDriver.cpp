//********************************************************************* 
// File name:	 RectangleExample.cpp
// Author:		 DR
// Date:			 
// Class:			 
// Assignment: Rectangle Lab
// Purpose:		 Driver used to test class Rational
// 
//						 TODO #1: a) Uncomment getWidth and compile.
//											b) What is the error and what does it mean?
//											c) Fix the error
//						 TODO #2:	a) Uncomment setWidth & write the correct code
//											b) Did your solution work the first time?
//						 TODO #3:	a) Uncomment the first constructor in the .h
//												 file, write the implementation in
//												 the .cpp file, and test
//						 TODO #4:	a) Do the same for the second constructor
//						 TODO #5:	a) Fill the array of rectangles cRectangles
//												 with rectangles of 1x2, 2x3, 2x4, and so on
//												 for as many rectangles specified in the 
//												 constant NUM_RECTANGLES.
//											b) Write each rectangle to the display using
//												 the function write
//												 HINT: cRectangle.write (cout); works because
//															 cout "is-a" ostream object which I will
//															 get into later.
//						 TODO #6: a) Read a single rectangle from the file into
//												 the variable cRectangle
//												 HINT: cRectangle.read (cin); and
//															 cRectangle.read (inStream); are ways to
//														   read from the keyboard and file
//															 respectively.
//											b) Write the rectangle to the display using
//												 write
//*********************************************************************

#include <iostream>
#include <fstream>
#include "Rectangle.h"

using namespace std;
/**********************************************************************
Function:		  main

Description:	main driver for the rectangle example.
							show how each member function in rectangle can be used.

Parameters:		none

Returned:			exit status
**********************************************************************/

int main () {
	const string FILE_OF_RECTANGLES = "rectangles.txt";
	const unsigned int NUM_RECTANGLES = 5;
	ifstream inStream;
	Rectangle cRectangles[NUM_RECTANGLES];
	Rectangle cRectangle;

	inStream.open (FILE_OF_RECTANGLES);
	if (inStream.fail ()) {
		cout << "Error opening: " << FILE_OF_RECTANGLES;
		exit (EXIT_FAILURE);
	}

	inStream.close ();

	return EXIT_SUCCESS;
}