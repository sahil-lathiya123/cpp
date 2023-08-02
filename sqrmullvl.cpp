#include<iostream>
using namespace std;
class base
{
    public:
    int i,n;
};

class test:public base
{
    public:
    void setn()
    {
    cout<<"enter n:";
    cin>>n;
    }

};

class derived:public test
{
    public:
    void square()
    {
        for(i=0;i<=n;i++)
        {
            cout<<"\t"<<i*i;
        }
    }
};

int main()
{
    derived d;
    d.setn();
    d.square();
}