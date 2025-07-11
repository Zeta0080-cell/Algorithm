//î£¿¹2024-A
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;

int main()
{
	int n,w;
	int a[N];
	int count1=0,count2=0;
	cin>>n>>w;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(w==4&&a[i]>=35)
		{
			count2++;
		}
		else if(w!=4&&a[i]>=35)
		{
			count1++;
		}
		w++;
		if(w==8)
		{
			w=1;
		}
	}
	printf("%d %d",count1,count2);
	return 0;
}
