#include <iostream>


using namespace std;
void incrementer_ref(int &x) {
    x++;
}void permuter_ref(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void incrementer(int *x){
   (*x)++;
}

void permuter(int*x,int*y){
    int a=*y;
    *y=*x;
    *x=a;}
int main()
{
    int x=5;
    int y=9;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<"passage par adrs :"<<endl;
    incrementer(&x);
    cout<<"apres l incrementation x="<<x<<endl;
    permuter(&x,&y);
    cout<<"apres permutation x="<<x<<" et y="<<y<<endl;
    x = 5;
    y = 9;
    // Test avec passage par référence
    printf("passage par référence:\n");
    printf("avant modification : x = %d, y = %d\n", x, y);
    incrementer_ref(x);
    printf("Après incrémentation : x = %d\n", x);
    permuter_ref(x, y);
    printf("Après permutation : x = %d, y = %d\n", x, y);

}
