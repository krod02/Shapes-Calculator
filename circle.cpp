// File: circle.cpp
// Class: COP 3003, Fall 2022
// Devl: Kevin Rodriguez
// Desc: Circle class .cpp file containing class definitions
// --------------------------------------------------------
#include "circle.h"

//Constructor
//-----------------------------------------------------
Circle::Circle() {
    shapeType = "Circle";
}//end constructor

Circle::Circle(Point point, int radius) {
    shapeType = "Circle";
    pointCollection.push_back(point);
    this->radius = radius;
}//end property constructor

//Accessors
//-----------------------------------------------------
int Circle::getRadius() {
    return radius;
}//end getter
void Circle::setRadius(int r) {
    radius = r;
}//end setter

//Methods
//-----------------------------------------------------
/**
 * calculates diameter of a circle
 * @return calculated diameter
 */
float Circle::calcDiameter() {
    return radius * 2;
}//end calcDiameter

/**
 * calculates circumference of a circle
 * @return calculated circumference
 */
float Circle::calcCircumference() {
    return 2 * M_PI * radius;
}//end calcCircumference

/**
 * calculates area of a circle
 * @return calculated area
 */
float Circle::calcArea() {
    return M_PI * (radius * radius);
}//end calcArea

/**
 * overloaded virtual function from shape class that contains info on the circle
 * @return string of circle info
 */
std::string Circle::shapeRepresentation() {
    std::string retShapeInfo = "\nCircle:\n";

    retShapeInfo = retShapeInfo + "\tCenter: { ";
    for(int i = 0; i < pointCollection.size(); i++){
        retShapeInfo += "(" + std::to_string(pointCollection[i].getX()) + ",";
        retShapeInfo += std::to_string(pointCollection[i].getY()) + ") ";
    }
    retShapeInfo += "}\n \tRadius = " + std::to_string(radius) + "\n";

    //Diameter
    retShapeInfo += "\tDiameter = " + std::to_string(calcDiameter()) + "\n";

    //Circumference
    retShapeInfo += "\tCircumference = " + std::to_string(calcCircumference()) + "\n";

    //Area
    retShapeInfo += "\tArea = " + std::to_string(calcArea()) + "\n";


    return retShapeInfo;
}