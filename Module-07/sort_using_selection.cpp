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
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i].marks<a[i].marks)
            {
                swap(a[i],a[j]);
            }
            if(a[i].marks ==a[j].marks)
            {
                if(a[i].roll>a[j].roll)
                {
                    swap(a[i],a[j]);
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}