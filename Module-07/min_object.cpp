#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        string name;
        int roll;
        int marks;
};
int main()
{
    int n;
    cin>>n;
    student a[n];
    // student *a = new student[i];
    for(int i=0;i<n;i++)
    {
        
        
        cin>>a[i].name >>a[i].roll >>a[i].marks ;
    }
    // student mn;
    // mn.marks=INT_MAX;
    student mx;
    mx.marks=INT_MIN;
    // for(int i=0;i<n;i++)
    // {
    //     if(a[i].marks<mn.marks)
    //     {
    //         mn=a[i];
    //     }
    // }
    for(int i=0;i<n;i++)
    {
        if(a[i].marks > mx.marks)
        {
            mx= a[i];
        }
    }
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;

    // cout<<mn.name <<" "<<mn.roll<<" "<<mn.marks <<endl;
    return 0;
}