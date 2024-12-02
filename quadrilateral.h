#include <iostream>
#include <string>
#include "point.h"

#ifndef UNTITLED_QUADRITERAL_H
#define UNTITLED_QUADRITERAL_H

class Quadriteral{
    private:
    Point a;
    Point b;
    Point c;
    Point d;

    double calculateAngle(Point p1, Point p2, Point p3);

    double calculateTheta(Point a, Point b, Point c, Point d);
    
    public:
    Quariteral(Point a, Point b, Point c, Point d);

    Quadriteral(const Quadriteral &other);

    bool equals(Quadriteral &other);

    void flip();

    void move(double x, double y);

    std::string toString();

    double getSurface();

#endif