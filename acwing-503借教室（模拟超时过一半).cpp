//acwing-503借教室（模拟超时过一半) 
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
int r[N];

int main()
{
	int n,m;//天数和订单数 
	int tmp,flag=0;//订单初始数量记录 
	int d,s,t;
	cin>>n>>m;
	tmp=m;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&r[i]);//第i天可用于租借的教室数量 
	}
	while(m--)
	{
		scanf("%d%d%d",&d,&s,&t);
		for(int i=s;i<=t;i++)
		{
			r[i]-=d;
		}
		for(int j=1;j<=n;j++)
		{
			if(r[j]<0)
			{
				printf("-1\n%d",tmp-m);
				flag=0;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
	for(int j=1;j<=n;j++)
	{
		if(r[j]>=0)
		{
			printf("0");
		}
	}
	return 0;
} 
