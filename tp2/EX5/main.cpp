#include <iostream>
#include <random>
using namespace std;

int main() {
// Initialisation des g�n�rateurs de nombres al�atoires

    random_device rd;
    mt19937 gen(rd());
    // R�els entre 0.0 et 10.0

    uniform_real_distribution<float> reel(0.0,10.0);
    // Entiers entre 1 et 100

    uniform_int_distribution<int> entier(1,100);

    // G�n�ration de 5 r�els al�atoires

    cout << "R�els al�atoires g�n�r�s : ";
    for (int i=0;i<5;i++) cout <<reel(gen)<< " ";
    cout << endl;

    // G�n�ration de 5 entiers al�atoires

    cout <<"Entiers al�atoires g�n�r�s : ";
    for (int i=0; i<5;i++) cout << entier(gen)<< " ";
    cout << endl;

    return 0;
}
