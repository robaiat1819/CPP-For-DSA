#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int cls;
    int roll;
    float gpa;
    student(int r,int c,float g)
    {
        (*this).roll=roll;
        (*this).cls=cls;
        (*this).gpa=gpa;
    }
};
int main()
{
    student rahim(39,9,5.00);
    student karim(50,9,4.33);
    cout<<rahim.roll <<" "<<rahim.cls <<" " <<rahim.gpa<< endl;
    cout<<karim.roll <<" "<<karim.cls <<" " <<karim.gpa<< endl;
    return 0;
}