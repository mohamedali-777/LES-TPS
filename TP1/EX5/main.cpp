#include <iostream>
#include <cmath>

using namespace std;

double f(double x, bool &ok) {
    double result = (x - 1)*(2 - x);
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
        cout << "La fonction f est définie au point x = " << x << endl;
        cout << "La valeur de la fonction f=(x - 1)*(2 - x) est : " << result << endl;
    } else {
        cout << "La fonction (x - 1)*(2 - x) n'est pas définie au point x = " << x << endl;
    }

    return 0;
}
