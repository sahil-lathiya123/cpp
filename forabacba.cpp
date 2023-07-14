#include<iostream>
using namespace std;
int main()
{
char a,b,c;
for(a=0;a<5;a++)
{
    for(b=a;b>=0;b--)
    {
        c=b+65;
        cout<<c;
    }
    cout<<"\n";
}
}