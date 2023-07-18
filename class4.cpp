#include<iostream>
using namespace std;
class member
{
    private:
    int flyno;
    char desti[100];
    float distance,fuel;
    float calfuel()
    {
        if(distance<=1000)
        {
            return fuel=500;
        }
        else if(distance>1000 && distance<=2000)
        {
            return fuel=1100;
        }
        else if(distance>2000)
        {
            return fuel=2200;
        }
    }

    public:
    void feedinfo()
    {
        cout<<"enter the flight number:";
        cin>>flyno;
        cout<<"enter destination:";
        cin>>desti;
        cout<<"distance:";
        cin>>distance;

        fuel=calfuel();
    }
    void showinfo()
    {
        cout<<"\nflight number:"<<flyno;
        cout<<"\ndestination:"<<desti;
        cout<<"\ndistaance:"<<distance;
        cout<<"\nfuel required:"<<fuel;
    }
};

int main()
{
    member m;
    m.feedinfo();
    m.showinfo();
}