//acwing801-二进制中1的个数
#include<bits/stdc++.h>
using namespace std;

int lowbit(int x)
{
	return x&-x;
}

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int x;
		cin>>x;
		int res=0;
		while(x)
		{
			x-=lowbit(x);
			res++;
		}
		printf("%d ",res);
	}
	return 0;
} 
