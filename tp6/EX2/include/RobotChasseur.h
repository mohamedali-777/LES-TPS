#ifndef ROBOTCHASSEUR_H
#define ROBOTCHASSEUR_H

#include "Robot.h"

class RobotChasseur : public Robot {
private:
    double porteeRadar;

public:
    RobotChasseur(string nom, double x, double y, double portee);
    bool estDansPortee(Robot& robot);
    void tuer(Robot& robot);
};

#endif
