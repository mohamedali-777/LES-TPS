#include <iostream>
using namespace std;

int main() {

    double distance;
    int choix;

    // Menu de sélection pour l'utilisateur

    cout << "Choisissez l'option de conversion:\n";
    cout << "1. Kilomètres vers Miles\n";
    cout << "2. Miles vers Kilomètres\n";
    cout << "Entrez votre choix (1 ou 2): ";
    cin >> choix;

    if (choix==1) {
        // Conversion de kilomètres vers miles

        cout << "Entrez la distance en kilomètres: ";
        cin >> distance;
        double miles = distance / 1.609;  // Formule de conversion
        cout <<distance<< " kilomètres = " <<miles<< " miles" << endl;
    } else if (choix == 2) {
        // Conversion de miles vers kilomètres

        cout << "Entrez la distance en miles: ";
        cin >> distance;
        double kilometers = distance * 1.609;  // Formule de conversion
        cout << distance <<" miles = "<< kilometers <<" kilomètres"<< endl;
    } else {
        cout << "Choix invalide veuillez entrer 1 ou 2." << endl;
    }

    return 0;
}
