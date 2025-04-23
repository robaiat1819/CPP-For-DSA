#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        string s,x;
        cin>> s >>x;
        int pos=s.find(x);
        while(pos!=-1)
        {
            s.replace(pos,x.length(),"#");
            pos=s.find(x,pos+1);
        }
        cout<<s<<endl;

    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;  
//     cin >> t;
    
    
//     for (int i = 0; i < t; ++i) {
//         string S, X;
//         cin >> S >> X;
        
      
//         int pos = S.find(X);
//         while (pos != -1) {
//             S.replace(pos, X.length(), "#");
//             pos = S.find(X, pos + 1);
//         }
        
       
//         cout << S << endl;
//     }
    
//     return 0;
// }
