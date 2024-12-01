#include <iostream>
#include <random>
using namespace std;

void dessinerCone(int hauteur,int nbBoules) {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<float> dist(0.0, 1.0);

    for (int i=0;i<hauteur;i++) {
        // Espaces pour centrer le niveau
        for (int j=0; j <hauteur-i-1;j++) cout << " ";
        // Afficher les étoiles et boules
        for (int j=0; j<2*i+1;j++) {
            if (dist(gen)<0.5&& nbBoules>0) {
                cout << "O";
                nbBoules--;
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void dessinerTronc(int hauteur, int largeur) {
    for (int i=0;i< hauteur;i++) {
        for (int j=0;j<largeur;j++)cout<< " ";
        cout << "|||"<<endl;
    }
}

int main() {
    int hauteurCone=6,hauteurTronc=2,largeurTronc=5,nbBoules= 4;
    dessinerCone(hauteurCone,nbBoules);
    dessinerTronc(hauteurTronc,largeurTronc);
    return 0;
}
