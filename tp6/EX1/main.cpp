#include "Vecteur.h"

int main() {
    Vecteur v1;
    cout << "Vecteur nul : ";
    v1.afficher();
    v1.deplacer(3.5, 4.2);
    cout << "Après déplacement : ";
    v1.afficher();
    Vecteur3D* v3d = new Vecteur3D(1.2, 2.3, 3.4);
    cout << "Vecteur 3D dynamique : ";
    v3d->afficher();
    v3d->deplacer(0.5, 1.5, 2.0);
    cout << "Après déplacement : ";
    v3d->afficher();
    // Libération de la mémoire
    delete v3d;

    return 0;
}
