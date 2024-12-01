#include <iostream>

using namespace std;
int factoriel(int n)
{
    int f=1;
    for(int i=n;i>0;i--){
        f*=i;
    }
}

int main()
{
    int n;
    cout << "donner un entier :" << endl;
    cin>>n;
    cout<<"le factoriel de "<<n<<" est ="<< factoriel(n);
    return 0;
}
