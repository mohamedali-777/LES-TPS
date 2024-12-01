#include <iostream>
#include <vector>
using namespace std;

void afficherP(int a) {
    if (a > 0) {
        cout << a << " ";
    }
}


void afficherN(int a) {
    if (a < 0) {
        cout << a << " ";
    }
}

// Fonction pour afficher les valeurs supérieures à un seuil

void afficherSuperieurSeuil(int a, int seuil) {
    if (a > seuil) {
        cout << a << " ";
    }
}

// Fonction générique pour appliquer un filtre (sans seuil)

void appliquerFiltre(const vector<int> &tableau, void (*filtre)(int)) {
    for (const auto &valeur : tableau) {
        filtre(valeur);
    }
}

// Fonction pour appliquer un filtre avec un seuil

void appliquerFiltreAvecSeuil(const vector<int> &tableau, int seuil) {
    for (const auto &valeur : tableau) {
        afficherSuperieurSeuil(valeur, seuil);
    }
}


int main() {

    vector<int> tableau = {-5, 10, -3, 0, 7, -8, 12, 15, -1, 6};
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
                appliquerFiltre(tableau, afficherP);
                cout << endl;
                break;

            case 2:
                cout << "Valeurs négatives : ";
                appliquerFiltre(tableau, afficherN);
                cout << endl;
                break;

            case 3: {
                int seuil;
                cout << "Entrez le seuil : ";
                cin >> seuil;
                cout << "Valeurs supérieures à " << seuil << " : ";
                appliquerFiltreAvecSeuil(tableau, seuil);
                cout << endl;
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
