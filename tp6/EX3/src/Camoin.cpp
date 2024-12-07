#include "Camion.h"

Camion::Camion(int annee, double prix, double chargeMaximale)
    : Vehicule(annee, prix), chargeMaximale(chargeMaximale) {}

void Camion::accelerer() {
    cout << "Je peux atteindre 120km/h." << endl;
}
