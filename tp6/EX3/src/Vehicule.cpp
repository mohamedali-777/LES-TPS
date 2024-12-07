#include "Vehicule.h"

int Vehicule::numeroSerie = 1;
Vehicule::Vehicule(int annee, double prix) : annee(annee), prix(prix) {
    numeroVehicule = numeroSerie;
    numeroSerie++;

    if (numeroSerie > 10000) {
        numeroSerie = 1;
    }
}
void Vehicule::afficher() {
    cout << "Matricule: " << numeroVehicule << " | Année: " << annee << " | Prix: " << prix << "DT" << endl;
}
