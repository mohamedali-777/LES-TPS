#include "Etudiant.h"
#include <iostream>
using namespace std;


int Etudiant::compteurMatricule = 0;

// Constructeur par défaut
Etudiant::Etudiant()
    : matricule(++compteurMatricule), nom("Inconnu"), nbrNotes(0), tabNotes(nullptr) {}

// Constructeur avec arguments
Etudiant::Etudiant(const string& nom, int nbrNotes)
    : matricule(++compteurMatricule), nom(nom), nbrNotes(nbrNotes), tabNotes(new float[nbrNotes]) {

}

// Constructeur de recopie
Etudiant::Etudiant(const Etudiant& autre)
    : matricule(++compteurMatricule), nom(autre.nom), nbrNotes(autre.nbrNotes), tabNotes(new float[autre.nbrNotes]) {
    for (int i = 0; i < nbrNotes; i++) {
        tabNotes[i] = autre.tabNotes[i];
    }
}

// Destructeur
Etudiant::~Etudiant() {
    delete[] tabNotes;
}



//getteur
int Etudiant::getMatricule()
{
    return matricule;
}
string Etudiant::getNom()
{
    return nom;
}
float* Etudiant::getTabNotes()
{
   return  tabNotes;
}

//setteur
void Etudiant::setnbrNote(int nouveauNbrNotes)
{
    if (tabNotes != nullptr) {
        delete[] tabNotes; // Libère la mémoire du tableau précédent
    }
    nbrNotes = nouveauNbrNotes;
}
void Etudiant::saisie()
{
    for (int i=0;i<nbrNotes;i++){
        cout<<"donner la note de la "<<i+1<<" eme matiere :";
        cin>>tabNotes[i];
    }
}
void Etudiant::afficher()  {
    cout << "Matricule : " << matricule << endl;
    cout << "Nom : " << nom << endl;
    cout << "Nombre de notes : " << nbrNotes << endl;
    cout << "Notes : ";
    for (int i = 0; i < nbrNotes; i++) {
        cout << tabNotes[i] << " ";
    }
    cout << endl;
}

float Etudiant::moyenne()
{
    float m=0;
    for(int i=0;i<nbrNotes;i++)
      m+=tabNotes[i];
    if(m>0)
      return m/nbrNotes;
    else
        return 0;

}

bool Etudiant::admis()
{
    return moyenne()>=10;
}

bool Etudiant::comparer(Etudiant &e1)
{
    return this->moyenne() == e1.moyenne();
}
