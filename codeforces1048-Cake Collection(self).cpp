//codeforces1048-Cake Collection(self) 
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;

int main()
{
	int t;//һ������t����������
	int n,m;//oven����
	vector<int> a(N);
	cin>>t;
	while(t--)
	{
		scanf("%d%d",&n,&m);
		int result=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];//������� 
		}
		sort(a.begin(),a.end());
		for(int j=1;j<=n;j++)
		{
			a[n-j]=a[n-j]*(m-(j-1));
		}
		for(int k=0;k<n;k++)
		{
			result+=a[k];
		}
		printf("%d\n",result);
	}
	return 0;
}
