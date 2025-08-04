//acwing830-单调栈（暴力超时）
#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int a[N];

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			printf("-1 ");
		}
		for(int j=i-1;j>=0;j--)
		{
			if(a[i]>a[j])
			{
				printf("%d ",a[j]);
				break;
			}
			else if(j<=0)
			{
				printf("-1 ");
			}
			
		}
	}
	return 0; 
} 
