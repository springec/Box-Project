/*****************************************************************************
** Author: Caroline Springer
** Date: October 14, 2015
** Description: This is the function file for the class Box. In this file, the 
   functions for the class are written. Functions include a function to
   calculate the volume and a function to calculate the surface area of
   the box.
*****************************************************************************/

#include "Box.hpp"

//default constructor, all dimensions are 1.0
Box::Box()
{
	setHeight(1.0);
	setWidth(1.0);
	setLength(1.0);
}

//constructor
Box::Box(double h, double w, double l)
{
	setHeight(h);
	setWidth(w);
	setLength(l);
}

//get and set functions
void Box::setHeight(double h)
{
	if (h >= 0.0)
		height = h;
	else {
		height = 1.0;
		cout << "Invalid height. Using a default value of 1.0" << endl;
	}
}

void Box::setWidth(double w)
{
	if (w >= 0.0)
		width = w;
	else {
		width = 1.0;
		cout << "Invalid width. Using a default value of 1.0" << endl;
	}
}

void Box::setLength(double l)
{
	if (l >= 0.0)
		length = l;
	else {
		length = 1.0;
		cout << "Invalid length. Using a default value of 1.0" << endl;
	}
}

double Box::getHeight()
{
	return height;
}

double Box::getWidth()
{
	return width;
}

double Box::getLength()
{
	return length;
}

//function to determine volume of the box
double Box::getVolume()
{
	return height*width*length;
}

//function to determine surface area of the box
double Box::getSurfaceArea()
{
	return 2 * (height*width + height*length + width*length);
}