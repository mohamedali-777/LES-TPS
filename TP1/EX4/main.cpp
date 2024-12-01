#include <iostream>
#include <cmath>

using namespace std;

double distance(double xa, double ya, double xb, double yb) {
    return sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
}

int main() {
    double xa, ya, xb, yb;
    cout << "Entrez les coordonnées du point A (xa, ya) : ";
    cin >> xa >> ya;
    cout << "Entrez les coordonnées du point B (xb, yb) : ";
    cin >> xb >> yb;
    double dist = distance(xa, ya, xb, yb);
    cout << "La distance entre les points A et B est : " << dist << endl;

    return 0;
}
