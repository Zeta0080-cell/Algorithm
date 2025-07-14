//代码模版-前缀和
#include<bits/stdc++.h>
using namespace std;
const int N=1e6;

int main()
{
	int s[N];//用于存储前缀和 
	s[N]=0;
	int a[N];//用于存储序列 
	int n;//整数序列的长度
	int m;//一共m次询问
	int l,r;//询问的边界
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		s[i]=s[i-1]+a[i];	
	} 
	while(m--)
	{
		scanf("%d%d",&l,&r);
		printf("%d",s[r]-s[l-1]);
	}
	return 0;
} 
