// File: shapesProject.cpp
// Class: COP 3003, Fall 2022
// Devl: Kevin Rodriguez
// Desc: Shapes project that allows user to calculate details about
//       that shape as well as storing the shapes into a collection.
//------------------------------------------------------------------
#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <string>
#include <vector>
#include <memory>
#include "shape.h"
#include "point.h"
#include "line.h"
#include "rectangle.h"
#include "circle.h"


//Types
enum MenuSelection{
    LINE,
    RECTANGLE,
    CIRCLE,
    PRINT,
    EXIT,
};


//Function proto-types (Declarations)
//---------------------------------------------------------
void printMenu(std::array<std::string, 5> menu);
Point newPoint();
std::unique_ptr<Line> newLine();
std::unique_ptr<Circle>newCircle();
std::unique_ptr<Rectangle>newRectangle();
void printShapeCollection(std::vector<std::shared_ptr<Shape>> shapeCollection);

int main() {
    //vector holding pointer to shape class
    std::vector<std::shared_ptr<Shape>> shapeCollection;

    //array containing menu options
     const std::array<std::string, 5> menu = {"Line", "Rectangle", "Circle", "Print", "Exit"};

    int userSelection;
    do{
        printMenu(menu);//printing menu

        std::cin >> userSelection;

        switch(userSelection - 1){
            case LINE:
                shapeCollection.push_back(newLine());
                break;

            case RECTANGLE:
                shapeCollection.push_back(newRectangle());
                break;

            case CIRCLE:
                shapeCollection.push_back(newCircle());
                break;

            case PRINT:
                printShapeCollection(shapeCollection);
                break;

            case EXIT:
                exit(1);
        }


    }while(userSelection !=  5);

    return 0;
}

//Function Definitions
//---------------------------------------------------------
/**
 * function prints menu options
 * @param menu array containing strings of menu items
 */
void printMenu(std::array<std::string, 5> menu){
    std::cout << "\nEnter corresponding number:\n";
    for(int i = 0; i < 5; i++){
        std::cout << "      " << i + 1 << ". " + menu[i] << std::endl;
    }//end of loop
    std::cout << "      > ";
}//end printMenu

/**
 * function creates a new point of Point class instance
 * @return a point of Point instance
 */
Point newPoint(){
    std::cout << "\nEnter a point (x space y enter):";

    //getting points from user
    int x, y;
    std::cin >> x >> y;

    //saving user points in variable of instance Point and returning it
    Point retPoint;
    retPoint.setX(x);
    retPoint.setY(y);

    return retPoint;
}//end newPoint

/**
 * function creates a pointer to a line of Line instance
 * @return a pointer to line
 */
std::unique_ptr<Line> newLine(){
    std::cout << "Enter two points for a line..." << std::endl;

    Point point1 = newPoint();
    Point point2 = newPoint();

    std::unique_ptr<Line> line(new Line(point1, point2));

    return line;
}//end newLine

/**
 * function creates a pointer to a rectangle of Rectangle instance
 * @return a pointer to rectangle
 */
std::unique_ptr<Rectangle>newRectangle(){
    std::cout << "Enter top left point of a rectangle..." << std::endl;
    Point point1 = newPoint();

    int width, height;
    std::cout << "\nEnter width of the rectangle:";
    std::cin >> width;
    std::cout << "\nEnter height of the rectangle:";
    std::cin >> height;

    std::unique_ptr<Rectangle>rectangle (new Rectangle(point1, width, height));

    return rectangle;
}//end newRectangle

/**
 * function creates a pointer to a circle of Circle instance
 * @return a pointer to circle
 */
std::unique_ptr<Circle>newCircle(){
    std::cout << "Enter center point of a circle..." << std::endl;
    Point centerPoint = newPoint();

    int radius;
    std::cout << "\nEnter a radius of the circle:";
    std::cin >> radius;

    std::unique_ptr<Circle>circle (new Circle(centerPoint, radius));

    return circle;
}//end newCirlce

/**
 * prints pointers of Shape stored in shapeCollection vector
 * @param shapeCollection vector of type Shape*
 */
void printShapeCollection(std::vector<std::shared_ptr<Shape>> shapeCollection){
    std::cout << "Shapes...\n";
    std::vector<std::shared_ptr<Shape>>::iterator iter;
    for(iter = shapeCollection.begin(); iter != shapeCollection.end(); iter++){
        std::cout << (*iter)->shapeRepresentation();
    }//end shapeRepresentation for loop
}//end printShapeCollection
