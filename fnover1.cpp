#include<iostream>
using namespace std;
class area
{
    public:
    int cal(int l)
    {
        return l*l;
    }
    float cal(double r)
    {
        return 3.14*r*r;
    }
    int cal(int a,int b)
    {
        return a*b;
    }
    float cal(double b,double h)
    {
        return 0.5*b*h;
    }

};

int main()
{
    area a;
    cout<<"area of square is:"<<a.cal(4)<<endl;
    cout<<"area of circle is:"<<a.cal(6.2)<<endl;
    cout<<"area of rectangle is:"<<a.cal(2,10)<<endl;
    cout<<"area of triangle is:"<<a.cal(2.5,2.5)<<endl;
}