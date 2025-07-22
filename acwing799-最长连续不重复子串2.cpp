//acwing799-最长连续不重复子串2
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
int a[N],s[N];

int main()
{
	int n;
	int res=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0,j=0;i<n;i++)
	{
		s[a[i]]++;
		while(s[a[i]]>1)
		{
			s[a[j]]--;
			j++;
		}
		res=max(res,i-j+1);
	}
	printf("%d",res);
	return 0;
}
