#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    int roll;
    float cgpa;
};
int main()
{
    student a;
    a.roll =29;
    a.cgpa =3.75;
    char tmp[100]="rakib";
    strcpy(a.name,tmp);
    cout << a.name <<" "<<a.roll<<" "<<a.cgpa <<endl;
    return 0;
}


