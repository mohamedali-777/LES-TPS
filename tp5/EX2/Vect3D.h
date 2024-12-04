#ifndef VECT3D_H
#define VECT3D_H

#include"Vect2D.h"

class Vect3D : public Vect2D {
public:
    Vect3D(float x = 0.0f, float y = 0.0f, float z = 0.0f);
    void afficher();
    Vect3D operator+(Vect3D& other);
    float produitScalaire(Vect3D& other);
    bool coincide(Vect3D& other);
    float norme();

    static Vect3D normax(Vect3D& v1,Vect3D& v2);
    static Vect3D* normaxAdr(Vect3D& v1, Vect3D& v2);
    static Vect3D& normaxRef(Vect3D& v1, Vect3D& v2);

private:
    float z;
};

#endif // VECT3D_H

