//acwing788-逆序对数量(超时) 
#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int a[N];

int main()
{
	int n;
	int count=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i<j&&a[i]>a[j])
			{
				count++;
			}
		} 
	}
	printf("%d",count);
	return 0;
} 
