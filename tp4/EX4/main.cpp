#include <iostream>
#include <string>
#include <vector>
using namespace std;

// D�finition de la structure Produit

struct Produit {
    string type;       // Type du produit (par exemple : "normal", "luxe")
    double prixHT;     // Prix hors taxes
    bool solde;        // Indique si le produit est en solde (true) ou non (false)
};

// Fonction pour cr�er un produit

Produit creerProduit() {
    Produit produit;
    cout << "Cr�er un produit :\n";
    cout << "Type de produit ('normal' ou 'luxe') : ";
    cin >> produit.type;

    // Validation du type
    while (produit.type != "normal" && produit.type != "luxe") {
        cout << "Type invalide. Veuillez entrer 'normal' ou 'luxe' : ";
        cin >> produit.type;
    }

    cout << "Prix hors taxes : ";
    cin >> produit.prixHT;

    // Validation du prix
    while (produit.prixHT < 0) {
        cout << "Le prix doit �tre positif. Veuillez entrer un prix valide : ";
        cin >> produit.prixHT;
    }

    cout << "Le produit est-il en solde ? (1 pour oui, 0 pour non) : ";
    cin >> produit.solde;
    cout << "Produit cr�� avec succ�s.\n";
    return produit;
}

// Fonction pour calculer le prix TTC net d'un produit

double calculerPrix(const Produit &produit, double taxeNormale = 0.19, double taxeLuxe = 0.25, double remise = 0.20) {
    double taxe = (produit.type == "luxe") ? taxeLuxe : taxeNormale;
    double prixTTC = produit.prixHT * (1 + taxe);
    if (produit.solde) {
        prixTTC *= (1 - remise);
    }
    return prixTTC;
}


int main() {
    int nbrProduits;


    cout << "Combien de produits voulez-vous cr�er ? ";
    cin >> nbrProduits;
    while (nbrProduits <= 0) {
        cout << "Le nombre de produits doit �tre sup�rieur � 0. Veuillez r�essayer : ";
        cin >> nbrProduits;
    }
    vector<Produit> produits;

    for (int i = 0; i < nbrProduits; ++i) {
        cout << "\nProduit " << i + 1 << " :\n";
        produits.push_back(creerProduit());
    }

    cout << "\nProduits et leurs prix TTC nets :" << endl;
    for (int i = 0; i < produits.size(); ++i) {
        cout << "Produit " << i + 1 << " : " << calculerPrix(produits[i]) << " dt" << endl;
    }

    return 0;
}
