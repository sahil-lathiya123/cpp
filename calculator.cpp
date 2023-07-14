#include<iostream>
using namespace std;
int main()
{
int a,b,t,choice;
cout<<"enter choice:";
cin>>choice;
cout<<"enter a:";
cin>>a;
cout<<"enter b:";
cin>>b;
switch(choice)
{
case 1:
t=a+b;
cout<<t;
break;

case 2:
t=a-b;
cout<<t;
break;

case 3:
t=a*b;
cout<<t;
break;

case 4:
t=a/b;
cout<<t;
break;

case 5:
t=a%b;
cout<<t;
break;

default:
cout<<"no value";
}
}