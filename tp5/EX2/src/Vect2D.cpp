#include "Vect2D.h"
#include<iostream>
#include<cmath>
using namespace std;
Vect2D::Vect2D(float x,float y)
{
    this->x=x;
    this->y=y;

}

Vect2D::~Vect2D()
{
}

float Vect2D::getX()
{
    return x;
}
float Vect2D::getY()
{
    return y;
}

void Vect2D::afficher()
{
    cout <<"("<<x<<", "<<y<<")";
}

Vect2D Vect2D::operator+(Vect2D& other)
{
    return Vect2D(x+other.x,y+other.y);
}

bool Vect2D::coincide(Vect2D& other)
{
    return (x == other.x && y == other.y);
}

float Vect2D::norme()
{
    return sqrt(x*x+y*y);
}
