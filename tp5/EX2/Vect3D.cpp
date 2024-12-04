#include "Vect3D.h"
#include<iostream>
#include<cmath>
using namespace std;

Vect3D::Vect3D(float x, float y, float z) : Vect2D(x, y), z(z) {}

void Vect3D::afficher(){
    Vect2D::afficher();
    cout<<", "<<z<<")"<<endl;
}

Vect3D Vect3D::operator+( Vect3D& other)
{
    return Vect3D(getX() +other.getX(),getY()+other.getY(), z + other.z);
}

float Vect3D::produitScalaire(Vect3D& other)
{
    return getX() * other.getX() + getY()*other.getY() + z * other.z;
}

bool Vect3D::coincide(Vect3D& other)
{
    return (getX() == other.getX() && getY() == other.getY() && z == other.z);
}

float Vect3D::norme()
{
    return sqrt(getX()*getX()+getY()*getY()+z*z);
}

Vect3D Vect3D::normax(Vect3D& v1,Vect3D& v2)
{
    return (v1.norme() > v2.norme()) ? v1 : v2;
}

// Normax avec retour par adresse
Vect3D* Vect3D::normaxAdr(Vect3D& v1, Vect3D& v2) {
    return (v1.norme() > v2.norme()) ? &v1 : &v2;
}

// Normax avec retour par référence
Vect3D& Vect3D::normaxRef(Vect3D& v1, Vect3D& v2) {
    return (v1.norme() > v2.norme()) ? v1 : v2;
}

