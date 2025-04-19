#include<bits/stdc++.h>
using namespace std;
class person
{
    string name;
    int age;
    person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    void hello()
    {
        cout<<"Hello"<<endl;
    }
    
};
int main()
{
    person rakib("rakib ahsan",24);
    cout<<rakib.name<<" "<<rakib.age<<endl;
    return 0;
}