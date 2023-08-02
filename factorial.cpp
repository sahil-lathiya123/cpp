#include<iostream>
using namespace std;
class base
{
    public:
    int n,total=1;
    void factorial()
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
        for(int i=n;i>=1;i--)
        {
            total=total*i;
        }
        cout<<"factorial:"<<total;

    }
};

int main()
{
    derived d;
    d.factorial();
    d.display();
}