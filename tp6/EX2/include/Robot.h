#ifndef ROBOT_H
#define ROBOT_H

#include <string>
#include <iostream>
#include <cmath>
using namespace std;

class Robot {
protected:
    string nom;
    double x, y;
    bool estMort;

public:
    Robot(string nom, double x, double y);
    void deplacer(double dx, double dy);
    void afficher();
    bool getEstMort();
    void setEstMort(bool mort);
    double getX();
    double getY();
    string getNom();
};

#endif
