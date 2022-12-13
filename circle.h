// File: circle.h
// Class: COP 3003, Fall 2022
// Devl: Kevin Rodriguez
// Desc: Circle header file containing circle subclass declarations
// --------------------------------------------------------

#ifndef SHAPESPROJECT_CIRCLE_H
#define SHAPESPROJECT_CIRCLE_H

#include "shape.h"
#define _USE_MATH_DEFINES
#include <cmath>

class Circle: public Shape{
private:
    int radius;
public:
    //Constructor
    //-----------------------------------------------------
    Circle();
    Circle(Point point, int radius);

    //Accessors
    //-----------------------------------------------------
    int getRadius();
    void setRadius(int r);

    //Methods
    //-----------------------------------------------------
    float calcDiameter();
    float calcCircumference();
    float calcArea();
    std::string shapeRepresentation();

};


#endif //SHAPESPROJECT_CIRCLE_H
