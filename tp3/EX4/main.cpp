#include <iostream>
#include <vector>
#include <utility> // Pour std::pair
using namespace std;

// Fonction mini_maxi utilisant std::pair

pair<int, int> mini_maxi(const vector<int>& v) {
    if (v.empty()) {
        cerr << "Erreur : Le tableau est vide !" << endl;
        return {0, 0}; // Valeurs par défaut en cas d'erreur
    }

    int minVal = v[0], maxVal = v[0];
    for (int val : v) {
        if (val < minVal) minVal = val;
        if (val > maxVal) maxVal = val;
    }
    return {minVal, maxVal};
}

// Fonction pour remplir un vecteur
vector<int> remplirVecteur(int size) {
    vector<int> vect(size);
    cout << "Entrez " << size << " valeurs entières :" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> vect[i];
    }
    return vect;
}

// Fonction principale
int main() {
    int size;
    cout << "Entrez la taille du tableau : ";
    cin >> size;

    vector<int> A = remplirVecteur(size);

    pair<int, int> result = mini_maxi(A);
    cout << "La plus petite valeur est : " << result.first << endl;
    cout << "La plus grande valeur est : " << result.second << endl;

    return 0;
}




