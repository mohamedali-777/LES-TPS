#include <iostream>
#include <vector>
#include <string>
using namespace std;
/*
struct Position {
    double longitude;
    double latitude;
};

struct Ville {
    string nom;
    Position position;
};

// Fonction pour rechercher une ville par son nom dans un vector

Ville* rechercher_ville(const vector<Ville>& villes, const string& nom) {
    for (const Ville& v : villes) {
        if (v.nom == nom) {
            return const_cast<Ville*>(&v);  // Retourner la r�f�rence � la ville trouv�e
        }
    }
    return nullptr; // Si la ville n'est pas trouv�e
}

int main() {
    vector<Ville> villes = {
        {"Tunis", {10.1658, 36.8065}},
        {"Sfax", {10.7605, 34.7408}},
        {"Sousse", {10.6397, 35.8256}},
        {"Kairouan", {9.8769, 35.6611}},
        {"Tozeur", {8.129, 33.9182}}
    };

    string recherche;
    cout<<"les villes sont :Tunis/Sfax/Sousse/Kairouan/Tozeur"<<endl;
    cout << "Entrez le nom de la ville � rechercher : ";
    cin >> recherche;

    Ville* ville_trouvee = rechercher_ville(villes, recherche);

    if (ville_trouvee) {
        cout << "La ville " << ville_trouvee->nom << " est situ�e � : "
             << "Longitude: " << ville_trouvee->position.longitude
             << ", Latitude: " << ville_trouvee->position.latitude << endl;
    } else {
        cout << "Ville non trouv�e." << endl;
    }

    return 0;
}
*/

#include <unordered_map>

using namespace std;

struct Position {
    double longitude;
    double latitude;
};

struct Ville {
    string nom;
    Position position;
};

int main() {

    cout<<"les villes sont :Tunis/Sfax/Sousse/Kairouan/Tozeur"<<endl;
    unordered_map<string, Ville> villes = {
        {"Tunis", {"Tunis", {10.1658, 36.8065}}},
        {"Sfax", {"Sfax", {10.7605, 34.7408}}},
        {"Sousse", {"Sousse", {10.6397, 35.8256}}},
        {"Kairouan", {"Kairouan", {9.8769, 35.6611}}},
        {"Tozeur", {"Tozeur", {8.129, 33.9182}}}
    };

    string recherche;
    cout << "Entrez le nom de la ville � rechercher : ";
    cin >> recherche;

    auto it = villes.find(recherche);
    if (it != villes.end()) {
        cout << "La ville " << it->second.nom << " est situ�e � : "
             << "Longitude: " << it->second.position.longitude
             << ", Latitude: " << it->second.position.latitude << endl;
    } else {
        cout << "Ville non trouv�e." << endl;
    }

    return 0;
}
//Avec unordered_map la recherche est beaucoup plus rapide en moyenne
