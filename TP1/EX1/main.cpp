#include <iostream>
using namespace std;

int main() {

    double distance;
    int choix;


    cout << "Choisissez l'option de conversion:\n";
    cout << "1. Kilomètres vers Miles\n";
    cout << "2. Miles vers Kilomètres\n";
    cout << "Entrez votre choix (1 ou 2): ";
    cin >> choix;

    if (choix==1) {
        cout <<"Entrez la distance en kilomètres: ";
        cin>>distance;
        double miles =distance / 1.609;  
        cout <<distance<<" kilomètres = " <<miles<< " miles" << endl;
    } else if (choix==2) {
        cout << "Entrez la distance en miles: ";
        cin >> distance;
        double kilometers = distance * 1.609;  
        cout << distance <<" miles = "<< kilometers <<" kilomètres"<< endl;
    } else {
        cout << "Choix invalide veuillez entrer 1 ou 2." << endl;
    }

    return 0;
}
