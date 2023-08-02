#include<iostream>
using namespace std;
class base1
{
    public:
    int n;
    void setN()
    {
    cout<<"enter value of n:";
    cin>>n;
    }
};

class base2
{
    public:
    int i;
};

class derived:public base1,public base2
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
    d.setN();
    d.square();
}
