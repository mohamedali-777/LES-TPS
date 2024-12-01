#include <iostream>
using namespace std;

// Fonction swap par valeur
/*
void swapv(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    // Afficher les valeurs apr�s l'�change dans la fonction
    cout << "Apr�s swapv: a = " << a << ", b = " << b << endl;
}

int main() {
    int a,b;
    cout<<"donner nbr1 :";
    cin>>a;
    cout<<"donner nbr2 :";
    cin>>b;
    cout << "Avant swapv: a = " << a << ", b = " << b << endl;
    swapv(a, b);  // Pass� par valeur, l'�change n'affecte pas a et b
    cout << "Apr�s swapv dans main: a = " << a << ", b = " << b << endl;
    return 0;
}
*/


// Fonction swap par r�f�rence
/*
void swapr(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;

    // Afficher les valeurs apr�s l'�change dans la fonction
    cout << "Apr�s swapr: a = " << a << ", b = " << b << endl;
}

int main() {
    int a,b;
    cout<<"donner nbr1 :";
    cin>>a;
    cout<<"donner nbr2 :";
    cin>>b;
    cout << "Avant swapr: a = " << a << ", b = " << b << endl;
    swapr(a, b);  // Pass� par r�f�rence, l'�change affecte a et b
    cout << "Apr�s swapr dans main: a = " << a << ", b = " << b << endl;
    return 0;
}*/


// Fonction swap par pointeur

void swapp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    // Afficher les valeurs apr�s l'�change dans la fonction
    cout << "Apr�s swapp: a = " << *a << ", b = " << *b << endl;
}

int main() {
    int a,b;
    cout<<"donner nbr1 :";
    cin>>a;
    cout<<"donner nbr2 :";
    cin>>b;
    cout << "Avant swapp: a = " << a << ", b = " << b << endl;
    swapp(&a, &b);  // Pass� par pointeur, l'�change affecte a et b
    cout << "Apr�s swapp dans main: a = " << a << ", b = " << b << endl;
    return 0;
}

