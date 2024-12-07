#include "Enseignant.h"

Enseignant::Enseignant(string nom, int age, string sexe, string charge) : Personne(nom, age, sexe), charge(charge) {}

void Enseignant::setCharge(string charge) {
    this->charge = charge;
}

string Enseignant::getCharge() {
    return charge;
}

string Enseignant::getPersonne() {
    return Personne::getPersonne() + " Charge: " + charge;
}
