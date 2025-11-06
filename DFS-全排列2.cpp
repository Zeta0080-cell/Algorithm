//DFS-全排列2
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;
int book[N],path[N],n;

void dfs(int step)
{
	if(step == n)
	{
		for(int i = 0; i < n; i ++)
		{
			printf("%d ",path[i]);
		}
		printf("\n");
		return;
	}
	for(int i = 1; i <= n; i ++)
	{
		if(book[i] == 0)  //i元素未被使用过 
		{
			path[step] = i;
			book[i] = 1; //使用并标记
			dfs(step+1);
			book[i] = 0; 
		}
	}
}

int main()
{
	cin >> n;
	dfs(0);
	return 0;
} 
