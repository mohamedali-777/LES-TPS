#include <iostream>
#include "Personne.h"
#include "Enseignant.h"
#include "Etudiant.h"
#include "Contractuel.h"

using namespace std;

int main() {
    Personne p("Jean Dupont", 40, "M");
    Enseignant e("Alice Durand", 35, "F", "Responsable de filière");
    Etudiant et("Pierre Martin", 20, "M", "Informatique");
    Contractuel c("Lucie Moreau", 30, "F", "Professeur", "Mathématiques");

    cout << p.getPersonne() << endl;
    cout << e.getPersonne() << endl;
    cout << et.getPersonne() << endl;
    cout << c.getPersonne() << endl;

    return 0;
}
