#ifndef ETUDIANT_H
#define ETUDIANT_H
#include "Personne.h"

class Etudiant : public Personne {
protected:
    string filiere;
public:
    Etudiant(string nom, int age, string sexe, string filiere);
    void setFiliere(string filiere);
    string getFiliere();
    string getPersonne() override;
};

#endif
