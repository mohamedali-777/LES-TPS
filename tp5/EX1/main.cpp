#include "Etudiant.h"
#include <iostream>
using namespace std;

int main() {
    // Initialisation des donn�es
    int nbrNotes1,nbrNotes2;
    string nom1,nom2;
    cout<<"donner le nom de 1 ere etudiant :\n";
    cin>>nom1;
    cout<<"donner le nombre de matiere \n ";
    cin>>nbrNotes1;


    cout<<"donner le nom de 2 eme etudiant :\n";
    cin>>nom2;
    cout<<"donner le nombre de matiere \n ";
    cin>>nbrNotes2;




    // Cr�ation des �tudiants avec le constructeur param�tr�
    Etudiant etudiant1(nom1, nbrNotes1);
    Etudiant etudiant2(nom2, nbrNotes2);
    cout<<"etudiant 1 \n :";
    etudiant1.saisie();
     cout<<"etudiant 1 \n :";
    etudiant2.saisie();

    // Affichage des informations de chaque �tudiant
    cout << "\nInformations de l'�tudiant 1 :\n";
    etudiant1.afficher();

    cout << "\nInformations de l'�tudiant 2 :\n";
    etudiant2.afficher();
    cout<<"\n";
    cout<<"la moyenne de l etudiant 1 est :"<<etudiant1.moyenne()<<endl;
    cout<<"la moyenne de l etudiant 2 est :"<<etudiant2.moyenne()<<endl;

    return 0;
}
