// File: point.cpp
// Class: COP 3003, Fall 2022
// Devl: Kevin Rodriguez
// Desc: Point class source file containing executable code
//       for point class-
// --------------------------------------------------------

#include "point.h"

//Constructors
//---------------------------------------------------------
Point::Point() {
    x = 0;
    y = 0;
}//end of constructor

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}//end of property constructor


//Accessors
//---------------------------------------------------------

//For x
int Point::getX() {return x;}
void Point::setX(int x) {
    this->x = x;
}

//For y
int Point::getY() {return y;}
void Point::setY(int y) {
    this->y = y;
}




