// File: rectangle.h
// Class: COP 3003, Fall 2022
// Devl: Kevin Rodriguez
// Desc: Rectangle header file containing rectangle subclass declarations
// --------------------------------------------------------

#ifndef SHAPESPROJECT_RECTANGLE_H
#define SHAPESPROJECT_RECTANGLE_H

#include "shape.h"
#include "point.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <array>


class Rectangle: public Shape{
private:
    int width;
    int height;

public:

    //Constructor
    //-----------------------------------------------------
    Rectangle();//default constructor
    Rectangle(Point point, int width, int height);//property constructor

    //Accessors
    //-----------------------------------------------------
    int getWidth();
    void setWidth(int w);

    int getHeight();
    void setHeight(int h);

    //Methods
    //-----------------------------------------------------
    void calcAllPoints();//calculates 3 more points using the first point, width and height
    int calcPerimeter();//calculates perimeter
    int calcArea();//calculate area
    std::string shapeRepresentation();


};


#endif //SHAPESPROJECT_RECTANGLE_H
