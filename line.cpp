// File: line.cpp
// Class: COP 3003, Fall 2022
// Devl: Kevin Rodriguez
// Desc: Line subclass containing executable code for
//       line class
// --------------------------------------------------------

#include "shape.h"
#include "line.h"


//Constructors
//---------------------------------------------------------
Line::Line() {
    shapeType = "Line";
}

Line::Line(Point point1, Point point2) {
    shapeType = "Line";
    pointCollection.push_back(point1);
    pointCollection.push_back(point2);
}//end of property constructor



//Accessors
//---------------------------------------------------------


//Methods
//---------------------------------------------------------
/**
 * calculates slope of line
 * @return slope of type float
 */
float Line::calcSlope() {
    float calculatedSlope;

    //x and y of point1
   int x1 = pointCollection[0].getX();
   int y1 = pointCollection[0].getY();

   //x and y of point2
   int x2 = pointCollection[1].getX();
   int y2 = pointCollection[1].getY();

   calculatedSlope = (y2 - y1) / (x2 - x1);

   return calculatedSlope;
}

/**
 * calculates length between two points on line
 * @return length of type float
 */
float Line::calcLength() {
    double calculatedLength;

    //x and y of point1
    int x1 = pointCollection[0].getX();
    int y1 = pointCollection[0].getY();

    //x and y of point2
    int x2 = pointCollection[1].getX();
    int y2 = pointCollection[1].getY();

    calculatedLength = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    return calculatedLength;
}

/**
 * calculates angle of a line
 * @return angle of type float
 */
float Line::calcAngle() {
    float calculatedAngle;

    //x and y of point1
    int x1 = pointCollection[0].getX();
    int y1 = pointCollection[0].getY();

    //x and y of point2
    int x2 = pointCollection[1].getX();
    int y2 = pointCollection[1].getY();

    calculatedAngle = atan2(y2 - y1, x2 - x1)  * (180/M_PI);

    return calculatedAngle;
}

/**
 * overloaded virtual function from shape class that contains info on the line
 * @return string of line info
 */
std::string Line::shapeRepresentation(){
    std::string retShapeInfo = "\nLine:\n";

    //points
    retShapeInfo = retShapeInfo + "\tPoints: { ";
    for(int i = 0; i < pointCollection.size(); i++){
        retShapeInfo = retShapeInfo + "(" + std::to_string(pointCollection[i].getX()) + ",";
        retShapeInfo = retShapeInfo + std::to_string(pointCollection[i].getY()) + ") ";
    }
    retShapeInfo = retShapeInfo + "}\n";

    //length
    retShapeInfo = retShapeInfo + "\tLength = " + std::to_string(calcLength()) + "\n";

    //slope
    retShapeInfo = retShapeInfo + "\tSlope = " + std::to_string(calcSlope()) + "\n";

    //angle
    retShapeInfo = retShapeInfo + "\tAngle = " + std::to_string(calcAngle()) + "\n";

    return retShapeInfo;
}

