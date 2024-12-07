#ifndef VECTEUR_H
#define VECTEUR_H
#include <iostream>
using namespace std;

class Vecteur {
protected:
    double x;
    double y;

public:
    Vecteur();
    Vecteur(double x, double y);
    void afficher() const;
    void deplacer(double dx, double dy);
};

class Vecteur3D : public Vecteur {
private:
    double z;

public:
    // Constructeurs
    Vecteur3D();
    Vecteur3D(double x, double y, double z);
    void afficher() const;
    void deplacer(double dx, double dy, double dz);
};

#endif
