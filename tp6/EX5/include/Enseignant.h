#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H
#include "Personne.h"

class Enseignant : public Personne {
protected:
    string charge;
public:
    Enseignant(string nom, int age, string sexe, string charge);
    void setCharge(string charge);
    string getCharge();
    string getPersonne() override;
};

#endif
