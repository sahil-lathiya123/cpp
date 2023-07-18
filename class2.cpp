#include<iostream>
using namespace std;
class batsman 
{
    private:
    int bcode,innings,notout,runs;
    char bname[20];
    float batavg;
    float calcavg()
    {
        return runs/(innings-notout);
    }

    public:
    void readdata()
    {
        cout<<"\nenter value of bcode:";
        cin>>bcode;
        cout<<"enter name:";
        cin>>bname;
        cout<<"enter innings:";
        cin>>innings;
        cout<<"not out:";
        cin>>notout;
        cout<<"enter runs:";
        cin>>runs;

        batavg=calcavg();
    }
    
    void displaydata()
    {
        cout<<"\nbcode:"<<bcode;
        cout<<"\nbname:"<<bname;
        cout<<"\ninnings:"<<innings;
        cout<<"\nnotout:"<<notout;
        cout<<"\nruns:"<<runs;
        cout<<"\nbatavg:"<<batavg;
        
    }
};

int main()
{
    batsman b;
    b.readdata();
    b.displaydata();

}