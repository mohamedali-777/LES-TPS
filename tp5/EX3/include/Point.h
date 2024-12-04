#ifndef POINT_H
#define POINT_H

#include <cmath>

class Point {
private:
    double x, y;

public:
    Point(double x = 0, double y = 0);
    Point(const Point& p);

    // Affiche les coordonnées du point
    void affiche();

    friend bool comparer(Point& p1, Point& p2);
    friend double distance(Point& p1, Point& p2);
    friend Point milieu(Point& p1, Point& p2);
};

#endif
