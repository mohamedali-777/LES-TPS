#include <iostream>
using namespace std;

// Fonction swap par valeur
/*
void swapv(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    // Afficher les valeurs après l'échange dans la fonction
    cout << "Après swapv: a = " << a << ", b = " << b << endl;
}

int main() {
    int a,b;
    cout<<"donner nbr1 :";
    cin>>a;
    cout<<"donner nbr2 :";
    cin>>b;
    cout << "Avant swapv: a = " << a << ", b = " << b << endl;
    swapv(a, b);  // Passé par valeur, l'échange n'affecte pas a et b
    cout << "Après swapv dans main: a = " << a << ", b = " << b << endl;
    return 0;
}
*/


// Fonction swap par référence
/*
void swapr(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;

    // Afficher les valeurs après l'échange dans la fonction
    cout << "Après swapr: a = " << a << ", b = " << b << endl;
}

int main() {
    int a,b;
    cout<<"donner nbr1 :";
    cin>>a;
    cout<<"donner nbr2 :";
    cin>>b;
    cout << "Avant swapr: a = " << a << ", b = " << b << endl;
    swapr(a, b);  // Passé par référence, l'échange affecte a et b
    cout << "Après swapr dans main: a = " << a << ", b = " << b << endl;
    return 0;
}*/


// Fonction swap par pointeur

void swapp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    // Afficher les valeurs après l'échange dans la fonction
    cout << "Après swapp: a = " << *a << ", b = " << *b << endl;
}

int main() {
    int a,b;
    cout<<"donner nbr1 :";
    cin>>a;
    cout<<"donner nbr2 :";
    cin>>b;
    cout << "Avant swapp: a = " << a << ", b = " << b << endl;
    swapp(&a, &b);  // Passé par pointeur, l'échange affecte a et b
    cout << "Après swapp dans main: a = " << a << ", b = " << b << endl;
    return 0;
}

