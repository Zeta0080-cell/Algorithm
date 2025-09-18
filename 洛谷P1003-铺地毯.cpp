//洛谷P1003-铺地毯
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;

int main()
{
	int n;//表示n张地毯
	int x,y;//所求点 
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
		if((x>=a[i]&&x<=a[i]+g[i])&&(y>=b[i]&&y<=b[i]+k[i]))//直接判断是否覆盖 
		{
			ans=i;	
		}	
	} 
	printf("%d",ans);
	return 0;
}
