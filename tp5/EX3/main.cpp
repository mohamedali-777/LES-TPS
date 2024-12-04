#include "Point.h"
#include <iostream>

int main() {
    Point p1(3, 4);
    Point p2(6, 8);
    std::cout << "Point p1 : ";
    p1.affiche();
    std::cout << "Point p2 : ";
    p2.affiche();
    if (comparer(p1, p2)) {
        std::cout << "Les points p1 et p2 sont égaux." << std::endl;
    } else {
        std::cout << "Les points p1 et p2 sont différents." << std::endl;
    }
    double dist = distance(p1, p2);
    std::cout << "La distance entre p1 et p2 est : " << dist << std::endl;
    Point m = milieu(p1, p2);
    std::cout << "Le point milieu entre p1 et p2 est : ";
    m.affiche();

    return 0;
}
