#include <iostream>
using namespace std;
/*
// Fonction pour créer et remplir un tableau dynamiquement
int* remplir(int& size) {
    cout << "Entrez la taille du tableau : ";
    cin >> size;

    int* arr = new int[size];
    cout << "Entrez " << size << " valeurs entières :" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    return arr;
}

// Fonction pour rechercher une valeur dans un tableau brut
void recherche(const int* arr, int size, int value) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            cout << value << " se trouve dans le tableau à la position " << i << "." << endl;
            return;
        }
    }
    cout << value << " ne se trouve pas dans le tableau." << endl;
}


int main() {
    int size;
    int* array = remplir(size);

    int value;
    cout << "Entrez la valeur à rechercher : ";
    cin >> value;

    recherche(array, size, value);

    delete[] array; // Libération de la mémoire
    return 0;
}*/
#include<array>
/*
// Fonction pour créer et remplir un std::array
template <size_t N>
void remplir(array<int, N>& arr) {
    cout << "Entrez " << N << " valeurs entières :" << endl;
    for (size_t i = 0; i < N; ++i) {
        cin >> arr[i];
    }
}

// Fonction pour rechercher une valeur dans un std::array
template <size_t N>
void recherche(const array<int, N>& arr, int value) {
    for (size_t i = 0; i < N; ++i) {
        if (arr[i] == value) {
            cout << value << " se trouve dans le tableau à la position " << i << "." << endl;
            return;
        }
    }
    cout << value << " ne se trouve pas dans le tableau." << endl;
}

// Fonction principale
int main() {
    constexpr size_t size = 5; // Taille fixe pour std::array
    array<int, size> array;

    remplir(array);

    int value;
    cout << "Entrez la valeur à rechercher : ";
    cin >> value;

    recherche(array, value);

    return 0;
}
*/

#include <vector>


// Fonction pour créer et remplir un std::vector
vector<int> remplir(int size) {
    vector<int> vec(size);
    cout << "Entrez " << size << " valeurs entières :" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> vec[i];
    }
    return vec;
}

// Fonction pour rechercher une valeur dans un std::vector
void recherche(const vector<int>& vec, int value) {
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i] == value) {
            cout << value << " se trouve dans le tableau à la position " << i << "." << endl;
            return;
        }
    }
    cout << value << " ne se trouve pas dans le tableau." << endl;
}

// Fonction principale
int main() {
    int size;
    cout << "Entrez la taille du tableau : ";
    cin >> size;

    vector<int> vec = remplir(size);

    int value;
    cout << "Entrez la valeur à rechercher : ";
    cin >> value;

    recherche(vec, value);

    return 0;
}

