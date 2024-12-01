#include <iostream>
using namespace std;


int u(int n) {
    if (n==0) return 3;
    return 3*u(n-1)+4;
}

int main() {
    int n;
    cout << "entrez un entier n : ";
    cin >> n;
    cout << "u(" <<n<< ") = " << u(n) << endl;
    return 0;
}
