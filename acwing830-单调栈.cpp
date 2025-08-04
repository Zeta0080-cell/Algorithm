//acwing830-单调栈
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
			tt--;//如果栈中的元素比x大，就弹出 
		}
		if(tt)
		{
			printf("%d ",stk[tt]);//输出栈顶元素 
		}
		else
		{
			printf("-1 ");
		}
		stk[++tt]=x;
	}
	return 0;
} 
