#include <iostream>
using namespace std;
//EX1

// Fonction pour créer un tableau dynamiquement

int* creation(int taille){
    return new int[taille];
}

// Fonction pour remplir le tableau avec des entiers

void remplir(int* tab, int taille){
    cout << "Entrez " << taille << " valeurs entières :" << endl;
    for (int i = 0; i < taille; ++i) {
        cin >> tab[i];
    }
}

// Fonction pour compter les valeurs positive

int nbrpos(const int* tab, int taille) {
    int count = 0;
    for (int i = 0; i < taille; ++i) {
        if (tab[i] > 0) {
            ++count;
        }
    }
    return count;
}


int main() {
    int taille;
    cout << "Entrez la taille du tableau : ";
    cin >> taille;

    // Allocation dynamique du tableau
    int* array = creation(taille);

    // Remplir le tableau
    remplir(array, taille);

    // Compter les valeurs positives
    int nbrpositive = nbrpos(array, taille);

    // Afficher le résultat
    cout << "Nombre de valeurs positives : " << nbrpositive << endl;

    // Libération de la mémoire
    delete[] array;

    return 0;
}
