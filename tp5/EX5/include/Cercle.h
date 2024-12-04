#ifndef CERCLE_H
#define CERCLE_H

#include "Point.h"

class Cercle {
private:
    double rayon;
    Point centre;

public:
    Cercle(double rayon, const Point& centre);
    Cercle(double rayon, double x, double y);

    double getRayon() const;
    Point getCentre() const;
    void setRayon(double rayon);
    void translater(double dx, double dy);
    double surface() const;
    double perimetre() const;
    void afficher() const;
    bool estEgal(const Cercle& autre) const;
    bool contient(const Point& p) const;
};

#endif
