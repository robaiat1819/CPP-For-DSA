#include<bits/stdc++.h>

using namespace std;
int  *fun()
{
    int *a= new int;
    cout << "fun: "<< a<< endl;
    *a = 100;
    return a;

}
int main ()
{
    int *p = fun();
    cout<<"Main: "<< *p << endl;

    // int x=10;
    // int *a= new int ;
    // *a=20;
    // cout <<*a<< endl;
    // float *b=new float;
    // *b=49;
    // cout<<*b <<endl;

    return 0;
}