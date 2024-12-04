#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Combien de mots souhaitez-vous entrer ? ";
    cin >>n;

    string mot,pluslong;
    int longmax = 0;

    for (int i = 0; i < n; i++) {
        cout << "Entrez le mot " << i + 1 << ": ";
        cin >> mot;


        if (mot.length() > longmax) {
            pluslong = mot; 
            longmax = mot.length();
        }
    }


    cout << "Le mot le plus long est: " << pluslong << endl;

    return 0;
}
