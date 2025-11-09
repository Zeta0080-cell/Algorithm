//acwing-皇后问题
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;
char g[N][N];
int col[N],dg[N],udg[N],n;

//搜索每一行皇后放在哪一列上 
void dfs(int u)
{
	//终止条件 
	if(u == n)
	{
		for(int i = 0 ; i < n; i ++)
		{
			puts(g[i]);
		}
		puts("");
		return; 
	}
	
	for(int i = 1; i <= n; i ++)
	{
		if(!col[i] && !dg[u + i] && !udg[n - u + i])   //元素未被使用 
		{
			g[u][i] = 'Q';
			col[i] = dg[u + i] = udg[n - u + i] = true;
			dfs(u + 1);
			col[i] = dg[u + i] = udg[n - u + i] = false;
			g[u][i] = '.';
		}
	}
}

int main()
{
	cin >> n;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			g[i][j] = '.';
		}
	}
	dfs(0);	
	return 0;
} 
