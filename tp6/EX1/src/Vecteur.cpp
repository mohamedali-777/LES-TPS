#include "Vecteur.h"

Vecteur::Vecteur() :x(0),y(0) { }

Vecteur::Vecteur(double x,double y) :x(x),y(y) { }

void Vecteur::afficher() const {
    cout <<"("<<x<<" , "<<y<<")"<< endl;
}

void Vecteur::deplacer(double dx, double dy) {
    x += dx;
    y += dy;
}

// Implémentation de Vecteur3D
Vecteur3D::Vecteur3D() : Vecteur(), z(0) { }
Vecteur3D::Vecteur3D(double x, double y, double z) : Vecteur(x, y),z(z) { }

void Vecteur3D::afficher() const {
    cout <<"("<<x<<" , "<<y<<" , "<<z<<")"<< endl;
}

void Vecteur3D::deplacer(double dx, double dy, double dz) {
    Vecteur::deplacer(dx, dy);
    z += dz;
}
