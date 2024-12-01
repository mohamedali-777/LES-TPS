#include <iostream>

using namespace std;

void calcul(){
    while(true){
    cout<<"******** CALCULATRICE ********" <<endl;
    cout<<"1.add"<<endl;
    cout<<"2.mul"<<endl;
    cout<<"3.sous"<<endl;
    cout<<"4.div"<<endl;
    cout<<"5.quit"<<endl;
    string op;
    cout << "Choisir une operation (1-5) : ";
    cin>>op;
    if (op=="5") {
            cout <<"quitter..." << endl;
            break;
    }
    cout<<"donner les operandes"<<endl;
    int x,y;
    cin>>x>>y;
    if (op=="1")
    cout<<x<<"+"<<y<<"="<<x+y;
     else if (op == "2") {
        cout <<x<<" * " <<y<<" = "<<x * y<< endl;
    } else if (op=="3") {
        cout <<x<< " - " <<y<<" = "<<x - y<< endl;
    } else if (op == "4") {
        if (y != 0) {
            cout <<x<<" / "<<y<<" = "<<x / y<< endl;
        } else {
            cout <<"Division par zéro n'est pas permise." << endl;
        }
    } else {
        cout << "Option invalide." << endl;
    }
     system("pause");
     system("cls");
    }
}

int main()
{
    calcul();
    return 0;
}
