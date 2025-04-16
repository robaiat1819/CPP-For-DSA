// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int s;
//     cin>>s;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int flag=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             for(int k=j+1;k<n;k++)
//             if(a[i]+a[j]+a[k]==s)
//             {
//                 flag= 1;
//             } 
//         }if(flag==1)
//         {
//             cout<<"YES"<<endl;
//         }
//         else 
//         {
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int t=0;t<test;t++)
    {
        int n;
    cin>>n;
    int s;
    cin>>s;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
         for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
        {


        if(a[i]+a[j]+a[k]==s)
    {
        flag=1;
        break;
    }
    }
        }
        
        }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
    
    
    return 0;
}
