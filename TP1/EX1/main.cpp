#include <iostream>
using namespace std;

int main() {

    double distance;
    int choix;

    // Menu de s�lection pour l'utilisateur

    cout << "Choisissez l'option de conversion:\n";
    cout << "1. Kilom�tres vers Miles\n";
    cout << "2. Miles vers Kilom�tres\n";
    cout << "Entrez votre choix (1 ou 2): ";
    cin >> choix;

    if (choix==1) {
        // Conversion de kilom�tres vers miles

        cout << "Entrez la distance en kilom�tres: ";
        cin >> distance;
        double miles = distance / 1.609;  // Formule de conversion
        cout <<distance<< " kilom�tres = " <<miles<< " miles" << endl;
    } else if (choix == 2) {
        // Conversion de miles vers kilom�tres

        cout << "Entrez la distance en miles: ";
        cin >> distance;
        double kilometers = distance * 1.609;  // Formule de conversion
        cout << distance <<" miles = "<< kilometers <<" kilom�tres"<< endl;
    } else {
        cout << "Choix invalide veuillez entrer 1 ou 2." << endl;
    }

    return 0;
}
