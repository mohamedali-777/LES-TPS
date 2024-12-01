#include <iostream>

using namespace std;

bool testegal1 (int a,int b){
   return a == b;
}

bool testegal2 (int &a,int &b){
    return a == b;
}

bool testegal3 (int*a,int*b){
   return *a == *b;

}
int main()
{
    int x = 5;
    int y = 5;
    cout<<(testegal1(x,y)?"les entiers sont egeaux":"les entiers ne sont pas egeaux")<<endl;
    cout<<(testegal2(x,y)?"les entiers sont egeaux":"les entiers ne sont pas egeaux")<<endl;;
    cout<<(testegal3(&x,&y)?"les entiers sont egeaux":"les entiers ne sont pas egeaux")<<endl;;

}
