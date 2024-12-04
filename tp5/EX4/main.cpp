#include "Complexe.h"
using namespace std;

int main() {
    Complexe c1(3.0, 4.0), c2(1.0, -2.0);

    cout << "Affichage de c1: ";
    c1.afficher();

    cout << "Affichage de c2: ";
    c2.afficher();

    Complexe sum = c1 + c2;
    cout << "Somme de c1 et c2: ";
    sum.afficher();

    Complexe addDouble = c1 + 5.0;
    cout << "Ajout d'un double à c1 (c1 + 5.0): ";
    addDouble.afficher();

    Complexe addDoubleReverse = 5.0 + c1;
    cout << "Ajout d'un double avant c1 (5.0 + c1): ";
    addDoubleReverse.afficher();

    Complexe subDouble = c1 - 2.0;
    cout << "Soustraction d'un double à c1 (c1 - 2.0): ";
    subDouble.afficher();

    Complexe subDoubleReverse = 2.0 - c1;
    cout << "Soustraction d'un Complexe à un double (2.0 - c1): ";
    subDoubleReverse.afficher();

    Complexe mulDouble = c1 * 2.0;
    cout << "Multiplication de c1 par un double (c1 * 2.0): ";
    mulDouble.afficher();

    Complexe mulDoubleReverse = 2.0 * c1;
    cout << "Multiplication d'un double par c1 (2.0 * c1): ";
    mulDoubleReverse.afficher();

    return 0;
}
