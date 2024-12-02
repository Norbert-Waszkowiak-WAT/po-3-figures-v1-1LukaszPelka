#include <iostream>
#include <string>
#include "point.h"

#ifndef UNTITLED_TRIANGLE_H
#define UNTITLED_TRIANGLE_H

class Triangle{
    private:
    Point a;
    Point b;
    Point c;

    public:
    Triangle(Point a, Point b, Point c);

    Triangle(const Triangle &other);

    bool equals(Triangle &other);

    void flip();

    void move(double x, double y);

    std::string toString();

    double getSurface();

};


#endif
