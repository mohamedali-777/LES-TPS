#include <iostream>
#include <vector>
#include <functional>
using namespace std;

// Fonction générique pour appliquer un filtre à un tableau

void appliquerFiltre(const vector<int> &tableau, const function<bool(int)> &filtre) {
    for (const auto &valeur : tableau) {
        if (filtre(valeur)) {
            cout << valeur << " ";
        }
    }
    cout << endl;
}


int main() {

    vector<int> tableau = {-9, 10, -3, 0, 7, -22, 12, 15, -1, 6};
    int choix;

    cout << "Tableau initial : ";
    for (const auto &valeur : tableau) {
        cout << valeur << " ";
    }
    cout << endl;

    do {
        cout << "\nMenu :\n";
        cout << "1. Afficher les valeurs positives\n";
        cout << "2. Afficher les valeurs négatives\n";
        cout << "3. Afficher les valeurs supérieures à un seuil\n";
        cout << "4. Quitter\n";
        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {
            case 1:
                cout << "Valeurs positives : ";
                appliquerFiltre(tableau, [](int a) { return a > 0; });
                break;

            case 2:
                cout << "Valeurs négatives : ";
                appliquerFiltre(tableau, [](int a) { return a < 0; });
                break;

            case 3: {
                int seuil;
                cout << "Entrez le seuil : ";
                cin >> seuil;
                cout << "Valeurs supérieures à " << seuil << " : ";
                appliquerFiltre(tableau, [seuil](int a) { return a > seuil; });
                break;
            }

            case 4:
                cout << "Fin du programme." << endl;
                break;

            default:
                cout << "Choix invalide. Veuillez réessayer." << endl;
                break;
        }
    } while (choix != 4);

    return 0;
}
