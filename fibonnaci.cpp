#include<iostream>
using namespace std;
int main()
{
int n1=-1,n2=1,n3,i,n;
cout<<"enter n:";
cin>>n;
for(i=-n;i<=n;i++)
{
    n3=n1+n2;
    cout<<n3;
    n1=n2;
    n2=n3;
}
}