//acwing-字符串去除空格(双指针算法)
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;

int main()
{
	char str[1000];
	gets(str);
	int n=strlen(str);//读取字符串的长度 
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
