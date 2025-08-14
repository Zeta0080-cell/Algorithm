//模板题-Trie(字典树)字符串统计
#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int son[N][26],cnt[N],idx;//下标是0的点，既是根节点，又是空节点
char str[N]; 

void insert(char str[]) // 插入字符串 str 到 Trie 中
{
    int p = 0; // 从根节点（0）开始
    for (int i = 0; str[i]; i++) // 遍历字符串的每个字符
    {
        int u = str[i] - 'a'; // 将字符转换为数字（0~25）
        if (!son[p][u]) // 如果当前字符没有对应的子节点(初始化创建过程) 
        {
            son[p][u] = ++idx; // 创建新节点，分配新编号
        }
        p = son[p][u]; // 移动到子节点
    }
    cnt[p]++; // 字符串插入完成，记录出现次数
}

int query(char str[])//查询操作
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
