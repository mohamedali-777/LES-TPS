#include "Etudiant.h"

Etudiant::Etudiant(string nom, int age, string sexe, string filiere) : Personne(nom, age, sexe), filiere(filiere) {}

void Etudiant::setFiliere(string filiere) {
    this->filiere = filiere;
}

string Etudiant::getFiliere() {
    return filiere;
}

string Etudiant::getPersonne() {
    return Personne::getPersonne() + " Filière: " + filiere;
}
