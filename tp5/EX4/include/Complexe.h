#ifndef COMPLEXE_H
#define COMPLEXE_H

#include <iostream>
#include <cmath>
using namespace std;

class Complexe {
private:
    double Re, Img;

public:
    Complexe(double re = 0.0, double img = 0.0);
    double module();
    Complexe conjugue();
    void afficher();
    Complexe operator+(Complexe& other);
    Complexe operator+(double val);
    friend Complexe operator+(double val, Complexe& complex);
    Complexe operator-(Complexe& other);
    Complexe operator-(double val);
    friend Complexe operator-(double val, Complexe& complex);
    Complexe operator*(Complexe& other);
    Complexe operator*(double val);
    friend Complexe operator*(double val, Complexe& complex);
};

#endif
