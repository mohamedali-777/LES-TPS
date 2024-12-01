#include <iostream>
#include <vector>
using namespace std;

// Fonction pour échanger deux éléments

template <typename T>
void echanger(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

// Fonction pour trier un tableau avec un tri par sélection

template <typename T>
void trier(vector<T> &tableau) {
    size_t taille = tableau.size();
    for (size_t i = 0; i < taille - 1; ++i) {
        size_t minIndex = i;
        for (size_t j = i + 1; j < taille; ++j) {
            if (tableau[j] < tableau[minIndex]) {
                minIndex = j;
            }
        }
        // Échanger les éléments si nécessaire
        if (minIndex != i) {
            echanger(tableau[i], tableau[minIndex]);
        }
    }
}
template <typename T>
void remplir(vector<T> &tableau, size_t taille) {
    cout << "Entrez " << taille << " éléments :" << endl;
    for (size_t i = 0; i < taille; ++i) {
        T element;
        cout << "Élément " << i + 1 << " : ";
        cin >> element;
        tableau.push_back(element);
    }
}


int main() {
    vector<int> tableau;
    const size_t taille = 10;

    remplir(tableau, taille);

    cout << "Tableau avant le tri : ";
    for (const auto &el : tableau) {
        cout << el << " ";
    }
    cout << endl;

    trier(tableau);

    cout << "Tableau après le tri : ";
    for (const auto &el : tableau) {
        cout << el << " ";
    }
    cout << endl;

    return 0;
}
