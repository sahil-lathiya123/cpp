#include<iostream>
using namespace std;
int main()
{
	int a[10],even=0,odd=0;

for(int i=0;i<=10;i++)
{
	a[i]=i;
	if(a[i]%2==0)
	{
	even=even+a[i];
	cout<<a[i];
	}
	else
	{
	odd=odd+a[i];
	cout<<a[i];
	}
}
	cout<<"\neven sum:"<<even;
	cout<<"\nodd sum:"<<odd;
	
return 0;
}