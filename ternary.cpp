#include<iostream>
using namespace std;
int main()
{
int a,b,c,x;
cout<<"enter a:";
cin>>a;
cout<<"enter b:";
cin>>b;
cout<<"enter c:";
cin>>c;
x=a>b?a>c?a:c:b>c?b:c;
cout<<"largest number:"<<x;
}