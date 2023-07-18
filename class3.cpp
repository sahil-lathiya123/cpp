#include<iostream>
using namespace std;
class test
{
private:
int testcode,nocandidate,centerreqd;
char description[100];
float calcntr()
{
    return nocandidate/100+1;
}

public:
void schedule()
{
    cout<<"enter testcode:";
    cin>>testcode;
    cout<<"enter number of candidate:";
    cin>>nocandidate;
    cout<<"enter description:";
    cin>>description;
    centerreqd=calcntr();

}

void disptest()
{
    cout<<"\ntestcode:"<<testcode;
    cout<<"\ndescription:"<<description;
    cout<<"\nno of candidate:"<<nocandidate;
    cout<<"\ntestcode:"<<testcode;
    cout<<"\ncenterreqd:"<<centerreqd;
    
    
}
};

int main()
{
    test t;
    t.schedule();
    t.disptest();
}