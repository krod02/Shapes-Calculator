// File: line.h
// Class: COP 3003, Fall 2022
// Devl: Kevin Rodriguez
// Desc: Line subclass containing needed properties and
//       methods for lines
// --------------------------------------------------------

#ifndef SHAPESPROJECT_LINE_H
#define SHAPESPROJECT_LINE_H

#include "shape.h"
#include "point.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <array>

class Line: public Shape{
public:

    //Constructor
    //-----------------------------------------------------
    Line();
    Line(Point point1, Point point2);

    //Accessors
    //-----------------------------------------------------

    //Methods
    //-----------------------------------------------------
    float calcSlope();
    float calcLength();
    float calcAngle();
    std::string shapeRepresentation();



};



#endif //SHAPESPROJECT_LINE_H
