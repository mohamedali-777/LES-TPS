#include "Point.h"
#include <iostream>
#include <cmath>

Point::Point(double x, double y) : x(x), y(y) {}

Point::Point(const Point& p) : x(p.x), y(p.y) {}

void Point::affiche() {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

bool comparer(Point& p1, Point& p2) {
    return (p1.x == p2.x && p1.y == p2.y);
}

double distance(Point& p1, Point& p2) {
    return std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2));
}

Point milieu(Point& p1, Point& p2) {
    double mx = (p1.x + p2.x) / 2;
    double my = (p1.y + p2.y) / 2;
    return Point(mx, my);
}
