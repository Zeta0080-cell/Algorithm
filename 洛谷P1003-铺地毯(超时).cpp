//���P1003-�̵�̺(��ʱ)
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
int v[N][N];

int main()
{
	int n;//��ʾ��n�ŵ�̺ 
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

