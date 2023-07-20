#include<iostream>
using namespace std;
class volume
{
    public:
    volume()
    {
        int l=5;
        cout<<"volume of cube is:"<<l*l*l<<endl;
    }
    volume(float a)
    {
        cout<<"volume of sphere is:"<<4/3*3.14*a*a*a<<endl;
    }
    volume(float r,float l)
    {
        cout<<"volume of cone is:"<<3.14*r*l<<endl;
    }
    volume(int l,int b,int h)
    {
        cout<<"area of rectangle:"<<l*b*h<<endl;
    }
};

int main()
{
    volume a,b(10),c(10,6),d(5,5,5);
}