//acwing-�ַ���ȥ���ո�(˫ָ���㷨)
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;

int main()
{
	char str[1000];
	gets(str);
	int n=strlen(str);//��ȡ�ַ����ĳ��� 
	for(int i=0;i<n;i++)
	{
		int j=i;
		while(j<n&&str[j]!=' ')
		{
			j++;
		}
		for(int k=i;k<j;k++)
		{
			cout<<str[k];
		}
		i=j;
	}
	return 0;
} 
