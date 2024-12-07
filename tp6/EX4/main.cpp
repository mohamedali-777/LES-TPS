#include <iostream>
#include <vector>

using namespace std;

class Piece {
protected:
    string couleur;
    int x, y;
public:
    Piece(string couleur, int x, int y) : couleur(couleur), x(x), y(y) {}
    virtual void deplacer() = 0;
    virtual void afficher() = 0;
};

class Pion : public Piece {
public:
    Pion(string couleur, int x, int y) : Piece(couleur, x, y) {}
    void deplacer() override {
        y++;
        if (y>8) cout << "Le pion dépasse la limite de l'échiquier!" << endl;
    }
    void afficher() override {
        cout <<"Pion "<< couleur <<" position (" << x << "," << y << ")" << endl;
    }
};

class Roi : public Piece {
public:
    Roi(string couleur, int x, int y) : Piece(couleur, x, y) {}
    void deplacer() override {
        y++;
        if (y > 8) cout <<"Le roi dépasse la limite de l'échiquier!" << endl;
    }
    void afficher() override {
        cout << "Roi "<<couleur<<" position (" << x << "," << y << ")"<< endl;
    }
};

int main() {
    vector<Piece*> pieces;
    pieces.push_back(new Pion("blanc", 4, 4));
    pieces.push_back(new Pion("noir", 5, 5));
    pieces.push_back(new Roi("blanc", 7, 7));

    for (Piece* p : pieces) {
        p->afficher();
    }

    return 0;
}
