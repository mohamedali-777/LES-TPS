#ifndef TABLEAUX_H
#define TABLEAUX_H

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

// Structure représentant la position géographique (longitude, latitude)
struct Position {
    double longitude;
    double latitude;
};

// Structure représentant une ville
struct Ville {
    string nom;
    Position position;
};

// Fonction pour rechercher une ville par son nom dans un vector
Ville* rechercher_ville_par_nom(const vector<Ville>& villes, const string& nom) {
    for (const Ville& v : villes) {
        if (v.nom == nom) {
            return const_cast<Ville*>(&v);  // Retourner la référence à la ville trouvée
        }
    }
    return nullptr; // Si la ville n'est pas trouvée
}

// Fonction pour afficher toutes les villes d'un vecteur
void afficher_villes(const vector<Ville>& villes) {
    for (const Ville& v : villes) {
        cout << "Ville: " << v.nom
             << ", Longitude: " << v.position.longitude
             << ", Latitude: " << v.position.latitude << endl;
    }
}

// Fonction pour trier un vecteur de villes par leur nom
void trier_villes_par_nom(vector<Ville>& villes) {
    sort(villes.begin(), villes.end(), [](const Ville& v1, const Ville& v2) {
        return v1.nom < v2.nom;
    });
}

// Fonction pour trier un vecteur de villes par leur latitude
void trier_villes_par_latitude(vector<Ville>& villes) {
    sort(villes.begin(), villes.end(), [](const Ville& v1, const Ville& v2) {
        return v1.position.latitude < v2.position.latitude;
    });
}

// Fonction pour rechercher une ville dans un unordered_map par son nom
Ville* rechercher_ville_par_nom_map(const unordered_map<string, Ville>& villes_map, const string& nom) {
    auto it = villes_map.find(nom);
    if (it != villes_map.end()) {
        return const_cast<Ville*>(&it->second);
    }
    return nullptr;
}

// Fonction pour ajouter une ville dans un unordered_map
void ajouter_ville_map(unordered_map<string, Ville>& villes_map, const Ville& ville) {
    villes_map[ville.nom] = ville;
}

#endif // TABLEAUX_H

