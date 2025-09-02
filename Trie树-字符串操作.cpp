//Trie树-字符串操作
#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int son[N][26];//三个关键组件 ,son数组存储的是索引 
int cnt[N],idx;
char str[N];

void insert(char str[])
{
	int p=0;
	for(int i=0;str[i];i++)
	{
		int u=str[i]-'a';//找到每个子节点存储的字符
		if(!son[p][u])
		{
			son[p][u]=++idx;	
		} 
		p=son[p][u];//将索引赋予p 
	}
	cnt[p]++;
}

int query(char str[])
{
	int p=0;
	for(int i=0;str[i];i++)
	{
		int u=str[i]-'a';
		if(!son[p][u])
		{
			return 0;
		}
		p=son[p][u];
	}
	return cnt[p];
}

int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		char op;
		scanf("%c%s",op,str);
		if(op=='I')
		{
			insert(str);
		}
		else
		{
			printf("%d\n",query(str));
		}
	} 
	return 0;
} 
