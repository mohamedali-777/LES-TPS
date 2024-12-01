#include <iostream>
#include <random>
using namespace std;

int main() {
// Initialisation des générateurs de nombres aléatoires

    random_device rd;
    mt19937 gen(rd());
    // Réels entre 0.0 et 10.0

    uniform_real_distribution<float> reel(0.0,10.0);
    // Entiers entre 1 et 100

    uniform_int_distribution<int> entier(1,100);

    // Génération de 5 réels aléatoires

    cout << "Réels aléatoires générés : ";
    for (int i=0;i<5;i++) cout <<reel(gen)<< " ";
    cout << endl;

    // Génération de 5 entiers aléatoires

    cout <<"Entiers aléatoires générés : ";
    for (int i=0; i<5;i++) cout << entier(gen)<< " ";
    cout << endl;

    return 0;
}
