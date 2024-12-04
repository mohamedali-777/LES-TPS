#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x, y;

public:
    Point(double x = 0, double y = 0);
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);
    void afficher() const;
};

#endif
