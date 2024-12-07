#ifndef VOITURE_H
#define VOITURE_H

#include "Vehicule.h"

class Voiture : public Vehicule {
private:
    int nombrePlaces;

public:
    Voiture(int annee, double prix, int nombrePlaces);
    void accelerer();
};

#endif
