#include<iostream>
using namespace std;
class minmax
{
    public:
    int a,b;
    void setdata()
    {
        cout<<"enter value of a:"<<endl;
        cin>>a;
        cout<<"enter value of b:"<<endl;
        cin>>b;
    }
    
    friend minmax value(minmax);
};

minmax value(minmax x)
{
    if(x.a>x.b)
    {
        cout<<"largest number is:"<<x.a<<endl;
    }
    else{
        cout<<"largest number is:"<<x.b<<endl;
    }
}

int main()
{
    minmax x;
    x.setdata();
    value(x);
}