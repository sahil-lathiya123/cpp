#include<iostream>
using namespace std;
class area
{
    public:
    area()
    {
        int l=5;
        cout<<"area of square is:"<<l*l<<endl;
    }
    area(float r)
    {
        cout<<"area of circle is:"<<3.14*r*r<<endl;
    }
    area(int a,int b)
    {
        cout<<"area of rectangle is:"<<a*b<<endl;
    }
    area(double b,double h)
    {
        cout<<"area of triangle is:"<<0.5*b*h<<endl;
    }

};

int main()
{
    area a,b(10),c(5,10),d(5.0,6.0);
}