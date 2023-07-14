#include<iostream>
using namespace std;
int main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int b[3][3]={1,2,3,4,5,6,7,8,9};
	int c[3][3];
	int i,j;
	for(int i=0;i<3;i++)
	{
	
		for(int j=0;j<3;j++)
		{
		cout<<a[i][j];
		}
	cout<<"\n";
	}
for(int i=0;i<3;i++)
	{
	
		for(int j=0;j<3;j++)
		{
		cout<<a[i][j];
		}
	cout<<"\n";
	}
for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	c[i][j]=a[i][j]+b[i][j];
	}
	cout<<"\n";
	}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<c[i][j];
}
cout<<"\n";

}
return 0;
}