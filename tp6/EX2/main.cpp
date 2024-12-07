#include "RobotChasseur.h"
#include <vector>

int main() {
    RobotChasseur optimus("Optimus", 2, 3, 25);
    optimus.afficher();
    optimus.deplacer(33, 19);
    cout << "Apr�s d�placement :" << endl;
    optimus.afficher();
    vector<Robot> robots = {
        Robot("Megatron", 30, 20),
        Robot("Starscream", 50, 45),
        Robot("Bumblebee", 36, 25),
        Robot("Ironhide", 10, 5),
        Robot("Ratchet", 40, 23)
    };
    cout << "\nListe des robots ennemis :" << endl;
    for (auto& robot : robots) {
        robot.afficher();
    }
    cout << "\nOptimus traque ses ennemis..." << endl;
    for (auto& robot : robots) {
        if (optimus.estDansPortee(robot)) {
            optimus.tuer(robot);
        }
    }
    cout << "\n�tat final des robots ennemis :" << endl;
    for (auto& robot : robots) {
        robot.afficher();
    }
    return 0;
}
