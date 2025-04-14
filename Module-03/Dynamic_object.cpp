#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int cls;
    float gpa;
    student(int roll,int cls,float gpa)
    {
        this->roll =roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    student *karim =new student(342,10,4.56);
    cout<<karim->roll <<" "<<karim->cls <<" "<<karim->gpa << endl;
    return 0;
}