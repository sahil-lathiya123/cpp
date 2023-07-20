#include<iostream>
using namespace std;
class report
{
    int adno;
    char name[20];
    float marks[5],sum=0,avg;

    
    public:
    
    report()
    {
        cout<<"enter the admin number:";
        cin>>adno;
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter marks:";

        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
            sum=sum+marks[i];
        }
        avg=sum/5;

        
    }

    void displayinfo()
    {
        

        cout<<"\nadmin number:"<<adno;
        cout<<"\nname:"<<name;
        cout<<"\ntotal marks:"<<sum;
        cout<<"\naverage:"<<avg;
    }
};

int main()
{
    report r;
    r.displayinfo();
}