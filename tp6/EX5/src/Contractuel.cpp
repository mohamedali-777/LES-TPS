#include "Contractuel.h"

Contractuel::Contractuel(string nom, int age, string sexe, string charge, string filiere)
: Enseignant(nom, age, sexe, charge), Etudiant(nom, age, sexe, filiere) {}

string Contractuel::getPersonne() {
    return Enseignant::getPersonne() + " Filière: " + Etudiant::getFiliere();
}
