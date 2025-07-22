//acwing800-数组元素的目标和(暴力超时) 
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
int a[N],b[N];

int main()
{
	int n,m,x;//目标值
	cin>>n>>m>>x;//A长,B长，目标值 
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	} 
	for(int j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i]+b[j]==x)
			{
				printf("%d %d",i,j);
			}
		}
	}
	return 0;
} 
