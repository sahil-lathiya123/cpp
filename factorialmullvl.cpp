#include<iostream>
using namespace std;
class base
{
    public:
    int i,n,total=1;
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
    void factorial()
    {
        for(i=n;i>=1;i--)
        {
            total=total*i;
        }
        cout<<"factorial:"<<total<<endl;
    }
};

int main()
{
    derived d;
    d.setn();
    d.factorial();
}