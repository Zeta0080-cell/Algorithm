//模板题-Trie(字典树)字符串统计2
#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int son[N][26],cnt[N],idx=0;//下标是0的点，既是根节点，又是空节点
char str[N]; 

void insert(char str[])
{
	int p=0;
	for(int i=0;str[i];i++)//遍历字符串 
	{
		int u=str[i]-'a';
		if(!son[p][u])//创建 
		{
			son[p][u] = ++idx; // 创建新节点，分配新编号
		}
		p=son[p][u];//移动到下一个节点 
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
		char op[2];
		scanf("%s%s",op,str);
		if(op[0]=='I')
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
