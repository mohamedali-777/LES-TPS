#include "Robot.h"

Robot::Robot(string nom, double x, double y) : nom(nom), x(x), y(y), estMort(false) { }

void Robot::deplacer(double dx, double dy) {
    x += dx;
    y += dy;
}

void Robot::afficher() {
    cout << "Robot: " <<nom<<" | Position: (" <<x<< ", " <<y<< ") | "
         << (estMort ? "Mort" : "En vie") << endl;
}

bool Robot::getEstMort() {
    return estMort;
}

void Robot::setEstMort(bool mort) {
    estMort = mort;
}

double Robot::getX() {
    return x;
}

double Robot::getY() {
    return y;
}

string Robot::getNom() {
    return nom;
}
