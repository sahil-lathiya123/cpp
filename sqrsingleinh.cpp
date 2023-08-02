#include<iostream>
using namespace std;
class base
{
    public:
    int n;
    void square()
    {
        cout<<"enter value of n:";
        cin>>n;
    }
};

class derived:public base
{
    public:
    void display()
    {
        for(int i=0;i<=n;i++)
        {
            cout<<"\t"<<i*i;
        }
    }
};

int main()
{
    derived d;
    d.square();
    d.display();
}