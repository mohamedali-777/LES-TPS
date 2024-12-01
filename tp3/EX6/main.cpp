
#include <iostream>
#include <unordered_map>
#include "tableaux.h"

using namespace std;

int main() {
    // Création de villes
    vector<Ville> villes = {
        {"Tunis", {10.1658, 36.8065}},
        {"Sfax", {10.7605, 34.7408}},
        {"Sousse", {10.6397, 35.8256}},
        {"Kairouan", {9.8769, 35.6611}},
        {"Tozeur", {8.129, 33.9182}}
    };

    // Afficher toutes les villes
    cout << "Villes avant tri : " << endl;
    afficher_villes(villes);
    cout << endl;

    // Trier les villes par nom
    trier_villes_par_nom(villes);
    cout << "Villes triées par nom : " << endl;
    afficher_villes(villes);
    cout << endl;

    // Trier les villes par latitude
    trier_villes_par_latitude(villes);
    cout << "Villes triées par latitude : " << endl;
    afficher_villes(villes);
    cout << endl;

    // Recherche d'une ville par son nom dans un vector
    string recherche;
    cout << "Entrez le nom de la ville à rechercher dans le vector : ";
    cin >> recherche;
    Ville* ville_trouvee = rechercher_ville_par_nom(villes, recherche);
    if (ville_trouvee) {
        cout << "Ville trouvée : " << ville_trouvee->nom
             << " - Longitude: " << ville_trouvee->position.longitude
             << " - Latitude: " << ville_trouvee->position.latitude << endl;
    } else {
        cout << "Ville non trouvée dans le vector." << endl;
    }

    // Utiliser unordered_map
    unordered_map<string, Ville> villes_map;
    for (const Ville& v : villes) {
        ajouter_ville_map(villes_map, v);
    }

    // Recherche d'une ville par son nom dans un unordered_map
    cout << "Entrez le nom de la ville à rechercher dans le unordered_map : ";
    cin >> recherche;
    Ville* ville_trouvee_map = rechercher_ville_par_nom_map(villes_map, recherche);
    if (ville_trouvee_map) {
        cout << "Ville trouvée dans unordered_map : " << ville_trouvee_map->nom
             << " - Longitude: " << ville_trouvee_map->position.longitude
             << " - Latitude: " << ville_trouvee_map->position.latitude << endl;
    } else {
        cout << "Ville non trouvée dans le unordered_map." << endl;
    }

    return 0;
}
