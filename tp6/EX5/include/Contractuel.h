#ifndef CONTRACTUEL_H
#define CONTRACTUEL_H
#include "Enseignant.h"
#include "Etudiant.h"

class Contractuel : public Enseignant, public Etudiant {
public:
    Contractuel(string nom, int age, string sexe, string charge, string filiere);
    string getPersonne() override;
};

#endif
