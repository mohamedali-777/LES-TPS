#ifndef VEHICULE_H
#define VEHICULE_H

#include <string>
#include <iostream>
using namespace std;

class Vehicule {
protected:
    static int numeroSerie;
    int numeroVehicule;
    int annee;
    double prix;

public:
    Vehicule(int annee, double prix);
    virtual void accelerer() = 0;
    void afficher();
};

#endif
