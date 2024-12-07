#include <iostream>
#include "Voiture.h"
#include "Camion.h"

int main() {
    Voiture voiture1(2023, 25000, 5);
    voiture1.afficher();
    voiture1.accelerer();
    Camion camion1(2022, 50000, 10000);
    camion1.afficher();
    camion1.accelerer();
    Voiture voiture2(2020, 20000, 4);
    voiture2.afficher();
    voiture2.accelerer();

    return 0;
}
