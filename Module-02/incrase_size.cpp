#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[3];
    int *b = new int[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    for(int i=0;i<3;i++)
    {
        cout<<a[i] << " "<<endl;
    }
    delete[] a;
    for(int i=0;i<3;i++)
    {
        cout<< a[i] << endl;
    }
    delete[] b;
    a = new int [5];
    for(int i=0;i<3;i++)
    {
        a[i]=b[i];
    }
    a[3] = 40;
    a[4] = 50;
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    for(int i=0;i<3;i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}