#include<iostream>
#include"Vect2D.h"
#include"Vect3D.h"
using namespace std;

int main()
{
    float x;
    float y;
    float z;

    Vect2D v=Vect2D(5,3);
    cout<<"donner les composants de 1 ere vecteur 3D :"<<endl;
    cout<<"x :";
    cin>>x;
    cout<<"y :";
    cin>>y;
    cout<<"z :";
    cin>>z;
    Vect3D v1(x,y,z);
    cout<<"donner les composants de 2 ere vecteur 3D :"<<endl;
    cout<<"x :";
    cin>>x;
    cout<<"y :";
    cin>>y;
    cout<<"z :";
    cin>>z;
    Vect3D v2(x,y,z);

    cout << "Vecteur 1: ";
    v1.afficher();
    cout << "Vecteur 2: ";
    v2.afficher();
    Vect3D v3 = v1 + v2;
    cout <<"Somme des deux vecteurs: ";
    v3.afficher();

    float prodScalaire = v1.produitScalaire(v2);
    cout << "Produit scalaire: " << prodScalaire <<endl;

    bool coincident = v1.coincide(v2);
    std::cout << "Les vecteurs sont-ils égaux ?\n " << (coincident ? "Oui" : "Non") <<endl;

    cout << "Norme du vecteur 1: " << v1.norme() << endl;
    cout << "Norme du vecteur 2: " << v2.norme() << endl;

    Vect3D vMax = Vect3D::normax(v1, v2);
    cout << "Vecteur avec la plus grande norme (par valeur): ";
    vMax.afficher();

    Vect3D* vMaxAdr = Vect3D::normaxAdr(v1, v2);
    cout << "Vecteur avec la plus grande norme (par adresse): ";
    vMaxAdr->afficher();

    Vect3D& vMaxRef = Vect3D::normaxRef(v1, v2);
    cout << "Vecteur avec la plus grande norme (par référence): ";
    vMaxRef.afficher();

    return 0;
}
