#include "Cercle.h"
#include <cmath>
#include <iostream>
using namespace std;

Cercle::Cercle(double rayon, const Point& centre) : rayon(rayon), centre(centre) {}
Cercle::Cercle(double rayon, double x, double y) : rayon(rayon), centre(x, y) {}

double Cercle::getRayon() const { return rayon; }
Point Cercle::getCentre() const { return centre; }

void Cercle::setRayon(double rayon) { this->rayon = rayon; }

void Cercle::translater(double dx, double dy) {
    centre.setX(centre.getX() + dx);
    centre.setY(centre.getY() + dy);
}

double Cercle::surface() const {
    return M_PI * rayon * rayon;
}

double Cercle::perimetre() const {
    return 2 * M_PI * rayon;
}

void Cercle::afficher() const {
    cout << "Cercle de centre ";
    centre.afficher();
    cout << " et de rayon " << rayon << endl;
}

bool Cercle::estEgal(const Cercle& autre) const {
    return (rayon == autre.rayon) && (centre.getX() == autre.centre.getX()) && (centre.getY() == autre.centre.getY());
}

bool Cercle::contient(const Point& p) const {
    double distance = sqrt(pow(p.getX() - centre.getX(), 2) + pow(p.getY() - centre.getY(), 2));
    return distance <= rayon;
}
