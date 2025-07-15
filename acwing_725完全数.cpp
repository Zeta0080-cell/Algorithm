#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int Perfect (int n)
{
	int i,item,sum=0,flag;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			item=i;
			sum=sum+item;	
		}	
	}
	if(sum==n)
	{
		flag=1;
	}
	else
	{
		flag=0;
	}
	return 0;		
}
int main()
{
	int m,n,i;
	cin>>m;
	while(m--)
	{
		cin>>n;
		if(Perfect(n)==1)
		{
			printf("%d is perfect\n",n);	
		}	
		else
		{
			printf("%d is not perfect\n",n);
		}
	}
}
