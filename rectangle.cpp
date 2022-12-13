// File: rectangle.cpp
// Class: COP 3003, Fall 2022
// Devl: Kevin Rodriguez
// Desc: Rectangle class .cpp file containing class definitions
// --------------------------------------------------------

#include "rectangle.h"

//Constructor
//-----------------------------------------------------
Rectangle::Rectangle() {
    shapeType = "Rectangle";
}//default constructor

Rectangle::Rectangle(Point point, int width, int height) {
    shapeType = "Rectangle";
    pointCollection.push_back(point);
    this->width = width;
    this->height = height;
}//property constructor

//Accessors
//-----------------------------------------------------
int Rectangle::getWidth() {
    return width;
}
void Rectangle::setWidth(int w) {
    width = w;
}

int Rectangle::getHeight() {
    return height;
}
void Rectangle::setHeight(int h) {
    height = h;
}

//methods
//-----------------------------------------------------
/**
 * calculates all points of a rectangle using one point
 */
void Rectangle::calcAllPoints() {
    int originalX, originalY;

    originalX = pointCollection[0].getX();
    originalY = pointCollection[0].getY();

    int newXPoint = originalX + width;
    int newYPoint = originalY + height;

    Point point2 = Point(newXPoint, originalY);    //new point with new x point and original y point
    Point point3 = Point(newXPoint, newYPoint);    //new point with new x point and new y point
    Point point4 = Point(originalX, newYPoint);    //new point with original x point and new y point

    pointCollection.push_back(point2);
    pointCollection.push_back(point3);
    pointCollection.push_back(point4);

}//end calcAllPoints

/**
 * calculates perimeter of a rectangle
 * @return calculated perimeter
 */
int Rectangle::calcPerimeter() {
    int perimeter = 2 * (width + height);
    return perimeter;
}//end calcPerimeter

/**
 * calculates area of a rectangle
 * @return calculated area
 */
int Rectangle::calcArea() {
    int area = width * height;
    return area;
}//end calcArea

/**
 * overloaded virtual function from shape class that contains info on the rectangle
 * @return string of circle info
 */
std::string Rectangle::shapeRepresentation() {
    calcAllPoints();//calculating all points

    std::string retShapeInfo = "\nRectangle:\n";
    retShapeInfo += "\tWidth = " + std::to_string(width) + "\n" + "\tHeight = " + std::to_string(height) + "\n";

    retShapeInfo = retShapeInfo + "\tPoints: { ";
    for(int i = 0; i < pointCollection.size(); i++){
        retShapeInfo += "(" + std::to_string(pointCollection[i].getX()) + ",";
        retShapeInfo += std::to_string(pointCollection[i].getY()) + ") ";
    }
    retShapeInfo += "}\n";

    //Perimeter
    retShapeInfo += "\tPerimeter = " + std::to_string(calcPerimeter()) + "\n";

    //Area
    retShapeInfo += "\tArea = " + std::to_string(calcArea()) + "\n";

    return retShapeInfo;
}//end shapeRepresentation


