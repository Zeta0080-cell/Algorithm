//�2024-˭��������
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;

int main()
{
	int n;//n������ 
	cin>>n;
	int p[N];
	int k[N];
	int count[N]={0};//��¼ÿһ��ս�ӵĵ÷� 
	while(n--)//n������ 
	{
		for(int i=0;i<20;i++)
		{
			cin>>p[i]>>k[i];
			if(p[i]==1)
			{
				count[i]+=k[i]+12;
			}
			else if(p[i]==2)
			{
				count[i]+=k[i]+9;
			}
			else if(p[i]==3)
			{
				count[i]+=k[i]+7;
			}
			else if(p[i]==4)
			{
				count[i]+=k[i]+5;
			}
			else if(p[i]==5)
			{
				count[i]+=k[i]+4;
			}
			else if(p[i]>=6&&p[i]<=7)
			{
				count[i]+=k[i]+3;
			}
			else if(p[i]>=8&&p[i]<=10)
			{
				count[i]+=k[i]+2;
			}
			else if(p[i]>=11&&p[i]<=15)
			{
				count[i]+=k[i]+1;
			}
			else if(p[i]>=16&&p[i]<=20)
			{
				count[i]+=k[i];
			}
		}
	}
	for(int i=0;i<20;i++)
	{
		printf("%d %d\n",i+1,count[i]);
	}
	return 0;
} 
