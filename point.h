#include <iostream>
#include <string>

#ifndef UNTITLED_POINT_H
#define UNTITLED_POINT_H

class Point {
private:
    double x;
    double y;
    
public:
    Point(double x, double y);

    Point(const Point &other);

    bool equals(Point &other);

    void flip();

    void move(double x, double y);

    std::string toString();

    double const getX();

    double const getY();
};


#endif
