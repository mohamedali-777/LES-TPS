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
    Etudiant(); // Constructeur par défaut
    Etudiant(const string& nom, int nbrNotes); // Constructeur avec arguments
    Etudiant(const Etudiant& autre); // Constructeur de recopie

    // Destructeur
    ~Etudiant();

    int getMatricule();
    string getNom();
    int getNbrNotes();
    float* getTabNotes();
    void setnbrNote(int nbrNotes);


    // Méthodes
   void afficher() ; // Méthode pour afficher les informations de l'étudiant
    void saisie();
    float moyenne();
    bool admis();
    bool comparer(Etudiant &e1);
};

#endif
