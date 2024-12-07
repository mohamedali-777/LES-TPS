#include <iostream>
using namespace std;

// Fonction swap par valeur
void swapv(int a,int b) {
    int temp=a;
    a=b;
    b=temp;
    cout << "Après swapv: a = " << a << ", b = " << b << endl;
}

// Fonction swap par référence
void swapr(int &a, int &b) {
    int temp=a;
    a=b;
    b=temp;
    cout <<"Après swapr: a = " << a << ", b = " << b << endl;
}

// Fonction swap par pointeur
void swapp(int *a,int *b) {
    int temp=*a;
    *a=*b;
    *b = temp;
    cout << "Après swapp: a = " << *a << ", b = " << *b << endl;
}

int main() {
    int a, b;

    cout << "Donner nbr1 : ";
    cin >> a;
    cout << "Donner nbr2 : ";
    cin >> b;

    cout << "\n=== Swap par valeur ===" << endl;
    cout << "Avant swapv: a = " << a << ", b = " << b << endl;
    swapv(a, b);
    cout << "Après swapv dans main: a = " << a << ", b = " << b << endl;

    cout << "\n=== Swap par référence ===" << endl;
    cout << "Avant swapr: a = " << a << ", b = " << b << endl;
    swapr(a, b);
    cout << "Après swapr dans main: a = " << a << ", b = " << b << endl;

    cout << "\n=== Swap par pointeur ===" << endl;
    cout << "Avant swapp: a = " << a << ", b = " << b << endl;
    swapp(&a, &b);
    cout << "Après swapp dans main: a = " << a << ", b = " << b << endl;

    return 0;
}
