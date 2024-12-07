#include <iostream>
using namespace std;

int main() {
    int entiers[10];
    int mini;

    cout << "Veuillez entrer 10 entiers:\n";
    for (int i = 0; i < 10; i++) {
        cout<<"Entier "<<i+1<<": ";
        cin >> entiers[i];
    }

    mini=entiers[0];
    for (int i = 1; i < 10; i++) {
        if (entiers[i] < mini) {
            mini = entiers[i];
        }
    }
    cout << "Le plus petit entier est: " <<mini<< endl;

    return 0;
}
