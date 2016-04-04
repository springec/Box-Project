/*****************************************************************************
** Author: Caroline Springer
** Date: October 14, 2015
** Description: This is the header file for the class Box. In this file, the
class is defined, along with its variables and functions.
*****************************************************************************/

#ifndef BOX_HPP
#define BOX_HPP
#include<iostream>

using namespace std;


//define class Box
class Box
{
//define private variables
private:
	double height;
	double width; 
	double length;

//define public functions
public:
	Box();
	Box(double, double, double);

	void setHeight(double);
	double getHeight();

	void setWidth(double);
	double getWidth();

	void setLength(double);
	double getLength();

	double getVolume();
	double getSurfaceArea();



};

#endif