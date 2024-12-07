#include "Personne.h"

Personne::Personne(string nom, int age, string sexe) : nom(nom), age(age), sexe(sexe) {}

string Personne::getNom() {
    return nom;
}

int Personne::getAge() {
    return age;
}

string Personne::getSexe() {
    return sexe;
}

void Personne::setNom(string nom) {
    this->nom = nom;
}

void Personne::setAge(int age) {
    this->age = age;
}

void Personne::setSexe(string sexe) {
    this->sexe = sexe;
}

string Personne::getPersonne() {
    return nom + " " + to_string(age) + " " + sexe;
}
