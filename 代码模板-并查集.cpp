//代码模板-并查集
#include<bits/stdc++.h>
using namespace std;
const int N=1e6;

int n,m;
int p[N];

int find(int x) //返回x的祖宗节点，并且进行路径压缩优化
{
	if(p[x] != x)  p[x]	= find(p[x]);
	return p[x]; //返回根节点 
} 

int main()
{
	scanf("%d%d",&n,&m);
	for(int i = 1; i <= n; i ++)
	{
		p[i] = i;
	}
	while(m--)
	{
		char op[2];
		int a,b;
		scanf("%s%d%d",op,&a,&b);
		if(op[0] == 'M') p[find(a)]=find(b); //将b的根节点直接插入a集合中
		else 
		{
			if(find(a) == find(b)) printf("Yes\n");
			else printf("No\n");	
		} 
	}
	return 0;
}
