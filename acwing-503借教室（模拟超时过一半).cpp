//acwing-503����ң�ģ�ⳬʱ��һ��) 
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
int r[N];

int main()
{
	int n,m;//�����Ͷ����� 
	int tmp,flag=0;//������ʼ������¼ 
	int d,s,t;
	cin>>n>>m;
	tmp=m;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&r[i]);//��i����������Ľ������� 
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
