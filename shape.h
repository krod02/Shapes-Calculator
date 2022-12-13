// File: shape.h
// Class: COP 3003, Fall 2022
// Devl: Kevin Rodriguez
// Desc: Shape base class containing common properties and
//       methods for all shapes
// --------------------------------------------------------

#include "point.h"
#include <vector>
#include <string>


#ifndef SHAPESPROJECT_SHAPE_H
#define SHAPESPROJECT_SHAPE_H

class Shape{
protected:
    std::vector<Point> pointCollection;
    std::string shapeType;

public:

    //Constructor
    //-----------------------------------------------------
    Shape();

    //Accessors
    //-----------------------------------------------------
    std::string getShape();
    void setShapeType(std::string newShapeType);

    void setPointCollection(Point point);

    //Methods
    //-----------------------------------------------------
    virtual std::string shapeRepresentation();
};


#endif //SHAPESPROJECT_SHAPE_H
