#include <iostream>
#include "Cercle.h"
#include "Point.h"

using namespace std;

int main() {
    Cercle c1(1, Point(10, 10));

    c1.afficher();
    cout << "P�rim�tre: " << c1.perimetre() << endl;
    cout << "Surface: " << c1.surface() << endl;

    c1.setRayon(2);
    cout << "P�rim�tre apr�s modification: " << c1.perimetre() << endl;
    cout << "Surface apr�s modification: " << c1.surface() << endl;

    c1.translater(-10, -10);
    cout << "Apr�s translation: ";
    c1.afficher();

    Point p1(1, 1);
    Point p2(3, 3);

    cout << "Le point (1,1) est-il dans le cercle ?\n " << (c1.contient(p1) ? "Oui" : "Non") << endl;
    cout << "Le point (3,3) est-il dans le cercle ?\n " << (c1.contient(p2) ? "Oui" : "Non") << endl;

    Cercle c2(2, 0, 0);
    cout << "Les cercles sont-ils �gaux ?\n " << (c1.estEgal(c2) ? "Oui" : "Non") << endl;

    return 0;
}
