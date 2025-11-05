//DFS-全排列
#include<bits/stdc++.h>
using namespace std;
const int N = 1e2;
int n,book[N] = {0},path[N];

void DFS(int step)
{
	if(step == n)
	{
		for(int i = 0; i < n; i ++)
		{
			printf("%d ",path[i]);    //输出路径 
		}
		printf("\n");
		return;
	}
	
	//
	for(int i = 1; i <= n; i ++)
	{
		if(book[i] == 0)      //i元素还未被使用 
		{
			path[step] = i;
			book[i] = 1;
			DFS(step + 1);
			book[i] = 0;
		}
	}
}

int main()
{
	cin >> n;
	DFS(0);
	return 0;
}
