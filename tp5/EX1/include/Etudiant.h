#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <string>
using namespace std;

class Etudiant {
private:
    static int compteurMatricule;
    int matricule;
    string nom;
    int nbrNotes;
    float* tabNotes;

public:
    // Constructeurs
    Etudiant(); // Constructeur par d�faut
    Etudiant(const string& nom, int nbrNotes); // Constructeur avec arguments
    Etudiant(const Etudiant& autre); // Constructeur de recopie

    // Destructeur
    ~Etudiant();

    int getMatricule();
    string getNom();
    int getNbrNotes();
    float* getTabNotes();
    void setnbrNote(int nbrNotes);


    // M�thodes
   void afficher() ; // M�thode pour afficher les informations de l'�tudiant
    void saisie();
    float moyenne();
    bool admis();
    bool comparer(Etudiant &e1);
};

#endif
