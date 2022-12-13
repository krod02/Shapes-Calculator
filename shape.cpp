// File: shape.cpp
// Class: COP 3003, Fall 2022
// Devl: Kevin Rodriguez
// Desc: Shape base class containing executable code
//       for shape class
// --------------------------------------------------------

#include "shape.h"

//Constructors
//---------------------------------------------------------
Shape::Shape() {
    shapeType = "";
}

//Accessors
//---------------------------------------------------------
std::string Shape::getShape() {return shapeType;}
void Shape::setShapeType(std::string newShapeType) {
    shapeType = newShapeType;
}

void Shape::setPointCollection(Point point) {
    pointCollection.push_back(point);
}

//Methods
//---------------------------------------------------------
/**
 * default shapeRepresentation function
 * @return empty string
 */
std::string Shape::shapeRepresentation() {
    return std::string();
}
