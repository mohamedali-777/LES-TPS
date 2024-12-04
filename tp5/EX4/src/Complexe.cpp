#include "Complexe.h"

Complexe::Complexe(double re, double img):Re(re),Img(img){}
double Complexe::module()
{
    return sqrt(Re*Re+Img*Img);
}
Complexe Complexe::conjugue()
{
    return Complexe(Re,-Img);
}
void Complexe::afficher()
{
    cout<<Re<<(Img>=0?" + ":" - ")<<abs(Img)<<"i"<<endl;
}
Complexe Complexe::operator+(Complexe& other)
{
    return Complexe(Re+other.Re,Img+other.Img);
}
Complexe Complexe::operator+(double val)
{
    return Complexe(Re+val,Img);
}
Complexe operator+(double val, Complexe& complex)
{
    return Complexe(complex.Re + val, complex.Img);
}
Complexe Complexe::operator-(Complexe& other)
{
    return Complexe(Re-other.Re,Img-other.Img);
}
Complexe Complexe::operator-(double val)
{
    return Complexe(Re-val, Img);
}
Complexe operator-(double val, Complexe& complex)
{
    return Complexe(val - complex.Re, -complex.Img);
}
Complexe Complexe::operator*(Complexe& other)
{
    return Complexe(Re*other.Re-Img*other.Img,Re*other.Img+Img*other.Re);
}
Complexe Complexe::operator*(double val)
{
    return Complexe(Re*val, Img*val);
}
Complexe operator*(double val, Complexe& complex)
{
    return Complexe(complex.Re*val, complex.Img*val);
}
