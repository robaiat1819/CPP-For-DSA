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
student fun()
{
    student rahim(300,5,4.90);
    return rahim;
}
int main()
{
    student ans =fun();
    cout<<ans.roll<<" "<<ans.cls<<" "<<ans.gpa<<endl;
    return 0;
}