#include <bits/stdc++.h>

using namespace std;
int main()
{
    // int a,b;
    // cin >>a >>b;
    // int temp=a;
    // a=b;
    // b=temp;
    // cout << a <<" " <<b <<endl;
    int a,b,c,d;
    cin >>a >>b >>c >>d ;
    // int c = min(a,b);
    // int d=max(a,b);
    int mn = min({a, b, c, d});
    int mx= max({a,b,c,d});
    cout << mn <<" " << mx<< endl;

    return 0;
}