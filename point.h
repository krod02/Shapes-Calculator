// File: point.h
// Class: COP 3003, Fall 2022
// Devl: Kevin Rodriguez
// Desc: Point class containing properties of points that
//       will be used for the shapes
// --------------------------------------------------------

#ifndef SHAPESPROJECT_POINT_H
#define SHAPESPROJECT_POINT_H

class Point{
private:
    int x;
    int y;

public:
    //Constructor
    //-----------------------------------------------------
    Point();
    Point(int x, int y);//property constructor

    //Accessors
    //-----------------------------------------------------

    //setter and getter for x
    int getX ();
    void setX (int x);

    //setter and getter for y
    int getY();
    void setY (int y);


};

#endif //SHAPESPROJECT_POINT_H
