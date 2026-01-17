// 洛谷P1147 - 连续自然数和(双指针） 
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;

int main()
{
	int m;
	int a[N] = {0};
	int s[N]; 
	scanf("%d",&m);
	for(int i = 1; i <= 1000000; i ++)
	{
		s[i] = s[i - 1] + a[i];
	}
	for(int i = 1; i <= 1000000; i ++)
	{
		for(int j = 1; j <= 1000000; j ++)
		{
			if(s[j] - s[i - 1] == m)
			{
				printf("%d %d\n",i,j);
			}
		}
	}
	return 0;
} 
