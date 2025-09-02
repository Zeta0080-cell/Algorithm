//Trie��-�ַ�������
#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int son[N][26];//�����ؼ���� ,son����洢�������� 
int cnt[N],idx;
char str[N];

void insert(char str[])
{
	int p=0;
	for(int i=0;str[i];i++)
	{
		int u=str[i]-'a';//�ҵ�ÿ���ӽڵ�洢���ַ�
		if(!son[p][u])
		{
			son[p][u]=++idx;	
		} 
		p=son[p][u];//����������p 
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
