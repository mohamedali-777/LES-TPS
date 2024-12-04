#include <iostream>
using namespace std;
//EX1

int* creation(int taille){
    return new int[taille];
}

void remplir(int* tab, int taille){
    cout << "Entrez " << taille << " valeurs entières :" << endl;
    for (int i = 0; i < taille; ++i) {
        cin >> tab[i];
    }
}

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

    int* array = creation(taille);
    remplir(array, taille);
    int nbrpositive = nbrpos(array, taille);
    cout << "Nombre de valeurs positives : " << nbrpositive << endl;

    delete[] array;

    return 0;
}
