#include <iostream>
#include <cmath>

using namespace std;

// Fonction f qui calcule la racine carr�e de (x - 1) * (2 - x)

double f(double x, bool &ok) {
    double result = (x - 1)*(2 - x);

    // V�rifier si l'expression est positive (pour la racine carr�e)

    if (result < 0) {
        ok= false;
        return 0;
    } else {
        ok= true;
        return sqrt(result);
    }
}

int main() {
    double x;
    bool ok;
    cout << "Entrez la valeur de x : ";
    cin >> x;
    double result = f(x,ok);
    if (ok) {
        cout << "La fonction f est d�finie au point x = " << x << endl;
        cout << "La valeur de la fonction f=(x - 1)*(2 - x) est : " << result << endl;
    } else {
        cout << "La fonction (x - 1)*(2 - x) n'est pas d�finie au point x = " << x << endl;
    }

    return 0;
}
