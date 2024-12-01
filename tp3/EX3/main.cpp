#include <iostream>
#include<vector>

using namespace std;
vector<int> creationv(int taille)
{
    vector<int> vect(taille);
    cout << "Entrez " << taille<< " valeurs :" << endl;
    for(int i=0;i<taille;i++)
        cin>>vect[i];
    return vect;
}
int produit(const vector<int>&u,vector<int>&v)
{
    int p=0;
    for(int i=0;i<u.size();i++)
        p+=u[i]*v[i];
    return p;
}

int main()
{
   int size;
    cout << "Entrez la dimension des vecteurs : ";
    cin >> size;

    cout << "Remplissez le vecteur U :" << endl;
    vector<int> U = creationv(size);

    cout << "Remplissez le vecteur V :" << endl;
    vector<int> V = creationv(size);

    if (U.size() != V.size()) {
        cout << "Les dimensions des vecteurs ne correspondent pas !" << endl;
        return 1;
    }

    int resultat = produit(U, V);
    cout << "Le produit scalaire de U et V est : " << resultat << endl;

    return 0;
}
