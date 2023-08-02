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
    int i,total=1;
};

class derived:public base1,public base2
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
    d.setN();
    d.factorial();
}
