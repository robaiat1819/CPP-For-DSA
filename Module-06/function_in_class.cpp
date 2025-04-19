#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int age;
        person (string nm,int ag)
        {
            name=nm;
            age=ag;
        }
        {
            void hello()
            {
                cout<<name<<" "<<age<<endl;
            }
        }
};
int main()
{
    person rakib("rakib ahsan",20)
    rakib.hello();
    return 0;
}