#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>
using namespace std;

class Personne {
protected:
    string nom;
    int age;
    string sexe;
public:
    Personne(string nom, int age, string sexe);
    string getNom();
    int getAge();
    string getSexe();
    void setNom(string nom);
    void setAge(int age);
    void setSexe(string sexe);
    virtual string getPersonne();
};

#endif
