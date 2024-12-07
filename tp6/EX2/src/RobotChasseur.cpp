#include "RobotChasseur.h"

RobotChasseur::RobotChasseur(string nom, double x, double y, double portee)
    : Robot(nom, x, y), porteeRadar(portee) { }

bool RobotChasseur::estDansPortee(Robot& robot) {
    if (robot.getEstMort()) return false;
    double distance = sqrt(pow(robot.getX() - x, 2) + pow(robot.getY() - y, 2));
    return distance <= porteeRadar;
}

void RobotChasseur::tuer(Robot& robot) {
    if (estDansPortee(robot)) {
        robot.setEstMort(true);
        cout << "Le robot "<<robot.getNom()<<" a été abattu par "<<nom<<"."<<endl;
    }
}
