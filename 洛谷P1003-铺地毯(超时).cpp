//洛谷P1003-铺地毯(超时)
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
int v[N][N];

int main()
{
	int n;//表示共n张地毯 
	int x,y;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a,b,g,k;
		scanf("%d%d%d%d",&a,&b,&g,&k);
		for(int x = a; x <= a + g; x++)  
		{
			for(int y = b; y <= b + k; y++) 
			{
				v[x][y] = i;
			}
		}
	}
	scanf("%d%d",&x,&y);
	printf("%d\n",v[x][y]);
	return 0;
}  

