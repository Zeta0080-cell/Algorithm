//acwing830-����ջ
#include<bits/stdc++.h>
using namespace std;
const int N=100010;

int n;
int stk[N],tt;

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		while(tt&&stk[tt]>=x)
		{
			tt--;//���ջ�е�Ԫ�ر�x�󣬾͵��� 
		}
		if(tt)
		{
			printf("%d ",stk[tt]);//���ջ��Ԫ�� 
		}
		else
		{
			printf("-1 ");
		}
		stk[++tt]=x;
	}
	return 0;
} 
