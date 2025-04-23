#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int cls;
        char section;
        int id;

};
int main()
{
    int n;
    cin>>n;
    Student* student= new Student[n];
    for(int i=0;i<n;i++)
    {
        cin>>student[i].name >>student[i].cls>>student[i].section>>student[i].id;   
    }
    for(int i=0;i<n/2;i++)
    {
        swap(student[i].section,student[n-1-i].section);
    }
    for(int i=0;i<n;i++)
    {
        cout<<student[i].name<<" "<<student[i].cls<<" "<<student[i].section<<" "<<student[i].id<<endl;
    }
    return 0;
}