//���P1003-�̵�̺
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;

int main()
{
	int n;//��ʾn�ŵ�̺
	int x,y;//����� 
	int a[N],b[N],g[N],k[N];
	int ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d%d%d",&a[i],&b[i],&g[i],&k[i]);
	}
	cin>>x>>y;
	for(int i=1;i<=n;i++)
	{
		if((x>=a[i]&&x<=a[i]+g[i])&&(y>=b[i]&&y<=b[i]+k[i]))//ֱ���ж��Ƿ񸲸� 
		{
			ans=i;	
		}	
	} 
	printf("%d",ans);
	return 0;
}
