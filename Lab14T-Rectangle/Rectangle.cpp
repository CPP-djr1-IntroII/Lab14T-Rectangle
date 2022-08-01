//********************************************************************* 
// File name:	 Rectangle.cpp
// Author:		 DR
// Date:			 
// Class:			 
// Assignment: Rectangle Lab
// Purpose:		 Defines each of the function prototypes associated with 
//						 class Rectangle
//*********************************************************************

#include "Rectangle.h"

/**********************************************************************
Function:			setLength

Description:	Set the length of the rectangle

Parameters:		length - the length used to initialize the rectangle

Returned:			none
**********************************************************************/

void Rectangle::setLength (double length) {
	mLength = length;
}

/**********************************************************************
Function:			setWidth

Description:	Set the width of the rectangle

Parameters:		width - the width used to initialize the rectangle

Returned:			none
**********************************************************************/
void setWidth (double width) {
}

/**********************************************************************
Function:			getLength

Description:	Get the length of the rectangle

Parameters:		none

Returned:			the length of a Rectangle
**********************************************************************/

double Rectangle::getLength () const {
	return mLength;
}

/**********************************************************************
Function:			getWidth

Description:	Get the width of the rectangle

Parameters:		none

Returned:			the width of a Rectangle
**********************************************************************/

//double getWidth () const {
//}

/**********************************************************************
Function:			getArea

Description:	Calcuate the area of the rectangle

Parameters:		none

Returned:			the area of a Rectangle
**********************************************************************/

double Rectangle::getArea () const {
	return mLength * mWidth;
}


/**********************************************************************
Function:			getPerimeter

Description:	Calcuate the perimeter of the rectangle

Parameters:		none

Returned:			the perimeter of a Rectangle
**********************************************************************/

double Rectangle::getPerimeter () const {
	return mLength * 2 + mWidth * 2;
}

/**********************************************************************
Function:			write

Description:	Write the Rectangle output to a specific output stream

Parameters:		rcOutStream - stream to write to

Returned:			None
**********************************************************************/

void Rectangle::write (ostream &rcOutStream) const {
	rcOutStream << "Rectangle; Length = " << mLength << "; Width = "
		<< mWidth << "; Area = " << getArea ()
		<< "; Perimeter = " << getPerimeter ();
}

/**********************************************************************
Function:			read

Description:	Read the length and width of a Rectangle from a specific
							input stream

Parameters:		rcOutStream - stream to write to

Returned:			None
**********************************************************************/
void Rectangle::read (istream &rcInStream) {
	rcInStream >> mLength >> mWidth;
}
