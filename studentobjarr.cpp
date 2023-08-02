#include<iostream>
using namespace std;
class marksheet
{
    int p,c,m;
    public:
    void setdata()
    {
    
        cout<<"enter p:";
        cin>>p;
        cout<<"enter c:";
        cin>>c;
        cout<<"enter m:";
        cin>>m;
    }
    
    void getdata()
    {
        cout<<"\ntotal marks is"<<p+c+m;
    }
};

int main()
{
    marksheet a[3];
    for(int i=1;i<=3;i++)
    {
        cout<<"enter marks of student"<<i<<endl;
        a[i].setdata();
    }
    for(int i=1;i<=3;i++)
    {
        a[i].getdata();
    }
}
