//ģ����-Trie(�ֵ���)�ַ���ͳ��
#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int son[N][26],cnt[N],idx;//�±���0�ĵ㣬���Ǹ��ڵ㣬���ǿսڵ�
char str[N]; 

void insert(char str[]) // �����ַ��� str �� Trie ��
{
    int p = 0; // �Ӹ��ڵ㣨0����ʼ
    for (int i = 0; str[i]; i++) // �����ַ�����ÿ���ַ�
    {
        int u = str[i] - 'a'; // ���ַ�ת��Ϊ���֣�0~25��
        if (!son[p][u]) // �����ǰ�ַ�û�ж�Ӧ���ӽڵ�(��ʼ����������) 
        {
            son[p][u] = ++idx; // �����½ڵ㣬�����±��
        }
        p = son[p][u]; // �ƶ����ӽڵ�
    }
    cnt[p]++; // �ַ���������ɣ���¼���ִ���
}

int query(char str[])//��ѯ����
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
