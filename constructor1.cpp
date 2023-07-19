#include<iostream>
using namespace std;
class marksheet

{
    int p,c,m,total;
        float percentage;
    public:
    marksheet()
    {
        

        cout<<"\nenter marks of physics:";
        cin>>p;
        cout<<"\nenter marks of chemistry:";
        cin>>c;
        cout<<"\nenter marks of maths:";
        cin>>m;
        total=p+c+m;
        percentage=(total*100)/300;

    }
    void display()
    {
        cout<<"\nmarks of physics is:"<<p;
        cout<<"\nmarks of chemistry is:"<<c;
        cout<<"\nmarks of maths is:"<<m;
        cout<<"\ntotal marks:"<<total;
        cout<<"\npercentage:"<<percentage;

    }
};

int main()
{
    marksheet m;
    m.display();
}