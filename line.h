#include <iostream>
#include <string>
#include "point.h"

#ifndef UNTITLED_LINE_H
#define UNTITLED_LINE_H

class Line{
    private:
    Point a;
    Point b;
    
    public:
    Line(Point a, Point b);

    Line(const Line &other);

    bool equals(Line &other);

    void flip();

    void move(double x, double y);

    std::string toString();

};

#endif